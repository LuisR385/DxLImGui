# DxLImGui v0.2.0 Release Package

DxLImGuiは、Windows上でDxLibとDear ImGuiのDirectX 11バックエンドを
接続するためのC++ライブラリです。

このZIPは、既存のVisual Studioプロジェクトへ組み込むためのソース配布物です。
ビルド済みライブラリや実行ファイルは含まれていません。

## 重要事項

このZIPには、DxLib本体、DxLibのヘッダー、静的ライブラリ、`DxLib.txt`は
含まれていません。

DxLib 3.24fを次の公式サイトから取得してください。

- [ＤＸライブラリ置き場 ダウンロードページ](https://dxlib.xsrv.jp/dxdload.html)
- [ＤＸライブラリ置き場 著作権関係](https://dxlib.xsrv.jp/dxlicense.html)

DxLImGuiはDxLib 3.24fで動作確認しています。

## 必要環境

- Windows
- Visual Studio 2022
- C++17
- DirectX 11
- DxLib 3.24f

同梱しているDear ImGuiのバージョンは1.92.6 WIPです。

## ZIPの構成

| パス | 内容 |
|---|---|
| `include/DxLImGui/` | DxLImGuiの公開ヘッダー |
| `src/` | DxLImGui本体の実装 |
| `thirdparty/imgui/` | Dear ImGui本体と必要なバックエンド |
| `examples/` | 単独ビルド可能なサンプル |
| `LICENSE` | DxLImGui本体のMIT License |
| `THIRD_PARTY_NOTICES.md` | 同梱する第三者ソフトウェアの通知 |

## プロジェクトへ追加するファイル

### DxLImGui

次のヘッダーをプロジェクトから参照できるようにします。

```text
include/DxLImGui/DxLImGui.h
```

次のソースをコンパイル対象へ追加します。

```text
src/DxLImGui.cpp
```

### Dear ImGui本体

次のソースをコンパイル対象へ追加します。

```text
thirdparty/imgui/imgui.cpp
thirdparty/imgui/imgui_draw.cpp
thirdparty/imgui/imgui_tables.cpp
thirdparty/imgui/imgui_widgets.cpp
```

`BasicExample.cpp`は`ImGui::ShowDemoWindow()`を使用するため、
サンプルをそのままビルドする場合は次のファイルも追加します。

```text
thirdparty/imgui/imgui_demo.cpp
```

### Dear ImGuiバックエンド

次のソースをコンパイル対象へ追加します。

```text
thirdparty/imgui/backends/imgui_impl_win32.cpp
thirdparty/imgui/backends/imgui_impl_dx11.cpp
```

### サンプル

サンプルを使用する場合は、`examples/`から1つの`.cpp`を選んで
コンパイル対象へ追加します。

各サンプルは単独ビルド用の`WinMain`を持つため、複数のサンプルを
同時に追加しないでください。

## includeパス

Visual Studioの「追加のインクルード ディレクトリ」へ、
次のディレクトリを追加します。

```text
<ZIPの展開先>\include
<ZIPの展開先>\thirdparty\imgui
<ZIPの展開先>\thirdparty\imgui\backends
<DxLib公式配布物>\プロジェクトに追加すべきファイル_VC用
```

新規コードでは次の形式で公開ヘッダーをインクルードします。

```cpp
#include <DxLImGui/DxLImGui.h>
```

## Unicode設定

Visual Studioで「Unicode文字セットを使用する」を選択してください。
`UNICODE`と`_UNICODE`を全翻訳単位で定義します。
画像パスは`const wchar_t*`です。例: `DxLImGui::Image image(L"assets/画像.png");`
Dear ImGuiのテキストと`FontConfig::filePath`はUTF-8の`const char*`です。

## DxLibのライブラリパス

Visual Studioの「追加のライブラリ ディレクトリ」へ、
DxLib公式配布物のヘッダーと静的ライブラリが置かれている
次のディレクトリを追加します。

```text
<DxLib公式配布物>\プロジェクトに追加すべきファイル_VC用
```

x64構成でDxLImGuiが動作確認に使用している主なライブラリは次のとおりです。

### Debug x64

```text
DxLibW_vs2015_x64_MTd.lib
DxUseCLibW_vs2015_x64_MTd.lib
DxDrawFunc_vs2015_x64_MTd.lib
```

ランタイムライブラリは`/MTd`を使用します。

### Release x64

```text
DxLibW_vs2015_x64_MT.lib
DxUseCLibW_vs2015_x64_MT.lib
DxDrawFunc_vs2015_x64_MT.lib
```

ランタイムライブラリは`/MT`を使用します。

DxLibのヘッダーから追加の静的ライブラリが自動的に参照されるため、
公式配布物のライブラリ一式を同じライブラリディレクトリへ保持してください。

利用するDxLibライブラリとVisual Studioプロジェクトのプラットフォーム、
Debug / Release、ランタイムライブラリを一致させてください。

## 最小コード例

```cpp
#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

namespace
{
    LRESULT CALLBACK HookWindowProc(
        HWND windowHandle,
        UINT message,
        WPARAM wParam,
        LPARAM lParam
    )
    {
        return DxLImGui::WndProcHandler(
            windowHandle,
            message,
            wParam,
            lParam
        );
    }
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    DxLib::SetGraphMode(960, 540, 32);
    DxLib::ChangeWindowMode(TRUE);
    DxLib::SetUseDirect3DVersion(DX_DIRECT3D_11);
    DxLib::SetHookWinProc(HookWindowProc);

    // 必ずDxLib_Init()より前に呼びます。
    DxLImGui::ConfigureEnableDpiAwareness();
    DxLImGui::SetupBeforeDxLibInit();

    if (DxLib::DxLib_Init() == -1)
    {
        return 1;
    }

    DxLib::SetDrawScreen(DX_SCREEN_BACK);

    DxLImGui::DxLImGuiConfig config;
    config.ViewportsEnable = false;

    if (!DxLImGui::Initialize(config))
    {
        DxLib::DxLib_End();
        return 1;
    }

    while (DxLib::ProcessMessage() == 0)
    {
        DxLib::ClearDrawScreen();

        DxLImGui::BeginFrame();

        ImGui::Begin("Hello");
        ImGui::TextUnformatted("Dear ImGui is rendering.");
        ImGui::End();

        DxLImGui::EndFrame();
        DxLib::ScreenFlip();
    }

    // 必ずDxLib_End()より前に呼びます。
    DxLImGui::Shutdown();
    DxLib::DxLib_End();
    return 0;
}
```

初期化と終了では、次の順序を守ってください。

1. `ConfigureEnableDpiAwareness()`と`SetupBeforeDxLibInit()`を
   `DxLib_Init()`より前に呼ぶ
2. `Initialize()`の成功後にフレーム処理を開始する
3. `Shutdown()`を`DxLib_End()`より前に呼ぶ

## サンプル

| ファイル | 内容 |
|---|---|
| [BasicExample.cpp](examples/BasicExample.cpp) | 最小初期化、フレームループ、Dear ImGuiデモ |
| [ImageExample.cpp](examples/ImageExample.cpp) | 外部アセットを必要としないImage表示 |
| [RenderTargetExample.cpp](examples/RenderTargetExample.cpp) | `DxLib::MakeScreen()`のリアルタイム表示 |
| [AdvancedExample.cpp](examples/AdvancedExample.cpp) | 生のGraphHandleの登録と解放順 |
| [DemoForCapture.cpp](examples/DemoForCapture.cpp) | デモ撮影用の画面 |

各サンプルは単独ビルド用です。利用するサンプルを1つだけ
プロジェクトへ追加してください。

## Release ZIPに含まれないもの

次の開発用ファイルは、このZIPには含まれていません。

- DxLib本体
- DxLibのヘッダーおよび静的ライブラリ
- DxLibの付属文書
- リポジトリ版のVisual Studioソリューションおよびプロジェクト
- 統合サンプルランチャー
- 回帰テストおよび安全性チェック
- デモGIF
- ビルド生成物
- 実行ファイル

リポジトリ版のソリューション、統合ランチャー、testsを使用する場合は、
GitHubリポジトリをcloneしてください。

## ライセンス

DxLImGui本体にはMIT Licenseが適用されます。
原文は[LICENSE](LICENSE)を確認してください。

Dear ImGui、stb由来コード、埋め込みフォントなどの通知は、
[THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md)を確認してください。

Dear ImGuiのライセンス原文は、
[thirdparty/imgui/LICENSE.txt](thirdparty/imgui/LICENSE.txt)に収録されています。

DxLibはこのZIPに含まれていません。別途取得したDxLibには、
DxLib公式配布物の条件が適用されます。

## GitHubリポジトリ

[LuisR385/DxLImGui](https://github.com/LuisR385/DxLImGui)

## 0.2.0の追加機能

- `DXLIMGUI_IMPLEMENTATION`による単一ヘッダー形式に対応。1つの翻訳単位でのみ定義し、この場合は`src/DxLImGui.cpp`をコンパイルしないでください。Dear ImGui本体とバックエンドは引き続き必要です。
- `RenderTarget::Resize()`と`CreateRenderTarget()`を追加。
- 任意のCustom入力向け参考実装を[extras/dxlib_input/README.md](extras/dxlib_input/README.md)に収録。Win32入力と同時に使用しないでください。
- `ApplyFonts(FontConfig)`は試験的APIです。明示的に呼び出し、有効なフォントパスを指定してください。初期化時の自動読み込みは行いません。
