# DxLImGui 0.2.2

正式リリースです（プレリリースではありません）。Windows / DxLib / DirectX 11向けのソース配布です。

## 主な変更

- `Advanced::InitializeContext()`、`InitializeWin32()`、`InitializeDX11()` による段階的な初期化を追加。従来の `Initialize()` も使用できます。
- 二重初期化、別コンテキスト、DxLib資源不足、Custom入力との競合を確認。途中状態も `Shutdown()` で解放できます。
- 単一ヘッダー形式を廃止し、公開宣言を `.h`、実装を `.cpp` に統一。
- 関数内の画像キャッシュ参照名を変更し、隠蔽警告C4459を解消。
- バージョン表記・診断文言・導入手順を更新。

## v0.2.0からの移行

`DXLIMGUI_IMPLEMENTATION` の定義を削除し、`src/DxLImGui.cpp` をコンパイル対象へ追加してください。静的ライブラリ／DLLを利用している場合は再ビルドしてください。

段階的な初期化では、Context作成後に任意の設定を挟めます。Win32とDX11は順不同です。Custom入力ではWin32初期化を省略し、入力コールバックを指定してください。必要なバックエンドの初期化が完了してから `BeginFrame()` を呼びます。

## 配布物

- `DxLImGui-v0.2.2.zip`：公開ヘッダー・実装CPP、5つのサンプル、任意のCustom入力参考実装、Dear ImGui本体とWin32/DX11バックエンド、README・ライセンス・第三者通知（計30ファイル）。
- `DxLImGui-v0.2.2.zip.sha256`：ZIPのSHA-256。

DxLib本体、ビルド済みライブラリ・実行ファイルは含みません。DxLibは公式配布元から取得してください。

## 検証

- MSVC / C++17 / Unicode：Debug x64・Release x64の再ビルド成功（標準の `/W3` で警告0・エラー0）。
- 両構成で、安全性チェック・分離初期化の描画テスト・従来初期化のRenderTarget回帰テストが成功。
- `/W4` でC4459が出ないことを確認。
- ZIPの許可リスト、ライセンス、ローカルリンク、禁止ファイル、CRC・SHA-256を検証。

環境のMSPDB140.DLLエラー回避のため、ビルド検証時のみリンク時のデバッグ情報生成を無効化しています。

## 既知の制限

- 試験的な `ApplyFonts` にある未使用変数 `font` の警告C4189が `/W4` で残ります。`/W4 /WX` の場合はエラー扱いになります。
- `ApplyFonts` とCustom入力参考実装は試験的機能です。

**Full Changelog**: https://github.com/LuisR385/DxLImGui/compare/v0.2.0...v0.2.2
