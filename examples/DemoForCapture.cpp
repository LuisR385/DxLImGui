#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

#include <cmath>

namespace
{
    constexpr const char* CaptureImagePath =
        "DxLImGuiCaptureImage.png";
    constexpr int CaptureCycleMilliseconds = 12000;

    LRESULT CALLBACK CaptureWindowProc(
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


    bool CreateCaptureImage()
    {
        constexpr int width = 320;
        constexpr int height = 180;

        const int softImage =
            DxLib::MakeARGB8ColorSoftImage(
                width,
                height
            );

        if (softImage < 0)
        {
            return false;
        }

        for (int y = 0; y < height; ++y)
        {
            for (int x = 0; x < width; ++x)
            {
                const float normalizedX =
                    static_cast<float>(x) /
                    static_cast<float>(width - 1);
                const float normalizedY =
                    static_cast<float>(y) /
                    static_cast<float>(height - 1);

                const int red =
                    static_cast<int>(
                        40.0f + 180.0f * normalizedX
                    );
                const int green =
                    static_cast<int>(
                        60.0f + 160.0f * normalizedY
                    );
                const int blue =
                    static_cast<int>(
                        220.0f -
                        100.0f * normalizedX
                    );

                DxLib::DrawPixelSoftImage(
                    softImage,
                    x,
                    y,
                    red,
                    green,
                    blue,
                    255
                );
            }
        }

        const bool saved =
            DxLib::SaveSoftImageToPng(
                CaptureImagePath,
                softImage,
                1
            ) != -1;

        DxLib::DeleteSoftImage(softImage);
        return saved;
    }


    const char* GetCaptureStageName(int stage)
    {
        switch (stage)
        {
        case 0:
            return "DxLib normal drawing";

        case 1:
            return "Image + DrawFit";

        case 2:
            return "Realtime RenderTarget";

        default:
            return "Docking + Multi-Viewport";
        }
    }
}


int RunDemoForCapture(bool autoExit)
{

    DxLib::SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8);

    DxLib::SetGraphMode(1280, 720, 32);
    DxLib::ChangeWindowMode(TRUE);
    DxLib::SetUseDirect3DVersion(DX_DIRECT3D_11);
    DxLib::SetHookWinProc(CaptureWindowProc);
    DxLib::SetAlwaysRunFlag(TRUE);
    DxLib::SetWindowSizeChangeEnableFlag(TRUE);

    DxLImGui::ConfigureEnableDpiAwareness();
    DxLImGui::SetupBeforeDxLibInit();

    if (DxLib::DxLib_Init() == -1)
    {
        return 1;
    }

    DxLib::SetDrawScreen(DX_SCREEN_BACK);

    DxLImGui::DxLImGuiConfig config;
    config.DockingEnable = true;
    config.ViewportsEnable = true;
    config.stylePreset =
        DxLImGui::StylePreset::Dark;

    if (!DxLImGui::Initialize(config))
    {
        DxLib::DxLib_End();
        return 1;
    }

    DxLImGui::Image generatedImage;

    if (CreateCaptureImage())
    {
        generatedImage.Load(CaptureImagePath);
    }

    DeleteFileA(CaptureImagePath);

    DxLImGui::RenderTarget realtimeView(
        640,
        360
    );

    if (!generatedImage || !realtimeView)
    {
        generatedImage.Reset();
        realtimeView.Reset();
        DxLImGui::Shutdown();
        DxLib::DxLib_End();
        return 1;
    }

    const int startTime =
        DxLib::GetNowCount();

    int frameCount = 0;

