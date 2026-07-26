#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

namespace
{
    constexpr const char* GeneratedImagePath =
        "DxLImGuiGeneratedImage.png";

    LRESULT CALLBACK ImageWindowProc(
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


    bool CreateGeneratedImage()
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
                const int red = x * 255 / (width - 1);
                const int green = y * 255 / (height - 1);
                const int blue = 220 - red / 2;

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
                GeneratedImagePath,
                softImage,
                1
            ) != -1;

        DxLib::DeleteSoftImage(softImage);
        return saved;
    }
}


int RunImageExample(bool autoExit)
{
    //UTF8形式にフォーマット形式変更
    DxLib::SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8);

    DxLib::SetGraphMode(960, 540, 32);
    DxLib::ChangeWindowMode(TRUE);
    DxLib::SetUseDirect3DVersion(DX_DIRECT3D_11);
    DxLib::SetHookWinProc(ImageWindowProc);
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

    DxLImGui::Image image;

    if (CreateGeneratedImage())
    {
        image.Load(GeneratedImagePath);
    }

    // Load()完了後はDxLib側に画像があるため、一時PNGは削除できます。
    DeleteFileA(GeneratedImagePath);

    int frameCount = 0;

    while (DxLib::ProcessMessage() == 0)
    {
        ++frameCount;
        DxLib::ClearDrawScreen();

        DxLImGui::BeginFrame();

        ImGui::SetNextWindowSize(
            ImVec2(720.0f, 460.0f),
            ImGuiCond_Once
        );
        ImGui::Begin("DxLImGui Image");

        if (image)
        {
            ImGui::Text(
                "Image size: %d x %d",
                image.GetWidth(),
                image.GetHeight()
            );

            image.DrawFit(
                ImGui::GetContentRegionAvail()
            );
        }
        else
        {
            ImGui::TextUnformatted(
                "Image creation or loading failed."
            );
        }

        ImGui::End();
        DxLImGui::EndFrame();
        DxLib::ScreenFlip();

        if (autoExit && frameCount >= 240)
        {
            break;
        }
    }

    // SRVとGraphHandleをShutdownより前に解放します。
    image.Reset();
    DxLImGui::Shutdown();
    DxLib::DxLib_End();
    return 0;
}


#if !defined(DXLIMGUI_EXAMPLES_COMBINED_BUILD)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    return RunImageExample(false);
}
#endif
