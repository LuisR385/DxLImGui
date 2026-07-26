#include <DxLImGui/DxLImGui.h>
#include "ResourceSafetyChecks.h"

#include "DxLib.h"
#include "imgui.h"

#include <utility>

// 手動確認用の小さなシナリオ集です。
// 製品コードから自動実行はせず、必要な前提を整えた上で
// デバッガや一時的な呼び出しから個別に実行してください。
namespace DxLImGuiSafetyChecks
{
    namespace
    {
        void SetConfirmationStyle(
            ImGuiStyle& style
        )
        {
            style.Alpha = 0.25f;
        }
    }


    bool ExistingContextIsNotTakenOver()
    {
        if (ImGui::GetCurrentContext() != nullptr)
        {
            return false;
        }

        ImGuiContext* externalContext =
            ImGui::CreateContext();

        const bool initializeResult =
            DxLImGui::Initialize();

        const bool contextWasPreserved =
            ImGui::GetCurrentContext() == externalContext;

        if (initializeResult)
        {
            DxLImGui::Shutdown();
        }

        ImGui::SetCurrentContext(externalContext);
        ImGui::DestroyContext(externalContext);

        return
            !initializeResult &&
            contextWasPreserved;
    }


    // 前提: DxLib初期化済み、DxLImGui未初期化
    bool InitializeCanRetryAfterExternalContextRejection()
    {
        if (ImGui::GetCurrentContext() != nullptr)
        {
            return false;
        }

        ImGuiContext* externalContext =
            ImGui::CreateContext();

        const bool externalWasRejected =
            !DxLImGui::Initialize();

        ImGui::DestroyContext(externalContext);

        const bool retrySucceeded =
            DxLImGui::Initialize();

        if (retrySucceeded)
        {
            DxLImGui::Shutdown();
        }

        return
            externalWasRejected &&
            retrySucceeded;
    }


    bool ConfigFlagsCanBeDisabled()
    {
        if (ImGui::GetCurrentContext() != nullptr)
        {
            return false;
        }

        ImGuiContext* context =
            ImGui::CreateContext();

        DxLImGui::DxLImGuiConfig config;
        DxLImGui::ApplyConfigFlags(config);

        config.NavEnableKeyboard = false;
        config.DockingEnable = false;
        config.ViewportsEnable = false;
        config.DpiEnableScaleViewports = false;
        config.DpiEnableScaleFonts = false;
        DxLImGui::ApplyConfigFlags(config);

        constexpr ImGuiConfigFlags testedFlags =
            ImGuiConfigFlags_NavEnableKeyboard |
            ImGuiConfigFlags_DockingEnable |
            ImGuiConfigFlags_ViewportsEnable |
            ImGuiConfigFlags_DpiEnableScaleViewports |
            ImGuiConfigFlags_DpiEnableScaleFonts;

        const bool allFlagsDisabled =
            (ImGui::GetIO().ConfigFlags & testedFlags) == 0;

        ImGui::DestroyContext(context);
        return allFlagsDisabled;
    }


    bool ConfigStyleIsApplied()
    {
        if (ImGui::GetCurrentContext() != nullptr)
        {
            return false;
        }

        ImGuiContext* context =
            ImGui::CreateContext();

        ImGui::StyleColorsDark();
        const float darkWindowRed =
            ImGui::GetStyle().Colors[ImGuiCol_WindowBg].x;

        DxLImGui::DxLImGuiConfig config;
        config.stylePreset =
            DxLImGui::StylePreset::Light;
        config.styleCallback =
            SetConfirmationStyle;

        DxLImGui::ApplyConfigStyle(config);

        const bool presetApplied =
            ImGui::GetStyle().Colors[ImGuiCol_WindowBg].x >
            darkWindowRed;

        const bool callbackApplied =
            ImGui::GetStyle().Alpha == 0.25f;

        ImGui::DestroyContext(context);

        return
            presetApplied &&
            callbackApplied;
    }


    // 前提:
    // - DxLib初期化済み
    // - graphHandleとsoftImageHandleは同じ画像を表す有効なハンドル
    // - graphHandleはまだDxLImGuiへ登録されていない
    bool DuplicateRegistrationIsRejected(
        int graphHandle,
        int softImageHandle
    )
    {
        DxLImGui::ScopedImageRegistration first;

        if (!first.Register(graphHandle, softImageHandle))
        {
            return false;
        }

        DxLImGui::ScopedImageRegistration duplicate;

        const bool duplicateWasRejected =
            !duplicate.Register(
                graphHandle,
                softImageHandle
            );

        DxLImGui::ScopedImageRegistration moved(
            std::move(first)
        );

        return
            duplicateWasRejected &&
            !first.IsRegistered() &&
            moved.IsRegistered();
    }


    // 前提はDuplicateRegistrationIsRejectedと同じです。
    bool ClearCacheInvalidatesRegistration(
        int graphHandle,
        int softImageHandle
    )
    {
        DxLImGui::ScopedImageRegistration registration;

        if (!registration.Register(
            graphHandle,
            softImageHandle
        ))
        {
            return false;
        }

        DxLImGui::ClearImageCache();

        return !registration.IsRegistered();
    }


    // 前提:
    // - DxLImGui初期化済み
    // - imageは有効
    // 描画コマンド送信後、EndFrame前にResetしてもSRVが保持されることを確認します。
    bool ResetImageAfterSubmit(
        DxLImGui::Image& image
    )
    {
        if (!image)
        {
            return false;
        }

        DxLImGui::BeginFrame();
        ImGui::Begin("Resource safety check");

        const bool submitted = image.Draw();
        image.Reset();

        ImGui::End();
        DxLImGui::EndFrame();

        return
            submitted &&
            !image;
    }


    // 前提: DxLImGui初期化済み
    // BeginFrame直後でもShutdownがDear ImGuiのフレームを閉じることを確認します。
    bool ShutdownWithActiveFrame()
    {
        DxLImGui::BeginFrame();

        if (ImGui::GetCurrentContext() == nullptr)
        {
            return false;
        }

        DxLImGui::Shutdown();
        return ImGui::GetCurrentContext() == nullptr;
    }


    // 前提:
    // - DxLImGuiとDxLibが初期化済み
    // - imageは有効
    // DxLib終了後のImage::ResetがDeleteGraphを呼ばないことを確認します。
    bool ResetImageAfterDxLibEnd(
        DxLImGui::Image& image
    )
    {
        if (!image)
        {
            return false;
        }

        DxLImGui::Shutdown();
        DxLib::DxLib_End();
        image.Reset();

        return image.GetGraphHandle() < 0;
    }


    // 公開宣言に対応する定義がリンク可能であることを確認します。
    void ViewportWrappersAreLinked()
    {
        DxLImGui::UpdateViewports();
        DxLImGui::RenderViewports();
    }


    bool RunNonGraphicsChecks()
    {
        return
            ExistingContextIsNotTakenOver() &&
            ConfigFlagsCanBeDisabled() &&
            ConfigStyleIsApplied();
    }
}
