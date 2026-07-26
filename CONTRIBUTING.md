# Contributing to DxLImGui

DxLImGuiへの改善提案や不具合報告を歓迎します。

## 開発環境

- Windows
- Visual Studio 2022
- MSVC v143
- Windows 10 SDK

## ビルド

Visual Studio 2022の開発者コマンドプロンプトで、リポジトリルートから
次を実行してください。

```powershell
msbuild DxLImGui.sln /m /p:Configuration=Debug /p:Platform=x64
msbuild DxLImGui.sln /m /p:Configuration=Release /p:Platform=x64
```

生成物は`build/`へ出力されます。変更を送る前に、少なくともDebug x64と
Release x64がビルドできることを確認してください。

## ファイル配置

- 公開APIは`include/DxLImGui/`へ置きます。
- DxLImGui本体の実装は`src/`へ置きます。
- 利用例は`examples/`へ置きます。
- 回帰確認は`tests/`へ置きます。
- 外部依存は`thirdparty/`へ置き、ライセンス原文を保持します。
- ビルド生成物や実行時ログはコミットしません。

## 変更時の確認

1. 公開APIを変更した場合はREADMEとサンプルも更新します。
2. 挙動を変更した場合は該当する回帰チェックを追加または更新します。
3. 第三者コードや素材を追加した場合は、再配布条件を確認して
   `THIRD_PARTY_NOTICES.md`を更新します。
4. プロジェクト名、ソリューション名、生成物名には`DxLImGui`を使用します。

プルリクエストには、変更理由、確認した構成、実行したチェックを記載してください。
