#!/usr/bin/env python3
"""Create a reproducible DxLImGui source release archive."""

from __future__ import annotations

import argparse
import hashlib
import os
import re
import stat
import sys
import tempfile
import zipfile
from dataclasses import dataclass
from pathlib import Path, PurePosixPath


VERSION_PATTERN = re.compile(r"^v([0-9]+)\.([0-9]+)\.([0-9]+)$")
SOURCE_VERSION_PATTERN = re.compile(
    r'^\s*#define\s+DXLIMGUI_VERSION_STRING\s+"([^"]+)"\s*$',
    re.MULTILINE,
)
MARKDOWN_LINK_PATTERN = re.compile(r"!?\[[^\]]*\]\(([^)]+)\)")
GITHUB_URL_PLACEHOLDER = "{{GITHUB_REPOSITORY_URL}}"
FIXED_ZIP_TIMESTAMP = (1980, 1, 1, 0, 0, 0)
EXPECTED_FILE_COUNT = 27

FORBIDDEN_DIRECTORY_NAMES = {
    ".git",
    ".github",
    ".vs",
    "build",
    "dist",
    "local",
}
FORBIDDEN_SUFFIXES = {
    ".exe",
    ".ilk",
    ".lib",
    ".obj",
    ".pdb",
    ".user",
}


class ReleaseError(Exception):
    """An expected release-generation error."""


@dataclass(frozen=True)
class ArchiveEntry:
    source_path: str
    archive_path: str


ARCHIVE_ENTRIES = (
    ArchiveEntry("release/README.md", "README.md"),
    ArchiveEntry(
        "release/THIRD_PARTY_NOTICES.md",
        "THIRD_PARTY_NOTICES.md",
    ),
    ArchiveEntry("LICENSE", "LICENSE"),
    ArchiveEntry(
        "include/DxLImGui/DxLImGui.h",
        "include/DxLImGui/DxLImGui.h",
    ),
    ArchiveEntry("src/DxLImGui.cpp", "src/DxLImGui.cpp"),
    ArchiveEntry(
        "thirdparty/imgui/imgui.cpp",
        "thirdparty/imgui/imgui.cpp",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imgui_draw.cpp",
        "thirdparty/imgui/imgui_draw.cpp",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imgui_tables.cpp",
        "thirdparty/imgui/imgui_tables.cpp",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imgui_widgets.cpp",
        "thirdparty/imgui/imgui_widgets.cpp",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imgui_demo.cpp",
        "thirdparty/imgui/imgui_demo.cpp",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imgui.h",
        "thirdparty/imgui/imgui.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imconfig.h",
        "thirdparty/imgui/imconfig.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imgui_internal.h",
        "thirdparty/imgui/imgui_internal.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imstb_rectpack.h",
        "thirdparty/imgui/imstb_rectpack.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imstb_textedit.h",
        "thirdparty/imgui/imstb_textedit.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/imstb_truetype.h",
        "thirdparty/imgui/imstb_truetype.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/backends/imgui_impl_win32.cpp",
        "thirdparty/imgui/backends/imgui_impl_win32.cpp",
    ),
    ArchiveEntry(
        "thirdparty/imgui/backends/imgui_impl_win32.h",
        "thirdparty/imgui/backends/imgui_impl_win32.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/backends/imgui_impl_dx11.cpp",
        "thirdparty/imgui/backends/imgui_impl_dx11.cpp",
    ),
    ArchiveEntry(
        "thirdparty/imgui/backends/imgui_impl_dx11.h",
        "thirdparty/imgui/backends/imgui_impl_dx11.h",
    ),
    ArchiveEntry(
        "thirdparty/imgui/LICENSE.txt",
        "thirdparty/imgui/LICENSE.txt",
    ),
    ArchiveEntry(
        "thirdparty/imgui/docs/FONTS.md",
        "thirdparty/imgui/docs/FONTS.md",
    ),
    ArchiveEntry(
        "examples/BasicExample.cpp",
        "examples/BasicExample.cpp",
    ),
    ArchiveEntry(
        "examples/ImageExample.cpp",
        "examples/ImageExample.cpp",
    ),
    ArchiveEntry(
        "examples/RenderTargetExample.cpp",
        "examples/RenderTargetExample.cpp",
    ),
    ArchiveEntry(
        "examples/AdvancedExample.cpp",
        "examples/AdvancedExample.cpp",
    ),
    ArchiveEntry(
        "examples/DemoForCapture.cpp",
        "examples/DemoForCapture.cpp",
    ),
)


