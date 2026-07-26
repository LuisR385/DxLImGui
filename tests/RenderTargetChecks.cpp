#include "RenderTargetChecks.h"

#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

#include <d3d11.h>
#include <wrl/client.h>

#include <cstdint>
#include <utility>

namespace DxLImGuiRenderTargetChecks
{
    namespace
    {
        constexpr int AutomaticFrameCount = 240;
        constexpr const char* AlphaImagePath =
            "DxLImGui_RenderTarget_Alpha_Check.png";


        bool IsDeletedGraphHandle(int graphHandle)
        {
            int width = 0;
            int height = 0;

            return
                graphHandle >= 0 &&
                DxLib::GetGraphSize(
                    graphHandle,
                    &width,
                    &height
                ) == -1;
        }


        bool RunOwnershipChecks()
        {
            DxLImGui::RenderTarget target;

            if (
                target.Create(0, 64) ||
                target.Create(64, 0) ||
                target.Create(-1, 64)
            )
            {
                return false;
            }

            if (!target.Create(160, 90))
            {
                return false;
            }

            const int firstHandle =
                target.GetGraphHandle();

            // 無効な再Createでは、現在の有効なリソースを維持します。
            if (
                target.Create(0, 90) ||
                target.GetGraphHandle() != firstHandle ||
                !target
            )
            {
                return false;
            }

            DxLImGui::RenderTarget moved(
                std::move(target)
            );

            if (
                target ||
                !moved ||
                moved.GetGraphHandle() != firstHandle
            )
            {
                return false;
            }

            DxLImGui::RenderTarget moveAssigned(
                80,
                45
            );

            if (!moveAssigned)
            {
                return false;
            }

            const int replacedHandle =
                moveAssigned.GetGraphHandle();

            moveAssigned = std::move(moved);

            if (
                moved ||
                !moveAssigned ||
                moveAssigned.GetGraphHandle() != firstHandle ||
                !IsDeletedGraphHandle(replacedHandle)
            )
            {
                return false;
            }

            // 自己move代入でも所有権を失わないことを確認します。
            moveAssigned = std::move(moveAssigned);

            if (
                !moveAssigned ||
                moveAssigned.GetGraphHandle() != firstHandle
            )
            {
                return false;
            }

            const int oldHandle =
                moveAssigned.GetGraphHandle();

            if (!moveAssigned.Create(200, 100))
            {
                return false;
            }

            if (
                moveAssigned.GetWidth() != 200 ||
                moveAssigned.GetHeight() != 100 ||
                !IsDeletedGraphHandle(oldHandle)
            )
            {
                return false;
            }

            moveAssigned.Reset();
            moveAssigned.Reset();

            if (moveAssigned)
            {
                return false;
            }

            // GraphHandle直接登録は重複所有を拒否します。
            const int directGraph =
                DxLib::MakeScreen(64, 64, TRUE);

            if (directGraph < 0)
            {
                return false;
            }

            DxLImGui::ScopedImageRegistration first(
                directGraph
            );
            DxLImGui::ScopedImageRegistration duplicate;

            const bool duplicateRejected =
                first &&
                !duplicate.Register(directGraph) &&
                !DxLImGui::RegisterImage(directGraph);

            first.Reset();
            DxLib::DeleteGraph(directGraph);

            if (!duplicateRejected)
            {
                return false;
            }

            // 既存SoftImageオーバーロードも残っていることを確認します。
            const int softImage =
                DxLib::MakeARGB8ColorSoftImage(16, 16);

            if (softImage < 0)
            {
                return false;
            }

            DxLib::FillSoftImage(
                softImage,
                20,
                80,
                160,
                128
            );

            const int legacyGraph =
                DxLib::CreateGraphFromSoftImage(
                    softImage
                );

            DxLImGui::ScopedImageRegistration legacy;

            const bool legacyRegistered =
                legacyGraph >= 0 &&
                legacy.Register(
                    legacyGraph,
                    softImage
                );

            legacy.Reset();

            if (legacyGraph >= 0)
            {
                DxLib::DeleteGraph(legacyGraph);
            }

            DxLib::DeleteSoftImage(softImage);

            if (!legacyRegistered)
            {
                return false;
            }

            // Advanced APIは既存APIへ委譲し、同じ所有権規約を使います。
            const int advancedGraph =
                DxLib::MakeScreen(32, 32, FALSE);

            if (
                advancedGraph < 0 ||
                !DxLImGui::Advanced::RegisterImage(
                    advancedGraph
                )
            )
            {
                if (advancedGraph >= 0)
                {
                    DxLib::DeleteGraph(advancedGraph);
                }

                return false;
            }

            DxLImGui::Advanced::UnregisterImage(
                advancedGraph
            );
            DxLib::DeleteGraph(advancedGraph);

            // 明示した復元先を使えば、余分なグローバルスタックなしで
            // RenderTargetをネストできます。
            DxLImGui::RenderTarget outer(96, 64);
            DxLImGui::RenderTarget inner(48, 32);

            if (
                !outer ||
                !inner ||
                !outer.BeginDraw()
            )
            {
                return false;
            }

            const bool innerBegan =
                inner.BeginDraw(
                    outer.GetGraphHandle()
                );

            if (innerBegan)
            {
                (void)inner.EndDraw();
            }

            const bool innerRestoredOuter =
                innerBegan &&
                DxLib::GetDrawScreen() ==
                outer.GetGraphHandle();

            (void)outer.EndDraw();

            return
                innerRestoredOuter &&
                DxLib::GetDrawScreen() ==
                    DX_SCREEN_BACK;
        }


