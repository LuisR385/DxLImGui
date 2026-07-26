#pragma once

// リポジトリ付属ランチャーから各サンプルを選択するための宣言です。
// 各.cppを単独でビルドする場合は、そのファイル自身がWinMainを提供します。
int RunBasicExample(bool autoExit);
int RunImageExample(bool autoExit);
int RunRenderTargetExample(bool autoExit);
int RunAdvancedExample(bool autoExit);
int RunDemoForCapture(bool autoExit);
