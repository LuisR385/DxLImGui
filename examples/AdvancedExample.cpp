#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

namespace
{
    LRESULT CALLBACK AdvancedWindowProc(
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


int RunAdvancedExample(bool autoExit)
{
    DxLib::SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8);

    DxLib::SetGraphMode(960, 540, 32);
    DxLib::ChangeWindowMode(TRUE);
    DxLib::SetUseDirect3DVersion(DX_DIRECT3D_11);
    DxLib::SetHookWinProc(AdvancedWindowProc);
    DxLib::SetAlwaysRunFlag(TRUE);

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

    // Advanced APIではGraphHandleの寿命を呼び出し側が管理します。
    const int graphHandle =
        DxLib::MakeScreen(480, 270, TRUE);

    bool registered =
        graphHandle >= 0 &&
        DxLImGui::Advanced::RegisterImage(
            graphHandle
        );

    int frameCount = 0;

    while (DxLib::ProcessMessage() == 0)
    {
        ++frameCount;

        if (graphHandle >= 0)
        {
            const int restoreScreen =
                DxLib::GetDrawScreen();

            DxLib::RenderVertex();

            if (
                DxLib::SetDrawScreen(
                    graphHandle
                ) != -1
            )
            {
                DxLib::ClearDrawScreen();
                DxLib::DrawBox(
                    0,
                    0,
                    frameCount % 480,
                    270,
                    DxLib::GetColor(80, 160, 255),
                    TRUE
                );
                DxLib::DrawString(
                    16,
                    16,
                    "Raw GraphHandle registered through Advanced API",
                    DxLib::GetColor(255, 255, 255)
                );
                DxLib::RenderVertex();
                DxLib::SetDrawScreen(restoreScreen);
            }
        }

        DxLib::ClearDrawScreen();
        DxLImGui::BeginFrame();

        ImGui::Begin("DxLImGui Advanced API");
        ImGui::TextUnformatted(
            "Use this API only when you manage a raw GraphHandle."
        );

        if (registered)
        {
            if (ImGui::Button("Unregister"))
            {
                DxLImGui::Advanced::UnregisterImage(
                    graphHandle
                );
                registered = false;
            }
        }
        else if (
            graphHandle >= 0 &&
            ImGui::Button("Register again")
        )
        {
            registered =
                DxLImGui::Advanced::RegisterImage(
                    graphHandle
                );
        }

        if (registered)
        {
            DxLImGui::DrawImage(
                graphHandle,
                ImVec2(480.0f, 270.0f)
            );
        }
        else
        {
            ImGui::TextUnformatted(
                "The GraphHandle exists, but it is not registered."
            );
        }

        ImGui::Separator();
        ImGui::TextWrapped(
            "UpdatePlatformWindows and RenderPlatformWindows are "
            "normally unnecessary because EndFrame handles enabled "
            "platform windows."
        );
        ImGui::End();

        DxLImGui::EndFrame();
        DxLib::ScreenFlip();

        if (autoExit && frameCount >= 240)
        {
            break;
        }
    }

    // 必ず SRV登録解除 -> GraphHandle削除 の順にします。
    if (registered)
    {
        DxLImGui::Advanced::UnregisterImage(
            graphHandle
        );
    }

    if (graphHandle >= 0)
    {
        DxLib::DeleteGraph(graphHandle);
    }

    DxLImGui::Shutdown();
    DxLib::DxLib_End();
    return 0;
}


#if !defined(DXLIMGUI_EXAMPLES_COMBINED_BUILD)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    return RunAdvancedExample(false);
}
#endif
