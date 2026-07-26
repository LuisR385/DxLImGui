#include <DxLImGui/DxLImGui.h>
#include "Examples.h"
#include "../tests/MakeScreenSrvCheck.h"
#include "../tests/RenderTargetChecks.h"
#include "../tests/ResourceSafetyChecks.h"

#include "DxLib.h"

#include <cstring>

namespace
{
    //引数があるかを確認します(cmd)
    bool HasArgument(
        const char* commandLine,
        const char* argument
    )
    {
        return
            commandLine != nullptr &&
            argument != nullptr &&
            std::strstr(
                commandLine,
                argument
            ) != nullptr;
    }


    LRESULT CALLBACK TestWindowProc(
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


    bool InitializeGraphicsChecks()
    {
        DxLib::SetGraphMode(1280, 720, 32);
        DxLib::ChangeWindowMode(TRUE);
        DxLib::SetUseDirect3DVersion(
            DX_DIRECT3D_11
        );
        DxLib::SetHookWinProc(TestWindowProc);
        DxLib::SetAlwaysRunFlag(TRUE);
        DxLib::SetWindowSizeChangeEnableFlag(
            TRUE
        );

        DxLImGui::ConfigureEnableDpiAwareness();
        DxLImGui::SetupBeforeDxLibInit();

        if (DxLib::DxLib_Init() == -1)
        {
            return false;
        }

        DxLib::SetDrawScreen(DX_SCREEN_BACK);

        DxLImGui::DxLImGuiConfig config;
        config.ViewportsEnable = false;

        if (!DxLImGui::Initialize(config))
        {
            DxLib::DxLib_End();
            return false;
        }

        return true;
    }
}


int WINAPI WinMain(
    HINSTANCE,
    HINSTANCE,
    LPSTR commandLine,
    int
)
{
    //自動で終了するか
    const bool autoExit =
        HasArgument(
            commandLine,
            "--auto-exit"
        );

    //safety-checksのテストを起動
    if (
        HasArgument(
            commandLine,
            "--run-safety-checks"
        )
    )
    {
        return
            DxLImGuiSafetyChecks::
                RunNonGraphicsChecks()
            ? 0
            : 1;
    }
    //BasicExample.cpp
    if (
        HasArgument(
            commandLine,
            "--basic-example"
        )
    )
    {
        return RunBasicExample(autoExit);
    }

    if (
        HasArgument(
            commandLine,
            "--image-example"
        )
    )
    {
        return RunImageExample(autoExit);
    }

    if (
        HasArgument(
            commandLine,
            "--render-target-example"
        )
    )
    {
        return RunRenderTargetExample(
            autoExit
        );
    }

    if (
        HasArgument(
            commandLine,
            "--advanced-example"
        )
    )
    {
        return RunAdvancedExample(autoExit);
    }

    if (
        HasArgument(
            commandLine,
            "--capture-demo"
        )
    )
    {
        return RunDemoForCapture(autoExit);
    }

    const bool makeScreenCheck =
        HasArgument(
            commandLine,
            "--run-makescreen-srv-check"
        );

    const bool renderTargetCheck =
        HasArgument(
            commandLine,
            "--run-render-target-checks"
        );

    if (makeScreenCheck || renderTargetCheck)
    {
        if (!InitializeGraphicsChecks())
        {
            return 1;
        }

        if (makeScreenCheck)
        {
            const int result =
                DxLImGuiMakeScreenSrvCheck::Run(
                    autoExit
                );

            DxLImGui::Shutdown();
            DxLib::DxLib_End();
            return result;
        }

        // このテストはShutdown順も検証するため、Run内で
        // DxLImGui::Shutdown()まで実行します。
        const int result =
            DxLImGuiRenderTargetChecks::Run(
                autoExit
            );

        DxLib::DxLib_End();
        return result;
    }

    // 引数なしでは最小サンプルを実行します。
    return RunBasicExample(autoExit);
}
