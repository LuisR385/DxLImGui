#pragma once

namespace DxLImGuiRenderTargetChecks
{
    // DxLibとDxLImGuiの初期化後に呼び出します。
    // この確認は最後にDxLImGui::Shutdown()まで実行します。
    int Run(bool autoExit);
}