def configure_standard_streams() -> None:
    """Use UTF-8 for messages when the active Python supports reconfigure."""
    for stream in (sys.stdout, sys.stderr):
        reconfigure = getattr(stream, "reconfigure", None)
        if reconfigure is not None:
            reconfigure(encoding="utf-8", errors="replace")


def parse_arguments() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Create a DxLImGui source release ZIP.",
    )
    parser.add_argument(
        "version",
        help="Release version in vX.Y.Z format, for example v0.1.0.",
    )
    parser.add_argument(
        "--force",
        action="store_true",
        help="Overwrite an existing ZIP and SHA-256 file.",
    )
    return parser.parse_args()


def validate_relative_posix_path(value: str, label: str) -> PurePosixPath:
    if not value:
        raise ReleaseError(f"{label} is empty.")
    if "\\" in value:
        raise ReleaseError(f"{label} contains a backslash: {value}")
    if value.startswith("/") or re.match(r"^[A-Za-z]:", value):
        raise ReleaseError(f"{label} is absolute: {value}")

    raw_parts = value.split("/")
    if any(part in {"", ".", ".."} for part in raw_parts):
        raise ReleaseError(f"{label} is not normalized: {value}")

    return PurePosixPath(value)


def has_symlink_component(root: Path, relative_path: PurePosixPath) -> bool:
    current = root
    for part in relative_path.parts:
        current = current / part
        if current.is_symlink():
            return True
    return False


def is_forbidden_archive_path(relative_path: PurePosixPath) -> bool:
    lowered_parts = tuple(part.casefold() for part in relative_path.parts)
    if any(part in FORBIDDEN_DIRECTORY_NAMES for part in lowered_parts):
        return True

    if (
        len(lowered_parts) >= 2
        and lowered_parts[0] == "thirdparty"
        and lowered_parts[1] == "dxlib"
    ):
        return True

    return relative_path.suffix.casefold() in FORBIDDEN_SUFFIXES


def read_source_version(project_root: Path) -> str:
    header_path = (
        project_root
        / "include"
        / "DxLImGui"
        / "DxLImGui.h"
    )
    if not header_path.is_file():
        raise ReleaseError(f"Missing version header: {header_path}")

    text = header_path.read_text(encoding="utf-8")
    match = SOURCE_VERSION_PATTERN.search(text)
    if match is None:
        raise ReleaseError(
            "DXLIMGUI_VERSION_STRING was not found in "
            "DxLImGui.h."
        )
    return match.group(1)


def validate_version(version: str, project_root: Path) -> None:
    match = VERSION_PATTERN.fullmatch(version)
    if match is None:
        raise ReleaseError(
            "Version must use vX.Y.Z format, for example v0.1.0."
        )

    argument_version = version[1:]
    source_version = read_source_version(project_root)
    if argument_version != source_version:
        raise ReleaseError(
            "Version mismatch: argument is "
            f"{argument_version}, but DXLIMGUI_VERSION_STRING is "
            f"{source_version}."
        )


