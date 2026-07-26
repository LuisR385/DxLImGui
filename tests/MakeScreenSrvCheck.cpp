#include "MakeScreenSrvCheck.h"

#include <DxLImGui/DxLImGui.h>

#include "DxLib.h"
#include "imgui.h"

#include <d3d11.h>
#include <wrl/client.h>

#include <cstdint>

namespace DxLImGuiMakeScreenSrvCheck
{
    namespace
    {
        constexpr int TargetWidth = 512;
        constexpr int TargetHeight = 512;
        constexpr std::uint64_t AutoExitFrameCount = 240;


        const char* GetFormatName(
            DXGI_FORMAT format
        ) noexcept
        {
            switch (format)
            {
            case DXGI_FORMAT_R8G8B8A8_UNORM:
                return "DXGI_FORMAT_R8G8B8A8_UNORM";

            case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
                return "DXGI_FORMAT_R8G8B8A8_UNORM_SRGB";

            case DXGI_FORMAT_B8G8R8A8_UNORM:
                return "DXGI_FORMAT_B8G8R8A8_UNORM";

            case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
                return "DXGI_FORMAT_B8G8R8A8_UNORM_SRGB";

            case DXGI_FORMAT_B8G8R8X8_UNORM:
                return "DXGI_FORMAT_B8G8R8X8_UNORM";

            case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
                return "DXGI_FORMAT_B8G8R8X8_UNORM_SRGB";

            case DXGI_FORMAT_R10G10B10A2_UNORM:
                return "DXGI_FORMAT_R10G10B10A2_UNORM";

            case DXGI_FORMAT_R16G16B16A16_FLOAT:
                return "DXGI_FORMAT_R16G16B16A16_FLOAT";

            default:
                return "other DXGI_FORMAT";
            }
        }


        void LogTextureDescription(
            const D3D11_TEXTURE2D_DESC& description,
            const ID3D11Texture2D* texture
        )
        {
            DxLib::LogFileFmtAdd(
                "[MakeScreenSrvCheck] Texture2D=%p, Size=%ux%u, "
                "MipLevels=%u, ArraySize=%u\n",
                texture,
                description.Width,
                description.Height,
                description.MipLevels,
                description.ArraySize
            );

            DxLib::LogFileFmtAdd(
                "[MakeScreenSrvCheck] Format=%u (%s)\n",
                static_cast<unsigned int>(description.Format),
                GetFormatName(description.Format)
            );

            DxLib::LogFileFmtAdd(
                "[MakeScreenSrvCheck] BindFlags=0x%08X, "
                "SHADER_RESOURCE=%s, RENDER_TARGET=%s\n",
                description.BindFlags,
                (
                    description.BindFlags &
                    D3D11_BIND_SHADER_RESOURCE
                ) != 0
                    ? "yes"
                    : "no",
                (
                    description.BindFlags &
                    D3D11_BIND_RENDER_TARGET
                ) != 0
                    ? "yes"
                    : "no"
            );

            DxLib::LogFileFmtAdd(
                "[MakeScreenSrvCheck] SampleDesc.Count=%u, "
                "SampleDesc.Quality=%u, Usage=%u, "
                "CPUAccessFlags=0x%08X, MiscFlags=0x%08X\n",
                description.SampleDesc.Count,
                description.SampleDesc.Quality,
                static_cast<unsigned int>(description.Usage),
                description.CPUAccessFlags,
                description.MiscFlags
            );
        }


        bool DrawAnimatedTarget(
            int graphHandle,
            std::uint64_t frameNumber
        )
        {
            const int previousDrawScreen =
                DxLib::GetDrawScreen();

            if (
                DxLib::RenderVertex() == -1 ||
                DxLib::SetDrawScreen(graphHandle) == -1
            )
            {
                return false;
            }

            const int red =
                32 + static_cast<int>((frameNumber * 3) % 192);

            const int green =
                32 + static_cast<int>((frameNumber * 5) % 192);

            const int blue =
                32 + static_cast<int>((frameNumber * 7) % 192);

            const int markerX =
                static_cast<int>((frameNumber * 4) % TargetWidth);

            DxLib::DrawBox(
                0,
                0,
                TargetWidth - 1,
                TargetHeight - 1,
                DxLib::GetColor(red, green, blue),
                TRUE
            );

            DxLib::DrawCircle(
                markerX,
                TargetHeight / 2,
                48,
                DxLib::GetColor(255, 255, 255),
                TRUE
            );

            DxLib::DrawFormatString(
                16,
                16,
                DxLib::GetColor(255, 255, 255),
                "MakeScreen frame: %llu",
                static_cast<unsigned long long>(frameNumber)
            );

            const bool targetWasRendered =
                DxLib::RenderVertex() != -1;

            const bool drawScreenWasRestored =
                DxLib::SetDrawScreen(
                    previousDrawScreen
                ) != -1;

            return
                targetWasRendered &&
                drawScreenWasRestored;
        }
    }


