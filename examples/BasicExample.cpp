#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

namespace
{
    LRESULT CALLBACK BasicWindowProc(
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


int RunBasicExample(bool autoExit)
{
    DxLib::SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8);

    DxLib::SetGraphMode(960, 540, 32);
    DxLib::ChangeWindowMode(TRUE);
    DxLib::SetUseDirect3DVersion(DX_DIRECT3D_11);
    DxLib::SetHookWinProc(BasicWindowProc);
    DxLib::SetAlwaysRunFlag(TRUE);

    // この2つはDxLib_Init()より前に呼びます。
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

    bool showDemoWindow = false;
    int frameCount = 0;

    while (DxLib::ProcessMessage() == 0)
    {
        ++frameCount;

        DxLib::ClearDrawScreen();
        DxLib::DrawString(
            20,
            20,
            u8"DxLibはImGuiの裏で描画されています ExampleFile : BasicExample.cpp", //DxLib is rendering behind Dear ImGui.ExampleFile : BasicExample.cpp
            DxLib::GetColor(255, 255, 255)
        );

        DxLImGui::BeginFrame();

        ImGui::Begin("DxLImGui Quick Start");
        ImGui::TextUnformatted("Dear ImGui is running.");
        ImGui::Checkbox(
            "Show Dear ImGui demo",
            &showDemoWindow
        );
        ImGui::Text(
            "Frame: %d",
            frameCount
        );


        ImGui::End();

        if (showDemoWindow)
        {
            ImGui::ShowDemoWindow(&showDemoWindow);
        }

        DxLImGui::EndFrame();
        DxLib::ScreenFlip();

        if (autoExit && frameCount >= 240)
        {
            break;
        }
    }

    // DxLImGuiはDxLibより先に終了します。
    DxLImGui::Shutdown();
    DxLib::DxLib_End();
    return 0;
}


#if !defined(DXLIMGUI_EXAMPLES_COMBINED_BUILD)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    return RunBasicExample(false);
}
#endif
