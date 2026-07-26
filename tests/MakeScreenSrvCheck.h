#pragma once

namespace DxLImGuiMakeScreenSrvCheck
{
    // 前提:
    // - DxLib 初期化済み
    // - DxLImGui 初期化済み
    //
    // autoExit が true の場合は確認用フレームを描画した後に自動終了します。
    int Run(bool autoExit);
}