    while (DxLib::ProcessMessage() == 0)
    {
        ++frameCount;

        const int elapsedMilliseconds =
            DxLib::GetNowCount() - startTime;

        const int cycleMilliseconds =
            elapsedMilliseconds %
            CaptureCycleMilliseconds;

        const int stage =
            cycleMilliseconds / 3000;

        const float seconds =
            static_cast<float>(
                elapsedMilliseconds
            ) / 1000.0f;

        const float wave =
            (std::sin)(seconds * 2.0f);

        if (realtimeView.BeginDraw())
        {
            DxLib::ClearDrawScreen();

            const int movingX =
                static_cast<int>(
                    320.0f + wave * 220.0f
                );

            DxLib::DrawBox(
                0,
                0,
                640,
                360,
                DxLib::GetColor(14, 28, 48),
                TRUE
            );
            DxLib::DrawCircle(
                movingX,
                180,
                54,
                DxLib::GetColor(80, 210, 255),
                TRUE
            );
            DxLib::DrawLine(
                40,
                300,
                600,
                300,
                DxLib::GetColor(255, 170, 70),
                4
            );
            DxLib::DrawString(
                24,
                24,
                "MakeScreen -> Texture2D -> SRV -> ImGui::Image",
                DxLib::GetColor(255, 255, 255)
            );

            (void)realtimeView.EndDraw();
        }

        DxLib::ClearDrawScreen();

        // ImGuiの背面に残る通常のDxLib描画です。
        const int accentColor =
            DxLib::GetColor(80, 170, 255);

        for (int x = 0; x < 1280; x += 80)
        {
            DxLib::DrawLine(
                x,
                0,
                x,
                720,
                DxLib::GetColor(24, 36, 52)
            );
        }

        DxLib::DrawCircle(
            1120,
            110,
            46,
            accentColor,
            TRUE
        );
        DxLib::DrawString(
            20,
            690,
            "DxLibは通常の状態があります", //DxLib normal drawing remains active.
            DxLib::GetColor(255, 255, 255)
        );

        DxLImGui::BeginFrame();

        ImGui::SetNextWindowPos(
            ImVec2(20.0f, 20.0f),
            ImGuiCond_Once
        );
        ImGui::SetNextWindowSize(
            ImVec2(350.0f, 250.0f),
            ImGuiCond_Once
        );
        ImGui::Begin("DxLImGui Capture Guide");
        ImGui::TextUnformatted("12-second feature cycle");
        ImGui::Separator();
        ImGui::Text(
            "Now: %s",
            GetCaptureStageName(stage)
        );
        ImGui::ProgressBar(
            static_cast<float>(
                cycleMilliseconds
            ) /
            static_cast<float>(
                CaptureCycleMilliseconds
            ),
            ImVec2(-1.0f, 0.0f)
        );
        ImGui::BulletText("DirectX 11");
        ImGui::BulletText("Docking enabled");
        ImGui::BulletText("Multi-Viewport enabled");
        ImGui::BulletText("No per-frame CPU image copy");
        ImGui::TextWrapped(
            "Drag this window outside the main window if the "
            "capture should include a platform window."
        );
        ImGui::End();

        ImGui::SetNextWindowPos(
            ImVec2(20.0f, 290.0f),
            ImGuiCond_Once
        );
        ImGui::SetNextWindowSize(
            ImVec2(350.0f, 350.0f),
            ImGuiCond_Once
        );
        ImGui::Begin("Image");
        ImGui::TextUnformatted(
            "Generated once, displayed through Image::DrawFit"
        );
        generatedImage.DrawFit(
            ImGui::GetContentRegionAvail()
        );
        ImGui::End();

        ImGui::SetNextWindowPos(
            ImVec2(390.0f, 20.0f),
            ImGuiCond_Once
        );
        ImGui::SetNextWindowSize(
            ImVec2(850.0f, 620.0f),
            ImGuiCond_Once
        );
        ImGui::Begin("Realtime RenderTarget");
        ImGui::Text(
            "Frame %d - the same SRV is reused every frame",
            frameCount
        );
        realtimeView.DrawFit(
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

    generatedImage.Reset();
    realtimeView.Reset();
    DxLImGui::Shutdown();
    DxLib::DxLib_End();
    return 0;
}


#if !defined(DXLIMGUI_EXAMPLES_COMBINED_BUILD)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    return RunDemoForCapture(false);
}
#endif