def validate_entries(project_root: Path) -> dict[ArchiveEntry, Path]:
    if len(ARCHIVE_ENTRIES) != EXPECTED_FILE_COUNT:
        raise ReleaseError(
            "Internal manifest error: expected "
            f"{EXPECTED_FILE_COUNT} files, found {len(ARCHIVE_ENTRIES)}."
        )

    source_names: set[str] = set()
    archive_names: set[str] = set()
    missing_files: list[str] = []
    resolved_entries: dict[ArchiveEntry, Path] = {}
    resolved_root = project_root.resolve()

    for entry in ARCHIVE_ENTRIES:
        source_relative = validate_relative_posix_path(
            entry.source_path,
            "Source path",
        )
        archive_relative = validate_relative_posix_path(
            entry.archive_path,
            "Archive path",
        )

        if entry.source_path in source_names:
            raise ReleaseError(
                f"Duplicate source path: {entry.source_path}"
            )
        if entry.archive_path in archive_names:
            raise ReleaseError(
                f"Duplicate archive path: {entry.archive_path}"
            )
        source_names.add(entry.source_path)
        archive_names.add(entry.archive_path)

        if is_forbidden_archive_path(archive_relative):
            raise ReleaseError(
                f"Forbidden archive path: {entry.archive_path}"
            )

        source_path = project_root.joinpath(*source_relative.parts)
        if has_symlink_component(project_root, source_relative):
            raise ReleaseError(
                f"Symbolic links are not allowed: {entry.source_path}"
            )
        if not source_path.is_file():
            missing_files.append(entry.source_path)
            continue

        resolved_source = source_path.resolve()
        try:
            resolved_source.relative_to(resolved_root)
        except ValueError as error:
            raise ReleaseError(
                f"Source path leaves the project root: {entry.source_path}"
            ) from error

        resolved_entries[entry] = resolved_source

    if missing_files:
        details = "\n".join(f"  - {path}" for path in missing_files)
        raise ReleaseError(f"Required files are missing:\n{details}")

    validate_release_documents(resolved_entries)
    return resolved_entries


def validate_release_documents(
    resolved_entries: dict[ArchiveEntry, Path],
) -> None:
    archive_paths = {entry.archive_path for entry in resolved_entries}
    document_entries = [
        entry
        for entry in resolved_entries
        if entry.archive_path in {"README.md", "THIRD_PARTY_NOTICES.md"}
    ]

    for entry in document_entries:
        text = resolved_entries[entry].read_text(encoding="utf-8")
        if GITHUB_URL_PLACEHOLDER in text:
            raise ReleaseError(
                f"Unresolved GitHub URL in {entry.source_path}."
            )

        document_parent = PurePosixPath(entry.archive_path).parent
        for match in MARKDOWN_LINK_PATTERN.finditer(text):
            target = match.group(1).strip()
            if (
                target.startswith(("http://", "https://", "mailto:", "#"))
                or not target
            ):
                continue

            target_path = target.split("#", 1)[0].split("?", 1)[0].rstrip("/")
            if not target_path:
                continue

            relative_target = validate_relative_posix_path(
                target_path,
                f"Markdown link in {entry.source_path}",
            )
            combined_target = document_parent / relative_target
            normalized_target = combined_target.as_posix()
            is_file = normalized_target in archive_paths
            directory_prefix = normalized_target.rstrip("/") + "/"
            is_directory = any(
                path.startswith(directory_prefix)
                for path in archive_paths
            )
            if not is_file and not is_directory:
                raise ReleaseError(
                    f"Broken local link in {entry.source_path}: {target}"
                )


def create_zip_info(name: str) -> zipfile.ZipInfo:
    info = zipfile.ZipInfo(name, date_time=FIXED_ZIP_TIMESTAMP)
    info.compress_type = zipfile.ZIP_DEFLATED
    info.create_system = 3
    info.external_attr = (stat.S_IFREG | 0o644) << 16
    info.internal_attr = 0
    info.extra = b""
    info.comment = b""
    return info


def write_archive(
    archive_path: Path,
    archive_root: str,
    resolved_entries: dict[ArchiveEntry, Path],
) -> None:
    with zipfile.ZipFile(
        archive_path,
        mode="w",
        compression=zipfile.ZIP_DEFLATED,
        compresslevel=9,
        allowZip64=True,
    ) as archive:
        for entry in sorted(
            resolved_entries,
            key=lambda item: item.archive_path,
        ):
            member_name = f"{archive_root}/{entry.archive_path}"
            data = resolved_entries[entry].read_bytes()
            archive.writestr(
                create_zip_info(member_name),
                data,
                compress_type=zipfile.ZIP_DEFLATED,
                compresslevel=9,
            )