        bool CreateAlphaPng()
        {
            const int softImage =
                DxLib::MakeARGB8ColorSoftImage(32, 32);

            if (softImage < 0)
            {
                return false;
            }

            for (int y = 0; y < 32; ++y)
            {
                for (int x = 0; x < 32; ++x)
                {
                    const int alpha =
                        x < 16 ? 64 : 192;

                    DxLib::DrawPixelSoftImage(
                        softImage,
                        x,
                        y,
                        255,
                        y * 8,
                        x * 8,
                        alpha
                    );
                }
            }

            const bool saved =
                DxLib::SaveSoftImageToPng(
                    AlphaImagePath,
                    softImage,
                    1
                ) != -1;

            DxLib::DeleteSoftImage(softImage);
            return saved;
        }


        bool VerifyGraphTextureAlpha(int graphHandle)
        {
            // Imageの直接SRV経路が参照している同じTexture2Dを、
            // テスト時に一度だけstagingへコピーしてPNGのアルファを
            // 検査します。製品コードや毎フレーム経路にはCPU転送を
            // 追加していません。
            auto* texture = reinterpret_cast<ID3D11Texture2D*>( //DxLibの仕様に沿ってreinterpretのcastを行っている
                const_cast<void*>(
                    DxLib::GetGraphID3D11Texture2D(
                        graphHandle
                    )
                )
            );

            auto* device = reinterpret_cast<ID3D11Device*>(
                const_cast<void*>(
                    DxLib::GetUseDirect3D11Device()
                )
            );

            auto* context =
                reinterpret_cast<ID3D11DeviceContext*>(
                    const_cast<void*>(
                        DxLib::GetUseDirect3D11DeviceContext()
                    )
                );

            if (
                texture == nullptr ||
                device == nullptr ||
                context == nullptr
            )
            {
                return false;
            }

            D3D11_TEXTURE2D_DESC description{};
            texture->GetDesc(&description);

            if (
                description.Width < 32 ||
                description.Height < 1 ||
                description.SampleDesc.Count != 1
            )
            {
                return false;
            }

            description.Usage = D3D11_USAGE_STAGING;
            description.BindFlags = 0;
            description.CPUAccessFlags =
                D3D11_CPU_ACCESS_READ;
            description.MiscFlags = 0;

            Microsoft::WRL::ComPtr<ID3D11Texture2D>
                stagingTexture;

            if (FAILED(
                device->CreateTexture2D(
                    &description,
                    nullptr,
                    stagingTexture.GetAddressOf()
                )
            ))
            {
                return false;
            }

            context->CopyResource(
                stagingTexture.Get(),
                texture
            );

            D3D11_MAPPED_SUBRESOURCE mapped{};

            if (FAILED(
                context->Map(
                    stagingTexture.Get(),
                    0,
                    D3D11_MAP_READ,
                    0,
                    &mapped
                )
            ))
            {
                return false;
            }

            const auto* firstRow =
                static_cast<const std::uint8_t*>(
                    mapped.pData
                );

            const std::uint8_t leftAlpha =
                firstRow[3];
            const std::uint8_t rightAlpha =
                firstRow[24 * 4 + 3];

            context->Unmap(
                stagingTexture.Get(),
                0
            );

            return
                leftAlpha < 128 &&
                rightAlpha > 128 &&
                rightAlpha < 255;
        }


