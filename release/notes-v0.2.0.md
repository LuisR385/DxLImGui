# DxLImGui 0.2.0

Windows / DxLib / DirectX 11向けのソース配布です。0.1.0と同様に、開発中のプレリリースとして公開します。

## 主な変更

- 画像読み込みAPIのパスを `const wchar_t*` に変更し、DxLibのUnicode環境に対応。
- `DXLIMGUI_IMPLEMENTATION` を使う単一ヘッダー形式を追加。従来の `.h` + `.cpp` 形式も使用可能。
- `CreateRenderTarget()` と `RenderTarget::Resize()` を追加。
- Custom入力経路と、キーボード・マウス・ゲームパッド向けの任意の参考実装を `extras/dxlib_input/` に追加。
- `FontConfig` と試験的な `ApplyFonts(FontConfig)` を追加し、単一ヘッダー版とソース版の定義を統一。

## 0.1.0からの移行

- 画像パスには `L"assets/image.png"` のようなワイド文字列を指定してください。
- `UNICODE` / `_UNICODE` を定義し、DxLibのUnicode版（`DxLibW` / `DxUseCLibW`）を使用してください。
- 旧 `DxLImGuiConfig.h` の内容は `DxLImGui.h` に統合されています。
- 単一ヘッダー形式と `src/DxLImGui.cpp` のコンパイルは併用しないでください。Dear ImGui本体とバックエンドはどちらの形式でも必要です。
- Dear ImGuiのテキストと `FontConfig::filePath` はUTF-8です。`ApplyFonts` は試験的APIで、有効なパスを指定して明示的に呼び出します。

## 配布物

- `DxLImGui-v0.2.0.zip`: 公開ヘッダー、実装、5つの単独サンプル、任意のCustom入力参考実装、Dear ImGui本体・Win32/DX11バックエンド、README、ライセンス・第三者通知。
- `DxLImGui-v0.2.0.zip.sha256`: ZIPのSHA-256。

DxLib本体、ビルド済みライブラリ・実行ファイルは含みません。DxLibは公式サイトから別途取得してください。導入手順はZIP内のREADMEを参照してください。

## 確認内容

- MSVC / C++17 / Unicode: Debug x64・Release x64ビルド成功。
- 単一ヘッダー形式のコンパイル成功。
- Releaseの非描画リソース安全性チェック成功（終了コード0）。
- ZIPの30ファイル、ライセンス、ローカルリンク、禁止ファイル、CRC・SHA-256を検証。

ビルド検証では、環境のMSPDB140.DLLエラーを回避するためリンク時のデバッグ情報生成を無効化しました。今回、画面表示を伴う回帰テストは実施していません。

**Full Changelog**: https://github.com/LuisR385/DxLImGui/compare/v0.1.0...v0.2.0