def validate_archive(
    archive_path: Path,
    archive_root: str,
    resolved_entries: dict[ArchiveEntry, Path],
) -> None:
    expected_names = [
        f"{archive_root}/{entry.archive_path}"
        for entry in sorted(
            resolved_entries,
            key=lambda item: item.archive_path,
        )
    ]

    with zipfile.ZipFile(archive_path, mode="r") as archive:
        actual_names = archive.namelist()
        if actual_names != expected_names:
            raise ReleaseError(
                "ZIP contents do not match the release manifest."
            )

        damaged_member = archive.testzip()
        if damaged_member is not None:
            raise ReleaseError(
                f"ZIP integrity check failed: {damaged_member}"
            )

        for entry in resolved_entries:
            member_name = f"{archive_root}/{entry.archive_path}"
            if archive.read(member_name) != resolved_entries[entry].read_bytes():
                raise ReleaseError(
                    f"ZIP content differs from source: {entry.archive_path}"
                )

        prefix = f"{archive_root}/"
        for member_name in actual_names:
            if "\\" in member_name or not member_name.startswith(prefix):
                raise ReleaseError(
                    f"Unsafe ZIP member path: {member_name}"
                )
            relative_name = member_name[len(prefix):]
            relative_path = validate_relative_posix_path(
                relative_name,
                "ZIP member path",
            )
            if is_forbidden_archive_path(relative_path):
                raise ReleaseError(
                    f"Forbidden file was added to ZIP: {relative_name}"
                )


def calculate_sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as source:
        for block in iter(lambda: source.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()


def write_sha256_file(
    output_path: Path,
    archive_name: str,
    digest: str,
) -> None:
    with output_path.open("w", encoding="utf-8", newline="\n") as output:
        output.write(f"{digest}  {archive_name}\n")


def generate_release(
    project_root: Path,
    version: str,
    force: bool,
) -> None:
    validate_version(version, project_root)
    resolved_entries = validate_entries(project_root)

    archive_root = f"DxLImGui-{version}"
    archive_name = f"{archive_root}.zip"
    sha_name = f"{archive_name}.sha256"
    dist_directory = project_root / "dist"
    archive_output = dist_directory / archive_name
    sha_output = dist_directory / sha_name

    existing_outputs = [
        path
        for path in (archive_output, sha_output)
        if path.exists()
    ]
    if existing_outputs and not force:
        details = "\n".join(f"  - {path}" for path in existing_outputs)
        raise ReleaseError(
            "Output files already exist. Use --force to overwrite:\n"
            f"{details}"
        )

    dist_directory.mkdir(parents=True, exist_ok=True)

    with tempfile.TemporaryDirectory(
        prefix=".make-release-",
        dir=dist_directory,
    ) as temporary_directory:
        temporary_root = Path(temporary_directory)
        temporary_archive = temporary_root / archive_name
        temporary_sha = temporary_root / sha_name

        write_archive(
            temporary_archive,
            archive_root,
            resolved_entries,
        )
        validate_archive(
            temporary_archive,
            archive_root,
            resolved_entries,
        )

        digest = calculate_sha256(temporary_archive)
        write_sha256_file(
            temporary_sha,
            archive_name,
            digest,
        )

        os.replace(temporary_archive, archive_output)
        os.replace(temporary_sha, sha_output)

    print("Included files:")
    for entry in sorted(
        resolved_entries,
        key=lambda item: item.archive_path,
    ):
        print(
            f"  {entry.source_path} -> "
            f"{archive_root}/{entry.archive_path}"
        )
    print(f"ZIP: {archive_output}")
    print(f"SHA-256 file: {sha_output}")
    print(f"SHA-256: {digest}")


def main() -> int:
    configure_standard_streams()
    arguments = parse_arguments()
    project_root = Path(__file__).resolve().parent.parent

    try:
        generate_release(
            project_root,
            arguments.version,
            arguments.force,
        )
    except (ReleaseError, OSError, zipfile.BadZipFile) as error:
        print(f"ERROR: {error}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