    int Run(bool autoExit)
    {


        DxLib::LogFileAdd(
            "[MakeScreenSrvCheck] BEGIN\n"
        );

        // graphHandle はこの検証関数が所有し、最後に DeleteGraph します。
        const int graphHandle =
            DxLib::MakeScreen(
                TargetWidth,
                TargetHeight,
                FALSE
            );

        DxLib::LogFileFmtAdd(
            "[MakeScreenSrvCheck] MakeScreen result=%d\n",
            graphHandle
        );

        if (graphHandle < 0)
        {
            DxLib::LogFileAdd(
                "[MakeScreenSrvCheck] FAIL: MakeScreen failed\n"
            );

            return 1;
        }

        // DxLib が所有する借用ポインタです。
        // AddRef していないため、この関数から Release は呼びません。
        auto* texture = reinterpret_cast<ID3D11Texture2D*>(
            const_cast<void*>(
                DxLib::GetGraphID3D11Texture2D(
                    graphHandle
                )
            )
        );

        if (texture == nullptr)
        {
            DxLib::LogFileAdd(
                "[MakeScreenSrvCheck] FAIL: "
                "GetGraphID3D11Texture2D returned nullptr\n"
            );

            DxLib::DeleteGraph(graphHandle);
            return 1;
        }

        D3D11_TEXTURE2D_DESC textureDescription{};
        texture->GetDesc(&textureDescription);
        LogTextureDescription(
            textureDescription,
            texture
        );

        // DxLib が所有する借用ポインタです。
        auto* device = reinterpret_cast<ID3D11Device*>(
            const_cast<void*>(
                DxLib::GetUseDirect3D11Device()
            )
        );

        if (device == nullptr)
        {
            DxLib::LogFileAdd(
                "[MakeScreenSrvCheck] FAIL: "
                "GetUseDirect3D11Device returned nullptr\n"
            );

            DxLib::DeleteGraph(graphHandle);
            return 1;
        }

        // SRV だけはこの検証関数が所有します。
        // CreateShaderResourceView はここで一度だけ呼び出します。
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView>
            shaderResourceView;

        const HRESULT createSrvResult =
            device->CreateShaderResourceView(
                texture,
                nullptr,
                shaderResourceView.GetAddressOf()
            );

        DxLib::LogFileFmtAdd(
            "[MakeScreenSrvCheck] CreateShaderResourceView "
            "HRESULT=0x%08lX, succeeded=%s, SRV=%p\n",
            static_cast<unsigned long>(createSrvResult),
            SUCCEEDED(createSrvResult)
                ? "yes"
                : "no",
            shaderResourceView.Get()
        );

        if (
            FAILED(createSrvResult) ||
            shaderResourceView == nullptr
        )
        {
            DxLib::LogFileAdd(
                "[MakeScreenSrvCheck] FAIL: "
                "direct SRV creation failed\n"
            );

            shaderResourceView.Reset();
            DxLib::DeleteGraph(graphHandle);
            return 1;
        }

        const ID3D11ShaderResourceView* const createdSrv =
            shaderResourceView.Get();

        const ImTextureID textureId =
            static_cast<ImTextureID>(
                reinterpret_cast<std::uintptr_t>(
                    shaderResourceView.Get()
                )
            );

        std::uint64_t frameNumber = 0;
        std::uint64_t refreshSuccessCount = 0;
        bool sameSrvEveryFrame = true;
        bool renderSucceeded = true;

        DxLib::SetDrawScreen(DX_SCREEN_BACK);

        while (
            DxLib::ProcessMessage() == 0 &&
            DxLib::CheckHitKey(KEY_INPUT_ESCAPE) == 0
        )
        {
            ++frameNumber;

            if (DxLib::ClearDrawScreen() == -1)
            {
                renderSucceeded = false;
                break;
            }

            if (
                !DrawAnimatedTarget(
                    graphHandle,
                    frameNumber
                )
            )
            {
                renderSucceeded = false;
                break;
            }

            // SRV作成後、かつImGui描画前に毎フレーム実行します。
            // 同じSRVがこの呼び出しを跨いで使えることを確認します。
            if (
                DxLib::RefreshDxLibDirect3DSetting() == -1
            )
            {
                renderSucceeded = false;
                break;
            }

            ++refreshSuccessCount;

            sameSrvEveryFrame =
                sameSrvEveryFrame &&
                shaderResourceView.Get() == createdSrv;

            DxLImGui::BeginFrame();

            ImGui::SetNextWindowSize(
                ImVec2(600.0f, 680.0f),
                ImGuiCond_FirstUseEver
            );

            ImGui::Begin("MakeScreen direct SRV check");

            ImGui::Text(
                "Texture2D: %p",
                texture
            );

            ImGui::Text(
                "SRV: %p (created once)",
                shaderResourceView.Get()
            );

            ImGui::Text(
                "HRESULT: 0x%08lX",
                static_cast<unsigned long>(
                    createSrvResult
                )
            );

            ImGui::Text(
                "BindFlags: 0x%08X",
                textureDescription.BindFlags
            );

            ImGui::Text(
                "Format: %u (%s)",
                static_cast<unsigned int>(
                    textureDescription.Format
                ),
                GetFormatName(
                    textureDescription.Format
                )
            );

            ImGui::Text(
                "SampleDesc.Count: %u",
                textureDescription.SampleDesc.Count
            );

            ImGui::Text(
                "Frame: %llu / Refresh success: %llu",
                static_cast<unsigned long long>(
                    frameNumber
                ),
                static_cast<unsigned long long>(
                    refreshSuccessCount
                )
            );

            ImGui::Text(
                "Same SRV every frame: %s",
                sameSrvEveryFrame
                    ? "yes"
                    : "no"
            );

            ImGui::Separator();
            ImGui::TextUnformatted(
                "PASS condition: the color, white marker, and "
                "frame number below keep changing."
            );

            ImGui::Image(
                ImTextureRef(textureId),
                ImVec2(
                    static_cast<float>(TargetWidth),
                    static_cast<float>(TargetHeight)
                )
            );

            ImGui::End();

            DxLImGui::EndFrame();

            if (DxLib::ScreenFlip() == -1)
            {
                renderSucceeded = false;
                break;
            }

            if (frameNumber % 60 == 0)
            {
                DxLib::LogFileFmtAdd(
                    "[MakeScreenSrvCheck] frame=%llu, "
                    "SRV=%p, refreshSuccessCount=%llu\n",
                    static_cast<unsigned long long>(
                        frameNumber
                    ),
                    shaderResourceView.Get(),
                    static_cast<unsigned long long>(
                        refreshSuccessCount
                    )
                );
            }

            if (
                autoExit &&
                frameNumber >= AutoExitFrameCount
            )
            {
                break;
            }
        }

        DxLib::RenderVertex();
        DxLib::SetDrawScreen(DX_SCREEN_BACK);

        const bool verificationSucceeded =
            renderSucceeded &&
            frameNumber > 1 &&
            sameSrvEveryFrame &&
            refreshSuccessCount == frameNumber;

        DxLib::LogFileFmtAdd(
            "[MakeScreenSrvCheck] RESULT=%s, frames=%llu, "
            "sameSrv=%s, refreshSuccessCount=%llu\n",
            verificationSucceeded
                ? "PASS"
                : "FAIL",
            static_cast<unsigned long long>(
                frameNumber
            ),
            sameSrvEveryFrame
                ? "yes"
                : "no",
            static_cast<unsigned long long>(
                refreshSuccessCount
            )
        );

        // 解放順:
        // 1. ImGui が参照する SRV を解放
        // 2. SRV の参照元である MakeScreen の GraphHandle を削除
        // texture は借用ポインタなので Release しません。
        shaderResourceView.Reset();

        DxLib::LogFileAdd(
            "[MakeScreenSrvCheck] SRV released before DeleteGraph\n"
        );

        const int deleteGraphResult =
            DxLib::DeleteGraph(graphHandle);

        DxLib::LogFileFmtAdd(
            "[MakeScreenSrvCheck] DeleteGraph result=%d\n",
            deleteGraphResult
        );

        texture = nullptr;

        return
            verificationSucceeded &&
            deleteGraphResult != -1
                ? 0
                : 1;
    }
}
