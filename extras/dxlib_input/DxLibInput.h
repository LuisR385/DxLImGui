#pragma once

#include <imgui.h>

#include <array>
#include <chrono>

namespace DxLImGui::Extras
{
    // Custom入力モードで利用できるDxLib入力の参考実装です。
    // DxLImGui本体から自動的に呼ばれることはありません。
    //
    // フォーカス、IME、カーソル形状、DPI、Multi-Viewportなどは
    // Dear ImGui公式Win32バックエンドと同等には扱いません。
    class DxLibInput final
    {
    public:
        DxLibInput() noexcept = default;

        // DisplaySize、DeltaTime、キーボード、マウス、ゲームパッドを
        // DxLibと最小限のWin32情報から更新します。
        void Update(ImGuiIO& io);

        // 入力元やImGui Contextを切り替える前に内部状態を初期化します。
        void Reset() noexcept;

    private:
        using Clock = std::chrono::steady_clock; //STL

        //NOTE : 256->主要なキー配列分の状態
        std::array<bool, 256> previousKeyStates_{};

        Clock::time_point previousFrameTime_{};
        bool hasPreviousFrameTime_ = false;
    };
}
