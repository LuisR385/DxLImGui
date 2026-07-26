#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

namespace
{
    LRESULT CALLBACK RenderTargetWindowProc(
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


int RunRenderTargetExample(bool autoExit)
{
    DxLib::SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8);


    DxLib::SetGraphMode(1280, 720, 32);
    DxLib::ChangeWindowMode(TRUE);
    DxLib::SetUseDirect3DVersion(DX_DIRECT3D_11);
    DxLib::SetHookWinProc(RenderTargetWindowProc);
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

    DxLImGui::RenderTarget gameView(
        640,
        360
    );

    if (!gameView)
    {
        DxLImGui::Shutdown();
        DxLib::DxLib_End();
        return 1;
    }

    int frameCount = 0;

    while (DxLib::ProcessMessage() == 0)
    {
        ++frameCount;

        if (gameView.BeginDraw())
        {
            DxLib::ClearDrawScreen();

            const int x =
                (frameCount * 3) %
                gameView.GetWidth();

            DxLib::DrawCircle(
                x,
                180,
                42,
                DxLib::GetColor(64, 200, 255),
                TRUE
            );

            DxLib::DrawString(
                20,
                20,
                "MakeScreen APIの中にDxLibが描画されています", // Drawn by DxLib into MakeScreen
                DxLib::GetColor(255, 255, 255)
            );

            (void)gameView.EndDraw();
        }

        DxLib::ClearDrawScreen();
        DxLImGui::BeginFrame();

        ImGui::SetNextWindowSize(
            ImVec2(900.0f, 580.0f),
            ImGuiCond_Once
        );
        ImGui::Begin("Realtime RenderTarget");
        ImGui::TextUnformatted(
            "The SRV is created once; no per-frame CPU image transfer."
        );
        gameView.DrawFit(
            ImGui::GetContentRegionAvail()
        );
        ImGui::End();

        DxLImGui::EndFrame();
        DxLib::ScreenFlip();

        if (autoExit && frameCount >= 240)
        {
            break;
        }
    }

    gameView.Reset();
    DxLImGui::Shutdown();
    DxLib::DxLib_End();
    return 0;
}


#if !defined(DXLIMGUI_EXAMPLES_COMBINED_BUILD)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    return RunRenderTargetExample(false);
}
#endif