        void DrawAnimatedContent(
            int width,
            int height,
            int frame,
            unsigned int color
        )
        {
            DxLib::DrawBox(
                0,
                0,
                width,
                height,
                color,
                TRUE
            );

            const int circleX =
                (frame * 5) % (width + 80) - 40;

            DxLib::DrawCircle(
                circleX,
                height / 2,
                28,
                DxLib::GetColor(255, 255, 255),
                TRUE
            );

            DxLib::DrawFormatString(
                12,
                12,
                DxLib::GetColor(255, 255, 255),
                "RenderTarget frame: %d",
                frame
            );
        }
    }


    int Run(bool autoExit)
    {
        DxLib::LogFileFmtAdd(
            "[RenderTargetChecks] BEGIN\n"
        );

        bool passed = RunOwnershipChecks();

        DxLImGui::RenderTarget firstTarget(
            512,
            288
        );
        DxLImGui::RenderTarget secondTarget(
            320,
            180,
            false
        );
        DxLImGui::RenderTarget deferredResetTarget(
            64,
            64
        );
        const int deferredResetHandle =
            deferredResetTarget.GetGraphHandle();

        passed =
            passed &&
            firstTarget.IsValid() &&
            secondTarget.IsValid() &&
            deferredResetTarget.IsValid();

        const bool alphaPngCreated =
            CreateAlphaPng();

        DxLImGui::Image loadedAlphaImage;

        const bool alphaImageLoaded =
            alphaPngCreated &&
            loadedAlphaImage.Load(AlphaImagePath);

        DeleteFileA(AlphaImagePath);

        DxLImGui::Image movedAlphaImage(
            std::move(loadedAlphaImage)
        );
        DxLImGui::Image alphaImage;
        alphaImage = std::move(movedAlphaImage);

        const bool imageMoveWorked =
            alphaImageLoaded &&
            !loadedAlphaImage &&
            !movedAlphaImage &&
            alphaImage.IsValid();

        const bool alphaPreserved =
            imageMoveWorked &&
            alphaImage.GetWidth() == 32 &&
            alphaImage.GetHeight() == 32 &&
            VerifyGraphTextureAlpha(
                alphaImage.GetGraphHandle()
            );

        passed =
            passed &&
            imageMoveWorked &&
            alphaPreserved;

        int frame = 0;
        bool drawSubmitted = false;
        bool doubleBeginRejected = false;
        bool doubleEndSafe = true;
        bool sequentialTargetsWorked = false;
        bool deferredResetWorked = false;

        while (
            passed &&
            DxLib::ProcessMessage() == 0
        )
        {
            ++frame;

            const bool firstBegan =
                firstTarget.BeginDraw();

            if (firstBegan)
            {
                doubleBeginRejected =
                    !firstTarget.BeginDraw();

                const unsigned int color =
                    DxLib::GetColor(
                        (frame * 3) % 256,
                        (frame * 5) % 256,
                        (frame * 7) % 256
                    );

                DrawAnimatedContent(
                    firstTarget.GetWidth(),
                    firstTarget.GetHeight(),
                    frame,
                    color
                );

                (void)firstTarget.EndDraw();
                (void)firstTarget.EndDraw();
            }

            const bool firstRestored =
                DxLib::GetDrawScreen() ==
                DX_SCREEN_BACK;

            const bool secondBegan =
                secondTarget.BeginDraw();

            if (secondBegan)
            {
                const unsigned int color =
                    DxLib::GetColor(
                        (frame * 11) % 256,
                        (frame * 2) % 256,
                        (frame * 13) % 256
                    );

                DrawAnimatedContent(
                    secondTarget.GetWidth(),
                    secondTarget.GetHeight(),
                    frame,
                    color
                );

                (void)secondTarget.EndDraw();
                (void)secondTarget.EndDraw();
            }

            const bool secondRestored =
                DxLib::GetDrawScreen() ==
                DX_SCREEN_BACK;

            doubleEndSafe =
                doubleEndSafe &&
                firstRestored &&
                secondRestored;

            sequentialTargetsWorked =
                sequentialTargetsWorked ||
                (firstBegan && secondBegan);

            DxLib::ClearDrawScreen();

            DxLImGui::BeginFrame();

            ImGui::SetNextWindowPos(
                ImVec2(20.0f, 20.0f),
                ImGuiCond_Once
            );
            ImGui::SetNextWindowSize(
                ImVec2(740.0f, 650.0f),
                ImGuiCond_Once
            );
            ImGui::Begin("DxLImGui RenderTarget checks");

            ImGui::Text(
                "Frame: %d / direct SRV, no per-frame CPU copy",
                frame
            );
            ImGui::Text(
                "Move/Create/Reset checks: %s",
                passed ? "PASS" : "FAIL"
            );
            ImGui::Text(
                "PNG alpha: %s",
                alphaPreserved ? "PASS" : "FAIL"
            );

            if (frame == 1)
            {
                // ImGui::Image送信後のResetでも、EndFrameがSRVを
                // 解放してからGraphHandleを削除することを確認します。
                const bool deferredDrawSubmitted =
                    deferredResetTarget.Draw(
                        ImVec2(64.0f, 64.0f)
                    );
                deferredResetTarget.Reset();
                deferredResetWorked =
                    deferredDrawSubmitted;
            }

            ImGui::SeparatorText("512 x 288");
            const bool firstDrawn =
                firstTarget.DrawFit(
                    ImVec2(600.0f, 300.0f)
                );

            ImGui::SeparatorText("320 x 180");
            const bool secondDrawn =
                secondTarget.DrawFit(
                    ImVec2(420.0f, 190.0f)
                );

            ImGui::SeparatorText(
                "Direct Image::Load PNG alpha"
            );
            const bool alphaDrawn =
                alphaImage.Draw(
                    ImVec2(128.0f, 128.0f)
                );

            ImGui::End();
            DxLImGui::EndFrame();
            DxLib::ScreenFlip();

            if (frame == 1)
            {
                deferredResetWorked =
                    deferredResetWorked &&
                    IsDeletedGraphHandle(
                        deferredResetHandle
                    );

                passed =
                    passed &&
                    deferredResetWorked;
            }

            drawSubmitted =
                drawSubmitted ||
                (firstDrawn &&
                    secondDrawn &&
                    alphaDrawn);

            if (
                autoExit &&
                frame >= AutomaticFrameCount
            )
            {
                break;
            }
        }

        passed =
            passed &&
            frame > 0 &&
            drawSubmitted &&
            doubleBeginRejected &&
            doubleEndSafe &&
            sequentialTargetsWorked &&
            deferredResetWorked;

        alphaImage.Reset();
        alphaImage.Reset();
        firstTarget.Reset();
        secondTarget.Reset();
        deferredResetTarget.Reset();

        // Shutdownがキャッシュ内SRVを先に解放することを確認するため、
        // 最後のGraphHandleだけはraw登録のままShutdownへ渡します。
        const int shutdownGraph =
            DxLib::MakeScreen(48, 48, TRUE);

        const bool shutdownRegistrationCreated =
            shutdownGraph >= 0 &&
            DxLImGui::RegisterImage(shutdownGraph);

        passed =
            passed &&
            shutdownRegistrationCreated;

        DxLImGui::Shutdown();

        const bool shutdownReleasedContext =
            ImGui::GetCurrentContext() == nullptr;

        int shutdownDeleteResult = -1;

        if (shutdownGraph >= 0)
        {
            // ShutDownでSRVキャッシュが空になった後にDxLib側の
            // GraphHandleを破棄します。
            shutdownDeleteResult =
                DxLib::DeleteGraph(shutdownGraph);
        }

        passed =
            passed &&
            shutdownReleasedContext &&
            shutdownDeleteResult != -1;

        DxLib::LogFileFmtAdd(
            "[RenderTargetChecks] RESULT=%s, Frames=%d, "
            "Draw=%s, DoubleBegin=%s, DoubleEnd=%s, "
            "Sequential=%s, DeferredReset=%s, ImageMove=%s, "
            "Alpha=%s, Shutdown=%s\n",
            passed ? "PASS" : "FAIL",
            frame,
            drawSubmitted ? "yes" : "no",
            doubleBeginRejected ? "rejected" : "failed",
            doubleEndSafe ? "safe" : "failed",
            sequentialTargetsWorked ? "yes" : "no",
            deferredResetWorked ? "yes" : "no",
            imageMoveWorked ? "yes" : "no",
            alphaPreserved ? "yes" : "no",
            shutdownReleasedContext ? "yes" : "no"
        );

        return passed ? 0 : 1;
    }
}
