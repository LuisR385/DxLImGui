//=======================================================================================================================
//
// 										    DxLibとDear ImGuiをDirectX 11環境で接続し、
//                                      初期化、フレーム処理、画像表示などを簡単に扱うためのライブラリです
//
//                                      公開ヘッダーはこのファイル1つです。
//                                      ソースから組み込む場合は次も追加してください。
//
//                                      * include/DxLImGui/DxLImGui.h
//                                      * src/DxLImGui.cpp
//
//                                              include指定する前に
//                                          #define DXLIMGUI_IMPLEMENTATIONと書くと
//                                              シングルヘッダDxLImGui.hだけで使用できます
//										Author : Kojima Ryoichi (@LuisR385)
//										Created Date : 2026 / 07 / 16
//											LICENSE : MIT LICENSE
//
//							WARNING : 今後 APIの名前空間のアクセスの仕方 / API名 / 挙動の変更の可能性があります。
//
// ---------------------------------------------------Design references----------------------------------------------------
//                                              Dear ImGui ライブラリ Omar Cornut様
//                                                     raylib / rlImGui
//                                     (raylib) Ramon Santamaria氏 / (rlImGui) Jeffery Myers氏
//                                     raylibおよびrlImGuiの設計思想を参考にしています。
// ----------------------------------------------------------------------------------------------------------------------
//
//                                          Copyright (c) 2026 Kojima Ryoichi
//=======================================================================================================================



#pragma once

#if !defined(_WIN32)
#error "DxLImGui supports Windows only."
#endif

#define DXLIMGUI_PLATFORM_WINDOWS 1

// ============================================================
// Version
// ============================================================

#define DXLIMGUI_VERSION_MAJOR 0
#define DXLIMGUI_VERSION_MINOR 1
#define DXLIMGUI_VERSION_PATCH 0

#define DXLIMGUI_VERSION_NUM \
	(DXLIMGUI_VERSION_MAJOR * 10000 + \
	 DXLIMGUI_VERSION_MINOR * 100 + \
	 DXLIMGUI_VERSION_PATCH)

#define DXLIMGUI_VERSION_STRING "0.1.0"

// ============================================================
// Link mode
//
// No macro              : DxLImGui.h + DxLImGui.cppを直接コンパイル
// DXLIMGUI_IMPLEMENTATION: この翻訳単位へ実装を生成（1か所だけ）
// DXLIMGUI_STATIC       : 静的ライブラリを作成または使用
// DXLIMGUI_BUILD_DLL    : DLL本体を作成（dllexport）
// DXLIMGUI_USE_DLL      : DLLを使用（dllimport）
//
// DXLIMGUI_SHARED / DXLIMGUI_BUILD_SHAREDは旧名称との互換用です。
// ============================================================

#if defined(DXLIMGUI_BUILD_SHARED) && !defined(DXLIMGUI_BUILD_DLL)
#define DXLIMGUI_BUILD_DLL
#endif

#if defined(DXLIMGUI_SHARED) && \
	!defined(DXLIMGUI_BUILD_DLL) && \
	!defined(DXLIMGUI_USE_DLL)
#define DXLIMGUI_USE_DLL
#endif

#if defined(DXLIMGUI_BUILD_DLL) && defined(DXLIMGUI_USE_DLL)
#error "DXLIMGUI_BUILD_DLL and DXLIMGUI_USE_DLL cannot be used together."
#endif

#if defined(DXLIMGUI_STATIC) && \
	(defined(DXLIMGUI_BUILD_DLL) || defined(DXLIMGUI_USE_DLL))
#error "DXLIMGUI_STATIC cannot be combined with a DLL link mode."
#endif

#ifndef DXLIMGUI_API
#if defined(DXLIMGUI_BUILD_DLL)
#define DXLIMGUI_API __declspec(dllexport)
#elif defined(DXLIMGUI_USE_DLL)
#define DXLIMGUI_API __declspec(dllimport)
#else
#define DXLIMGUI_API
#endif
#endif

// ============================================================
// Compiler utilities
// ============================================================

#if defined(_MSC_VER)
#define DXLIMGUI_FORCE_INLINE __forceinline
#define DXLIMGUI_NO_INLINE __declspec(noinline)
#elif defined(__GNUC__) || defined(__clang__)
#define DXLIMGUI_FORCE_INLINE inline __attribute__((always_inline))
#define DXLIMGUI_NO_INLINE __attribute__((noinline))
#else
#define DXLIMGUI_FORCE_INLINE inline
#define DXLIMGUI_NO_INLINE
#endif

#if defined(__has_cpp_attribute)
#if __has_cpp_attribute(nodiscard)
#define DXLIMGUI_NODISCARD [[nodiscard]]
#else
#define DXLIMGUI_NODISCARD
#endif
#else
#define DXLIMGUI_NODISCARD
#endif

#define DXLIMGUI_UNUSED(value) static_cast<void>(value)

#ifndef DXLIMGUI_ASSERT
#include <cassert>
#define DXLIMGUI_ASSERT(expression) assert(expression)
#endif

// 必要に応じて、DxLImGui.hより前に0または1で定義できます。
#ifndef DXLIMGUI_ENABLE_DEBUG_TOOLS
#ifdef NDEBUG
#define DXLIMGUI_ENABLE_DEBUG_TOOLS 0
#else
#define DXLIMGUI_ENABLE_DEBUG_TOOLS 1
#endif
#endif

#ifndef DXLIMGUI_ENABLE_KEYBOARD_NAVIGATION
#define DXLIMGUI_ENABLE_KEYBOARD_NAVIGATION 1
#endif

#ifndef DXLIMGUI_ENABLE_GAMEPAD_NAVIGATION
#define DXLIMGUI_ENABLE_GAMEPAD_NAVIGATION 1
#endif

#include <cstddef>
#include <cstdint>
#include <utility>

#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <Windows.h> // HWND, UINT, WPARAM, LPARAM

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable: 4010)
#endif
#include "DxLib.h"
#if defined(_MSC_VER)
#pragma warning(pop)
#endif

#if __has_include(<imgui.h>)
#include <imgui.h> // Dear ImGui
#else
//NOTE : imgui.hをincludeしてください    
#endif

#ifndef IMGUI_VERSION_NUM
#error "Dear ImGui is required."
#endif

// DxLImGuiは同梱版と同じDear ImGui 1.92.xを対象にします。
#if IMGUI_VERSION_NUM < 19200 || IMGUI_VERSION_NUM >= 19300
#error "DxLImGui requires Dear ImGui 1.92.x."
#endif


namespace DxLImGui
{
	//StylePreset列挙型
	//ImGuiのウィジェットなどの色一式です
	//カスタマイズされる場合はカスタマイズ
	enum class StylePreset : std::uint8_t {
		Dark = 0,
		Light = 1,
		Classic = 2,

		//NOTE : コントリビューターや他の利用者による依頼があれば
		//       固定プリセットを実装予定

		//用途別で使用。同じ意味をする

		White = Light,
		Gray = Classic,
	};

	// Win32はDear ImGui公式バックエンドをそのまま使用する標準経路です。
	// Customは公式Win32バックエンドを初期化・呼び出しせず、利用者が
	// 必要なプラットフォーム更新と入力イベントをすべて提供する経路です。
	enum class InputBackend
	{
		Win32,
		Custom
	};

	// CustomモードではImGui::NewFrame()より前に呼ばれます。
	// DisplaySize、DeltaTime、入力イベントなど、フレームに必要な
	// ImGuiIO更新は利用者の責任です。
	using InputUpdateCallback = void (*)(ImGuiIO& io);


	//DxLImGuiの初期化時に使用する構造体
	struct DxLImGuiConfig
	{
		bool NavEnableKeyboard = true;
		bool DockingEnable = true;
		bool ViewportsEnable = false;
		bool DpiEnableScaleViewports = false;
		bool DpiEnableScaleFonts = true;

		StylePreset stylePreset = StylePreset::Dark;

		// Win32を標準入力経路とします。Customは公式Win32バックエンドと
		// 共存せず、ViewportsEnableとの組み合わせをInitializeが拒否します。
		InputBackend inputBackend = InputBackend::Win32;

		// Custom選択時に必須です。ImGui::NewFrame()の直前に呼び出します。
		InputUpdateCallback customInputCallback = nullptr;

		// スタイルを細かくカスタマイズしたい場合に使う関数ポインタです。
		// 例: config.styleCallback = [](ImGuiStyle& style) { style.Colors[ImGuiCol_WindowBg] = ...; };
		//NOTE : 初学者でも理解できる点で
		//       可読性によりusingに変更する可能性があり、APIの変更可能性がある
		void (*styleCallback)(ImGuiStyle&) = nullptr;

	};



	// DxLImGuiの画像キャッシュ登録だけを所有し、GraphHandleは所有しません。
	// Resetまたはデストラクタの後も、GraphHandleの破棄は利用者が行います。
	// 同じGraphHandleの登録を、ほかの所有者と同時に管理しないでください。
	class DXLIMGUI_API ScopedImageRegistration {
	public:
		ScopedImageRegistration() noexcept = default;

		explicit ScopedImageRegistration(
			int graphHandle
		);

		ScopedImageRegistration(
			int graphHandle,
			int softImageHandle
		);

		~ScopedImageRegistration();


		// 1つの登録を複数オブジェクトから解除しないよう、コピーできません。
		ScopedImageRegistration(
			const ScopedImageRegistration&
		) = delete;

		ScopedImageRegistration& operator=(
			const ScopedImageRegistration&
			) = delete;

		// moveでは画像キャッシュ登録の管理責任を譲渡します。
		ScopedImageRegistration(
			ScopedImageRegistration&& other
		) noexcept;

		ScopedImageRegistration& operator=(
			ScopedImageRegistration&& other
			) noexcept;

		// 登録済み、無効なGraphHandle、SRV作成失敗の場合はfalseを返します。
		// 再登録時は、現在管理している登録を先に解除します。
		bool Register(
			int graphHandle
		);

		bool Register(
			int graphHandle,
			int softImageHandle
		);

		void Reset() noexcept;

		DXLIMGUI_NODISCARD
			bool IsRegistered() const noexcept;

		DXLIMGUI_NODISCARD
			int GetGraphHandle() const noexcept;

		explicit operator bool() const noexcept;

	private:
		// ImageとRenderTargetだけがGraphHandleも所有します。
		// フレーム中のSRV参照を守りつつ、SRV -> GraphHandleの
		// 実際の破棄順を保証するための内部経路です。
		bool AdoptGraphOwnership() noexcept;
		void ResetOwnedGraph() noexcept;

		friend class Image;
		friend class RenderTarget;

		int graphHandle_ = -1;
		std::uint64_t registrationId_ = 0;
	};


	// Loadに成功したGraphHandleと、その表示用登録を所有します。
	// DxLib_Endより前にResetするか、デストラクタが実行されるようにしてください。
	class DXLIMGUI_API Image
	{
	public:
		Image() noexcept = default;

		explicit Image(const char* filePath);

		~Image();

		// GraphHandleの二重破棄を避けるため、コピーできません。
		Image(const Image&) = delete;
		Image& operator=(const Image&) = delete;

		// moveではGraphHandleと表示用登録の所有権を譲渡します。
        // TODO : Imageの責任としてmoveは良いのか？譲渡拒否するか検討中
		Image(Image&& other) noexcept;
		Image& operator=(Image&& other) noexcept {
			if (this == &other)
			{
				return *this;
			}

			Reset();

			graphHandle_ = other.graphHandle_;
			width_ = other.width_;
			height_ = other.height_;
			registration_ = std::move(other.registration_);

			other.graphHandle_ = -1;
			other.width_ = 0;
			other.height_ = 0;

			return *this;
		};

		// DxLibが未初期化、パスが無効、画像またはSRVの作成に失敗した場合は
		// falseを返します。失敗時は現在所有している画像を維持します。
		bool Load(const char* filePath);

		// SRV登録を解除してから、所有するGraphHandleを破棄します。
		// Building中に呼んだ場合、実際の破棄はEndFrameまで遅延されます。
		void Reset() noexcept;

		// BeginFrame()の後、EndFrame()の前、かつ
		// ImGui::Begin()とImGui::End()の間で呼び出してください。
		bool Draw() const;

		bool Draw(const ImVec2& size) const;

		// availableSize内へアスペクト比を維持して拡大・縮小します。
		bool DrawFit(const ImVec2& availableSize) const;

		// GraphHandleと表示用登録の両方が有効な場合にtrueを返します。
		DXLIMGUI_NODISCARD
			bool IsValid() const noexcept;

		// 所有権を移さずGraphHandleを返します。利用者側でDeleteGraphしないでください。
		DXLIMGUI_NODISCARD
			int GetGraphHandle() const noexcept;

		// 無効状態では0を返します。
		DXLIMGUI_NODISCARD
			int GetWidth() const noexcept;

		// 無効状態では0を返します。
		DXLIMGUI_NODISCARD
			int GetHeight() const noexcept;

		// 無効状態では(0, 0)を返します。
		DXLIMGUI_NODISCARD
			ImVec2 GetSize() const noexcept;

		explicit operator bool() const noexcept;

	private:
		int graphHandle_ = -1;
		int width_ = 0;
		int height_ = 0;

		ScopedImageRegistration registration_;
	};

	// ============================================================
	// RenderTarget support
	// Added: 2026/07/24
	// Author by : Kojima Ryoichi(@LuisR385)
	//
	// RenderTargetはDxLib::MakeScreen()で生成したGraphHandleを所有します。
	// GraphHandleに対応するTexture2D自体はDxLibが管理し、
	// DxLImGuiはそのTexture2Dを参照するSRVだけを所有します。
	//
	// 破棄時は、SRVを解放してからGraphHandleをDeleteGraph()します。
	// ============================================================
	class DXLIMGUI_API RenderTarget
	{
	public:
		RenderTarget() noexcept = default;

		RenderTarget(
			int width,
			int height,
			bool useAlpha = true
		);

		~RenderTarget();

		RenderTarget(const RenderTarget&) = delete;
		RenderTarget& operator=(const RenderTarget&) = delete;

		RenderTarget(RenderTarget&& other) noexcept;
		RenderTarget& operator=(RenderTarget&& other) noexcept;

		// DxLibが未初期化、サイズが無効、GraphHandleまたはSRVの作成に
		// 失敗した場合はfalseを返し、現在のRenderTargetを維持します。
		bool Create(
			int width,
			int height,
			bool useAlpha = true
		);

		// 描画中の場合は先に描画先の復元を試みます。
		// 復元できない場合、使用中の可能性があるGraphHandleを維持します。
		void Reset() noexcept;

		// 現在のDxLib描画先を保存してから、この描画先へ切り替えます。
		// 無効状態、二重開始、描画先切り替え失敗の場合はfalseを返します。
		bool BeginDraw() noexcept;

		// 復元先を明示する高度制御用です。restoreScreenには、
		// EndDraw()後に戻す有効なDxLib描画先を指定してください。
		bool BeginDraw(
			int restoreScreen
		) noexcept;

		// BeginDraw()に成功した呼び出しと対応させてください。
		// Debugでは描画先の復元失敗をアサートで通知します。
		DXLIMGUI_NODISCARD
		bool EndDraw() noexcept;

		// BeginFrame()の後、EndFrame()の前、かつ
		// ImGui::Begin()とImGui::End()の間で呼び出してください。
		bool Draw() const;
		bool Draw(const ImVec2& size) const;
		// availableSize内へアスペクト比を維持して拡大・縮小します。
		bool DrawFit(const ImVec2& availableSize) const;

		DXLIMGUI_NODISCARD
			bool IsValid() const noexcept;

		// 所有権を移さずGraphHandleを返します。利用者側でDeleteGraphしないでください。
		DXLIMGUI_NODISCARD
			int GetGraphHandle() const noexcept;

		DXLIMGUI_NODISCARD
			int GetWidth() const noexcept;

		DXLIMGUI_NODISCARD
			int GetHeight() const noexcept;

		DXLIMGUI_NODISCARD
			ImVec2 GetSize() const noexcept;

		explicit operator bool() const noexcept;

	private:
		// 復元結果を内部で確認し、失敗時のGraphHandle破棄を防ぎます。
		bool EndDrawInternal() noexcept;

		int graphHandle_ = -1;
		int width_ = 0;
		int height_ = 0;

		int restoreScreen_ = DX_SCREEN_BACK;
		bool drawing_ = false;

		ScopedImageRegistration registration_;
	};












	DXLIMGUI_API void ConfigureEnableDpiAwareness();
	// Win32モードでのみ公式Win32バックエンドへ転送します。
	// Customモードでは何も転送せず0を返します。
	DXLIMGUI_API LRESULT WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

	// ApplyConfigはFlags、Style、Fontsの各設定をまとめて適用します。
	// 個別に管理する場合は必要な関数だけを呼び出してください。
	// inputBackendとcustomInputCallbackは
	// Initialize時に確定し、ApplyConfigでは実行中の入力経路を変更しません。
	DXLIMGUI_API void ApplyConfig(const DxLImGuiConfig& config = {});
	DXLIMGUI_API void ApplyConfigFlags(const DxLImGuiConfig& config = {});
	DXLIMGUI_API void ApplyConfigStyle(const DxLImGuiConfig& config); // NOTE : StylePreset引数にする予定
	DXLIMGUI_API void ApplyFonts(const DxLImGuiConfig& config); //NOTE : v.0.1.0ではまだ未実装です。今後対応します
	//DxLibを初期化する前に呼んでください
	//NOTE : Windows環境のディスプレイ拡大率100%の場合は任意
	//TESTED ENVIROMENT :
	// Windows11 : x64
	// resolution : 1920 x 1080
	// 倍率 : 100%
	DXLIMGUI_API void SetupBeforeDxLibInit();

	// DxLibのDirectX 11初期化後に1回だけ呼び出してください。
	// 二重初期化、必要なDxLib資源がない場合、または別のImGuiContextが
	// Currentの場合はfalseを返します。Customではコールバック未指定または
	// Multi-Viewport有効時にもfalseを返します。
	DXLIMGUI_API bool Initialize(const DxLImGuiConfig& config = {}); //TODO : 例外処理の追加

	// Initialize成功後、1フレームにつきBeginFrame()、GUI構築、
	// EndFrame()の順で1回ずつ呼び出してください。
	DXLIMGUI_API void BeginFrame();			// NOTE : エラーハンドリングチェックも兼ねるためbool APIにする可能性が高い
	DXLIMGUI_API void EndFrame();			// NOTE : エラーハンドリングチェックも兼ねるためbool APIにする可能性が高い

	// ImageやRenderTargetを破棄した後、DxLib_End()より前に呼び出してください。
	// BeginFrame()後に終了する場合でも、未完了フレームは内部で閉じられます。
	DXLIMGUI_API void Shutdown();

	// 以下の直下APIは互換性のため維持しています。
	// 新しい高度制御コードではAdvanced名前空間のAPIを使用してください。
	DXLIMGUI_API void RestoreDxLibRenderingState();

	// マルチビューポートで生成されたプラットフォームウィンドウを更新します。
	// ImGui::UpdatePlatformWindows() をラップしています。
	DXLIMGUI_API void UpdateViewports();

	// マルチビューポートで生成されたプラットフォームウィンドウを描画します。
	// ImGui::RenderPlatformWindowsDefault() をラップしています。
	DXLIMGUI_API void RenderViewports();



	// GraphHandleをImGuiで表示できるように登録します。
	// Image/RenderTargetが所有するGraphHandleは外部登録できません。
	DXLIMGUI_API bool RegisterImage(int graphHandle);
	DXLIMGUI_API bool RegisterImage(int graphHandle, int softImageHandle);

	// BeginFrame()の後、EndFrame()の前に呼び出してください。
	// また、ImGui::Begin()とImGui::End()の間で呼び出す必要があります。
	DXLIMGUI_API bool DrawImage(int graphHandle);
	DXLIMGUI_API bool DrawImage(int graphHandle, const ImVec2& size);

	// フレーム中に解除したSRVはEndFrame()まで内部で保持されます。
	// Image/RenderTarget所有ハンドルへ呼ぶと表示登録だけが無効になります。
	// GraphHandle自体は引き続き所有オブジェクトがReset時に破棄します。
	DXLIMGUI_API void UnregisterImage(int graphHandle);

	// 全表示登録を解除しますが、Image/RenderTargetのGraphHandle所有権は
	// 移しません。該当オブジェクトは無効状態になり、Reset可能です。
	DXLIMGUI_API void ClearImageCache();


    //TODO : オーバーロードAPIまたは引数の変更を検討する
    
	//読み込み
	DXLIMGUI_NODISCARD
	DXLIMGUI_API Image LoadImageFromFile(const char* path);

    DXLIMGUI_NODISCARD
        DXLIMGUI_API RenderTarget CreateRenderTarget(int width, int height, bool alpha = true);

	//高レベルAPI : Image用

	// BeginFrame()の後、EndFrame()の前、かつ
	// ImGui::Begin()とImGui::End()の間で呼び出してください。
	DXLIMGUI_API bool DrawImage(const Image& image);
	DXLIMGUI_API bool DrawImage(const Image& image, const ImVec2& availableSize);
	DXLIMGUI_API bool DrawImageFit(const Image& image, const ImVec2& availableSize);

	// ============================================================
	// Advanced API / 高度制御API
	// Added: 2026/07/24
	// Author : Kojima Ryoichi (@LuisR385)
	//
	// 高度制御用API
	// この名前空間へ委譲しておく
	// ============================================================
	namespace Advanced
	{
		DXLIMGUI_API bool RegisterImage(int graphHandle);
		DXLIMGUI_API bool RegisterImage(
			int graphHandle,
			int softImageHandle
		);

		DXLIMGUI_API void UnregisterImage(int graphHandle);
		DXLIMGUI_API void ClearImageCache();

		// 通常のEndFrame()が更新と描画を行うため、通常のフレームループでは
		// 追加で呼ぶ必要はありません。呼ぶ場合はEndFrame()後にしてください。
		// 同じフレームで処理済みの場合は二重実行しません。
		DXLIMGUI_API void UpdatePlatformWindows();
		DXLIMGUI_API void RenderPlatformWindows();
		DXLIMGUI_API void RestoreDxLibRenderingState();
	}
} // namespace DxLImGui

// ============================================================
// Implementation
//
// 1つの翻訳単位だけでDXLIMGUI_IMPLEMENTATIONを定義してから
// DxLImGui.hをインクルードしてください。src/DxLImGui.cppは、
// この処理を行うための互換用ソースファイルです。
// ============================================================

#if defined(DXLIMGUI_IMPLEMENTATION)

#if defined(DXLIMGUI_USE_DLL)
#error "DXLIMGUI_IMPLEMENTATION cannot be combined with DXLIMGUI_USE_DLL."
#endif

#ifndef DXLIMGUI_IMPLEMENTATION_INCLUDED
#define DXLIMGUI_IMPLEMENTATION_INCLUDED

// ============================================================================
//
//  DxLImGui.cpp
//
//  DxLibとDear ImGuiをDirectX 11環境で接続する
//  DxLImGuiライブラリの実装ファイルです。
//
//  このファイルでは主に次の処理を実装します。
//
//      - Dear ImGui Contextの生成と破棄
//      - Win32 / DirectX 11バックエンドの初期化と終了
//      - BeginFrame / EndFrameによるフレーム進行管理
//      - DxLibとDear ImGuiの描画状態の調整
//      - GraphHandleからのShader Resource View生成
//      - Image / RenderTargetのリソース所有権管理
//      - フレーム中に使用されている画像リソースの遅延解放
//      - Multi-Viewportの更新と描画
//
//  必要なファイル:
//
//      include/DxLImGui/DxLImGui.h
//      src/DxLImGui.cpp
//
//  必要条件:
//
//      - Windows
//      - DirectX 11
//      - C++17
//      - DxLib
//      - Dear ImGui 1.92.x
//
//  実装上の方針:
//
//      - DxLImGuiが作成したImGuiContextだけを所有・破棄します。
//      - DxLibが所有するTexture2Dは借用し、DxLImGui側ではSRVを所有します。
//      - ImGui描画データがSRVを参照している間は、画像リソースを破棄しません。
//      - Debugビルドでは、APIの不正な呼び出し順をAssertで検出します。
//      - Releaseビルドでも、不正状態では処理を中断し安全側へ戻します。
//      - 公開APIからDear ImGuiの内部フィールドへ直接アクセスしません。
//
//  Author:
//      Kojima Ryoichi (@LuisR385)
//
//  Created:
//      2026 / 07 / 16
//
//  License:
//      MIT License
//      詳細はリポジトリ内のLICENSEを参照してください。
//
//  Stability:
//
//      現在は初期開発段階です。
//      v1.0.0までは、公開API、名前空間、挙動、内部実装、
//      ファイル構成が変更される可能性があります。
//
//  Design references:
//
//      Dear ImGui
//          Omar Cornut氏およびコントリビューター
//
//      raylib / rlImGui
//          入力バックエンドおよび統合ライブラリの設計思想を
//          参考にしています。
//
//  Copyright (c) 2026 Kojima Ryoichi
//
// ============================================================================



#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable: 4010)
#endif
#include "DxLib.h"
#if defined(_MSC_VER)
#pragma warning(pop)
#endif

//imgui
#include "imgui.h"
#include "imgui_impl_dx11.h"
#include "imgui_impl_win32.h"


#include <d3d11.h>
#include <wrl/client.h>

//STL
#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <limits>
#include <new>
#include <stdexcept>
#include <unordered_map>
#include <utility>
#include <vector>
//WndProc
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);


//このファイル内のみ使用することを明示します
namespace
{
    constexpr std::size_t BytesPerPixel = 4; //バイトからピクセルへの絶対メモリ確保分

    // Dear ImGuiの内部フィールドを参照せず、DxLImGuiが開始した
    // フレームの有効期間だけを自前で追跡します。利用側がDear ImGuiの
    // フレームAPIを直接呼んだ状態までは、この列挙型では追跡しません。
    enum class FramePhase : std::uint8_t
    {
        // 初期化直後、または描画を開始していない状態です。
        // ImGuiの描画コマンドがSRVを参照していない前提で即時解放できます。
        Idle,

        // NewFrame後から描画完了までの状態です。描画コマンドがSRVの
        // 生ポインタを保持できるため、画像登録の解除は遅延させます。
        Building,

        // メイン描画とプラットフォームウィンドウの処理が完了した状態です。
        // AdvancedのビューポートAPIは、未完了フレームを触らないよう
        // この状態でのみ動作します。
        Rendered
    };

    // DxLImGuiが所有する初期化状態とフレーム状態をまとめます。
    // ImGuiContextは不透明なハンドルとして保持し、内部フィールドには
    // アクセスせず、Dear ImGuiの公開APIへ渡すためだけに使用します。
    struct RuntimeState {
        ImGuiContext* context = nullptr;
        bool contextCreated = false;
        bool win32Initialized = false;
        bool dx11Initialized = false;
        DxLImGui::InputBackend inputBackend =
            DxLImGui::InputBackend::Win32;
        DxLImGui::InputUpdateCallback customInputCallback = nullptr;
        FramePhase framePhase = FramePhase::Idle;

        // EndFrameとAdvanced APIが同じフレームを二重処理しないための印です。
        // 更新の二重実行はDear ImGuiのアサート、描画の二重実行は
        // プラットフォームウィンドウの再Presentにつながる可能性があります。
        bool platformWindowsUpdated = false;
        bool platformWindowsRendered = false;
    };
    //グローバル変数 / 初期化確認のため
    RuntimeState g_RuntimeState{};

    // GraphHandle直接方式とSoftImage方式が共有するSRVキャッシュ要素です。
    // Texture2DはDxLib、SRVはこのComPtr、GraphHandleは呼び出し側または
    // Image/RenderTargetが所有するため、3つの有効期間を分けて扱います。
    struct ImageResource
    {
        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> srv;
        int width = 0;
        int height = 0;

        // 同じ数値のGraphHandleが再利用されても、古い登録オブジェクトが
        // 新しい登録を解除しないよう、登録ごとに世代を割り当てます。
        std::uint64_t registrationId = 0;

        // Building中はSRVを消さず、EndFrame後の遅延解放対象にします。
        bool pendingRemoval = false;

        // Image/RenderTarget所有のGraphHandleだけ、SRV解放後に
        // DxLib::DeleteGraphまで行う必要があることを記録します。
        bool deleteGraphWhenRemoved = false;
    };

    using ImageCache =
        std::unordered_map<int, ImageResource>;

    ImageCache imageCache;

    // SRVキャッシュとは独立して、Image/RenderTargetが所有している
    // GraphHandleを追跡します。ClearImageCacheやShutdownでSRVが
    // 消えても、所有者が生きているハンドルの外部再登録を拒否します。
    using OwnedGraphRegistry =
        std::unordered_map<int, std::uint64_t>;

    OwnedGraphRegistry ownedGraphRegistry;

    // 静的オブジェクトの破棄順が確定していない終了時に、Imageなどの
    // デストラクタが破棄済みキャッシュへ触れることを防ぎます。
    bool imageCacheAlive = true;

    struct ImageCacheLifetimeGuard
    {
        ~ImageCacheLifetimeGuard()
        {
            imageCacheAlive = false;
        }
    };

    ImageCacheLifetimeGuard imageCacheLifetimeGuard;

    ImageCache& GetImageCache()
    {
        return imageCache;
    }

    std::uint64_t nextImageRegistrationId = 1;

    bool IsGraphOwned(int graphHandle) noexcept
    {
        return
            imageCacheAlive &&
            ownedGraphRegistry.find(graphHandle) !=
                ownedGraphRegistry.end();
    }


    bool AdoptGraphOwnershipInternal(
        int graphHandle,
        std::uint64_t registrationId
    ) noexcept
    {
        if (
            !imageCacheAlive ||
            graphHandle < 0 ||
            registrationId == 0
        )
        {
            return false;
        }

        const auto imageIterator =
            imageCache.find(graphHandle);

        if (
            imageIterator == imageCache.end() ||
            imageIterator->second.registrationId !=
                registrationId ||
            imageIterator->second.pendingRemoval ||
            ownedGraphRegistry.find(graphHandle) !=
                ownedGraphRegistry.end()
        )
        {
            return false;
        }

        try
        {
            return ownedGraphRegistry.emplace(
                graphHandle,
                registrationId
            ).second;
        }
        catch (const std::bad_alloc&)
        {
            return false;
        }
    }


    bool ReleaseGraphOwnershipInternal(
        int graphHandle,
        std::uint64_t registrationId
    ) noexcept
    {
        if (!imageCacheAlive)
        {
            return false;
        }

        const auto ownerIterator =
            ownedGraphRegistry.find(graphHandle);

        if (
            ownerIterator == ownedGraphRegistry.end() ||
            ownerIterator->second != registrationId
        )
        {
            return false;
        }

        ownedGraphRegistry.erase(ownerIterator);
        return true;
    }


    bool TryMultiplySize(
        std::size_t left,
        std::size_t right,
        std::size_t& result
    )
    {
        if (
            left != 0 &&
            right > (std::numeric_limits<std::size_t>::max)() / left
        )
        {
            return false;
        }

        result = left * right;
        return true;
    }

    //グラフハンドルが有効かどうか
    bool IsValidGraphHandle(int graphHandle)
    {
        //チェック
        if (
            graphHandle < 0 ||
            DxLib::DxLib_IsInit() == FALSE
        )
        {
            return false;
        }

        //DxLib::GetGraphSizeに渡すために一時変数を用意
        int width = 0;
        int height = 0;

        return
            DxLib::GetGraphSize(
                graphHandle,
                &width,
                &height
            ) != -1 &&
            width > 0 &&
            height > 0;
    }

    // ============================================================
    // GraphHandle direct SRV support
    // Added: 2026/07/24
    //
    // DxLibが所有するTexture2Dを借用し、そのリソースを参照する
    // SRVだけをDxLImGui側で所有します。Texture2DをAddRef/Release
    // したり、GPUからCPUへ画素をコピーしたりはしません。
    // ============================================================
    bool CreateImageResourceFromGraphHandle(
        int graphHandle,
        ImageResource& imageResource
    )
    {
        if (!IsValidGraphHandle(graphHandle))
        {
            return false;
        }

        int width = 0;
        int height = 0;

        if (
            DxLib::GetGraphSize(
                graphHandle,
                &width,
                &height
            ) == -1 ||
            width <= 0 ||
            height <= 0
        )
        {
            return false;
        }

        // このポインタの所有者はDxLibです。CreateShaderResourceViewは
        // 必要なCOM参照をSRV側に保持するため、ここではReleaseしません。
        auto* texture = reinterpret_cast<ID3D11Texture2D*>(
            const_cast<void*>(
                DxLib::GetGraphID3D11Texture2D(graphHandle)
            )
        );

        auto* device = reinterpret_cast<ID3D11Device*>(
            const_cast<void*>(
                DxLib::GetUseDirect3D11Device()
            )
        );

        if (texture == nullptr || device == nullptr)
        {
            return false;
        }

        D3D11_TEXTURE2D_DESC textureDescription{};
        texture->GetDesc(&textureDescription);

#if DXLIMGUI_ENABLE_DEBUG_TOOLS
        // 登録時に一度だけ出力します。毎フレームのログは行いません。
        DxLib::LogFileFmtAdd(
            "[DxLImGui] Graph SRV: Handle=%d, Size=%ux%u, "
            "Format=%u, BindFlags=0x%08X, SampleCount=%u\n",
            graphHandle,
            textureDescription.Width,
            textureDescription.Height,
            static_cast<unsigned int>(textureDescription.Format),
            textureDescription.BindFlags,
            textureDescription.SampleDesc.Count
        );
#endif

        // ImGui::ImageはSRV全体をUV 0..1で参照します。派生グラフや
        // アトラス上の部分画像を誤表示しないよう、寸法不一致は
        // SoftImageフォールバックへ回します。
        if (
            textureDescription.Width != static_cast<UINT>(width) ||
            textureDescription.Height != static_cast<UINT>(height) ||
            (textureDescription.BindFlags &
                D3D11_BIND_SHADER_RESOURCE) == 0 ||
            textureDescription.SampleDesc.Count != 1
        )
        {
            return false;
        }

        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> srv;

        const HRESULT result =
            device->CreateShaderResourceView(
                texture,
                nullptr,
                srv.GetAddressOf()
            );

#if DXLIMGUI_ENABLE_DEBUG_TOOLS
        DxLib::LogFileFmtAdd(
            "[DxLImGui] CreateShaderResourceView: "
            "Handle=%d, HRESULT=0x%08X\n",
            graphHandle,
            static_cast<unsigned int>(result)
        );
#endif

        if (FAILED(result) || srv == nullptr)
        {
            return false;
        }

        // すべて成功してから出力へ反映し、失敗時に呼び出し側へ
        // 半端なSRVやサイズを残さないようにします。
        ImageResource completedResource;
        completedResource.srv = std::move(srv);
        completedResource.width = width;
        completedResource.height = height;
        imageResource = std::move(completedResource);
        return true;
    }


    bool CreateImageResourceFromSoftImage(
        int softImageHandle,
        ImageResource& imageResource
    )
    {
        if (softImageHandle < 0)
        {
            return false;
        }

        int width = 0;
        int height = 0;

        if (
            DxLib::GetSoftImageSize(
                softImageHandle,
                &width,
                &height
            ) == -1 ||
            width <= 0 ||
            height <= 0
        )
        {
            return false;
        }

        std::size_t rowPitch = 0;
        std::size_t imageDataSize = 0;

        if (
            !TryMultiplySize(
                static_cast<std::size_t>(width),
                BytesPerPixel,
                rowPitch
            ) ||
            rowPitch > (std::numeric_limits<UINT>::max)() ||
            !TryMultiplySize(
                rowPitch,
                static_cast<std::size_t>(height),
                imageDataSize
            )
        )
        {
            return false;
        }

        std::vector<std::uint8_t> imageData;

        if (imageDataSize > imageData.max_size())
        {
            return false;
        }

        try
        {
            imageData.resize(imageDataSize);
        }
        catch (const std::bad_alloc&)
        {
            return false;
        }
        catch (const std::length_error&)
        {
            return false;
        }

        for (int y = 0; y < height; ++y)
        {
            const std::size_t rowOffset =
                static_cast<std::size_t>(y) * rowPitch;

            for (int x = 0; x < width; ++x)
            {
                int red = 0;
                int green = 0;
                int blue = 0;
                int alpha = 0;

                if (
                    DxLib::GetPixelSoftImage(
                        softImageHandle,
                        x,
                        y,
                        &red,
                        &green,
                        &blue,
                        &alpha
                    ) == -1
                )
                {
                    return false;
                }

                const std::size_t pixelOffset =
                    rowOffset +
                    static_cast<std::size_t>(x) * BytesPerPixel;

                imageData[pixelOffset + 0] =
                    static_cast<std::uint8_t>(red);
                imageData[pixelOffset + 1] =
                    static_cast<std::uint8_t>(green);
                imageData[pixelOffset + 2] =
                    static_cast<std::uint8_t>(blue);
                imageData[pixelOffset + 3] =
                    static_cast<std::uint8_t>(alpha);
            }
        }

        //デバイス獲得(強制解釈)
        auto* device = reinterpret_cast<ID3D11Device*>(
            const_cast<void*>(DxLib::GetUseDirect3D11Device())
        );

        DXLIMGUI_ASSERT(device != nullptr);

        //ヌルチェック
        if (device == nullptr)
        {
            return false;
        }

        //各テクスチャの詳細を設定
        D3D11_TEXTURE2D_DESC textureDescription{};
        textureDescription.Width = static_cast<UINT>(width);
        textureDescription.Height = static_cast<UINT>(height);
        textureDescription.MipLevels = 1;
        textureDescription.ArraySize = 1;
        textureDescription.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        textureDescription.SampleDesc.Count = 1;
        textureDescription.Usage = D3D11_USAGE_DEFAULT;
        textureDescription.BindFlags = D3D11_BIND_SHADER_RESOURCE;

        //サブリソースのデータ
        D3D11_SUBRESOURCE_DATA initialData{};
        initialData.pSysMem = imageData.data();
        initialData.SysMemPitch = static_cast<UINT>(rowPitch);

        Microsoft::WRL::ComPtr<ID3D11Texture2D> texture;

        const HRESULT textureResult = device->CreateTexture2D(
            &textureDescription,
            &initialData,
            texture.GetAddressOf()
        );

        if (FAILED(textureResult) || texture == nullptr)
        {
            return false;
        }

        Microsoft::WRL::ComPtr<ID3D11ShaderResourceView> srv;

        const HRESULT srvResult = device->CreateShaderResourceView(
            texture.Get(),
            nullptr,
            srv.GetAddressOf()
        );

        if (FAILED(srvResult) || srv == nullptr)
        {
            return false;
        }

        imageResource.srv = std::move(srv);
        imageResource.width = width;
        imageResource.height = height;
        return true;
    }


    std::uint64_t AllocateImageRegistrationId() noexcept
    {
        // 0は「登録なし」に予約しています。周回した場合も0を飛ばすことで、
        // 初期状態と有効な登録を同じ値で扱わないようにします。
        const std::uint64_t registrationId =
            nextImageRegistrationId;

        ++nextImageRegistrationId;

        if (nextImageRegistrationId == 0)
        {
            nextImageRegistrationId = 1;
        }

        return registrationId;
    }

    bool RegisterImageInternal(
        int graphHandle,
        std::uint64_t& registrationId
    )
    {
        registrationId = 0;

        if (!imageCacheAlive)
        {
            return false;
        }

        ImageCache& imageCache =
            GetImageCache();

        // 既存登録の所有者を無条件に奪わないことが、Scoped登録と
        // GraphHandleの解放順を安全に保つ前提です。
        if (
            !IsValidGraphHandle(graphHandle) ||
            IsGraphOwned(graphHandle) ||
            imageCache.find(graphHandle) != imageCache.end()
        )
        {
            return false;
        }

        ImageResource imageResource;

        if (
            !CreateImageResourceFromGraphHandle(
                graphHandle,
                imageResource
            )
        )
        {
            return false;
        }

        imageResource.registrationId =
            AllocateImageRegistrationId();

        try
        {
            const auto insertResult = imageCache.emplace(
                graphHandle,
                std::move(imageResource)
            );

            if (!insertResult.second)
            {
                return false;
            }

            registrationId =
                insertResult.first->second.registrationId;
        }
        catch (const std::bad_alloc&)
        {
            return false;
        }

        return true;
    }


    bool RegisterImageInternal(
        int graphHandle,
        int softImageHandle,
        std::uint64_t& registrationId
    )
    {
        if (!imageCacheAlive)
        {
            registrationId = 0;
            return false;
        }

        ImageCache& imageCache =
            GetImageCache();

        registrationId = 0;

        if (
            !IsValidGraphHandle(graphHandle) ||
            softImageHandle < 0 ||
            IsGraphOwned(graphHandle) ||
            imageCache.find(graphHandle) != imageCache.end()
        )
        {
            return false;
        }

        ImageResource imageResource;

        if (
            !CreateImageResourceFromSoftImage(
                softImageHandle,
                imageResource
            )
        )
        {
            return false;
        }

        imageResource.registrationId =
            AllocateImageRegistrationId();

        try
        {
            const auto insertResult = imageCache.emplace(
                graphHandle,
                std::move(imageResource)
            );

            if (!insertResult.second)
            {
                return false;
            }

            registrationId =
                insertResult.first->second.registrationId;
        }
        catch (const std::bad_alloc&)
        {
            return false;
        }

        return true;
    }


    bool IsImageRegistrationActive(
        int graphHandle,
        std::uint64_t registrationId
    ) noexcept
    {
        if (!imageCacheAlive)
        {
            return false;
        }

        ImageCache& imageCache =
            GetImageCache();

        if (graphHandle < 0 || registrationId == 0)
        {
            return false;
        }

        const auto imageIterator = imageCache.find(graphHandle);

        return
            imageIterator != imageCache.end() &&
            imageIterator->second.registrationId == registrationId &&
            !imageIterator->second.pendingRemoval;
    }


    void UnregisterImageInternal(
        int graphHandle,
        std::uint64_t registrationId,
        bool requireMatchingRegistration
    ) noexcept
    {
        if (!imageCacheAlive)
        {
            return;
        }

        ImageCache& imageCache =
            GetImageCache();

        const auto imageIterator = imageCache.find(graphHandle);

        if (imageIterator == imageCache.end())
        {
            return;
        }

        if (
            requireMatchingRegistration &&
            imageIterator->second.registrationId != registrationId
        )
        {
            // move前のオブジェクトや古い登録からのResetで、同じGraphHandleを
            // 使う新しい登録まで解除してしまうことを防ぎます。
            return;
        }

        if (
            g_RuntimeState.framePhase ==
            FramePhase::Building
        )
        {
            // ImGuiの描画コマンドはSRVの生ポインタを保持するため、
            // 実際の描画が終わるまではComPtrを解放しない。
            imageIterator->second.pendingRemoval = true;
            return;
        }

        imageCache.erase(imageIterator);
    }

    void UnregisterOwnedGraphInternal(
        int graphHandle,
        std::uint64_t registrationId
    ) noexcept
    {
        if (graphHandle < 0)
        {
            return;
        }

        if (
            imageCacheAlive &&
            !ReleaseGraphOwnershipInternal(
                graphHandle,
                registrationId
            )
        )
        {
            // 別の所有者・登録IDのGraphHandleは破棄しません。
            // 所有権表との不一致は内部状態の破損を示します。
            DXLIMGUI_ASSERT(false);
            return;
        }

        if (imageCacheAlive)
        {
            ImageCache& imageCache =
                GetImageCache();

            const auto imageIterator =
                imageCache.find(graphHandle);

            if (
                imageIterator != imageCache.end() &&
                imageIterator->second.registrationId ==
                    registrationId
            )
            {
                if (
                    g_RuntimeState.framePhase ==
                    FramePhase::Building
                )
                {
                    // ImGui描画データがSRVを参照している間は、
                    // GraphHandleも一緒にEndFrameまで保持します。
                    // Flush時にSRVをeraseした後でDeleteGraphします。
                    imageIterator->second.pendingRemoval = true;
                    imageIterator->second.deleteGraphWhenRemoved =
                        true;
                    return;
                }

                // erase完了時点でComPtrのSRVが解放されます。
                imageCache.erase(imageIterator);
            }
        }

        if (DxLib::DxLib_IsInit() != FALSE)
        {
            DxLib::DeleteGraph(graphHandle);
        }
    }


    void ClearImageCacheImmediately() noexcept
    {
        if (!imageCacheAlive)
        {
            return;
        }

        ImageCache& imageCache =
            GetImageCache();

        while (!imageCache.empty())
        {
            const auto imageIterator =
                imageCache.begin();
            const int graphHandle =
                imageIterator->first;
            const bool deleteGraph =
                imageIterator->second.deleteGraphWhenRemoved;

            // SRVのComPtrを先に破棄してから、必要なGraphHandleを
            // DxLibへ返します。
            imageCache.erase(imageIterator);

            if (
                deleteGraph &&
                DxLib::DxLib_IsInit() != FALSE
            )
            {
                DxLib::DeleteGraph(graphHandle);
            }
        }
    }


    void ClearImageCacheInternal() noexcept
    {
        if (!imageCacheAlive)
        {
            return;
        }

        ImageCache& imageCache =
            GetImageCache();

        if (
            g_RuntimeState.framePhase !=
            FramePhase::Building
        )
        {
            ClearImageCacheImmediately();
            return;
        }

        // Building中の描画コマンドはSRVを参照できるため、ここでは印だけを
        // 付けます。実際のComPtr解放はEndFrameの描画完了後に行います。
        for (auto& imageEntry : imageCache)
        {
            imageEntry.second.pendingRemoval = true;
        }
    }


    void FlushPendingImageRemovals() noexcept
    {
        if (!imageCacheAlive)
        {
            return;
        }

        ImageCache& imageCache =
            GetImageCache();

        for (auto imageIterator = imageCache.begin();
            imageIterator != imageCache.end();)
        {
            if (imageIterator->second.pendingRemoval)
            {
                const int graphHandle =
                    imageIterator->first;
                const bool deleteGraph =
                    imageIterator->second.deleteGraphWhenRemoved;

                imageIterator = imageCache.erase(imageIterator);

                if (
                    deleteGraph &&
                    DxLib::DxLib_IsInit() != FALSE
                )
                {
                    // SRVはDxLib所有のTexture2Dを参照しています。
                    // eraseでSRVを先に解放してからGraphHandleを削除し、
                    // 参照先だけが先に失効する順序を避けます。
                    DxLib::DeleteGraph(graphHandle);
                }
            }
            else
            {
                ++imageIterator;
            }
        }
    }


    bool MakeRuntimeContextCurrent() noexcept
    {
        if (
            !g_RuntimeState.contextCreated ||
            g_RuntimeState.context == nullptr
        )
        {
            return false;
        }

        if (
            ImGui::GetCurrentContext() !=
            g_RuntimeState.context
        )
        {
            // Dear ImGuiのバックエンドAPIはCurrent Contextを暗黙に参照します。
            // 呼び出し側が別Contextへ切り替えていても、DxLImGuiの状態を
            // 誤って別Contextへ適用しないよう、所有Contextへ戻します。
            ImGui::SetCurrentContext(
                g_RuntimeState.context
            );
        }

        return true;
    }

    // DxLImGuiConfigのbool値を反映するとき、対象以外のImGuiConfigFlagsを
    // 保ったまま、指定された1ビットだけを有効化または無効化します。
    void SetConfigFlag(
        ImGuiIO& io,
        ImGuiConfigFlags flag,
        bool enabled
    )
    {
        if (enabled)
        {
            io.ConfigFlags |= flag;
        }
        else
        {
            io.ConfigFlags &= ~flag;
        }
    }

    bool IsKnownInputBackend(
        DxLImGui::InputBackend inputBackend
    ) noexcept
    {
        switch (inputBackend)
        {
        case DxLImGui::InputBackend::Win32:
        case DxLImGui::InputBackend::Custom:
            return true;

        default:
            return false;
        }
    }

    bool ValidateInputConfig(
        const DxLImGui::DxLImGuiConfig& config
    )
    {
        if (!IsKnownInputBackend(config.inputBackend))
        {
            DxLib::LogFileAdd(
                "[DxLImGui] Initialize rejected: unknown InputBackend.\n"
            );
            return false;
        }

        if (
            config.inputBackend ==
                DxLImGui::InputBackend::Custom &&
            config.ViewportsEnable
        )
        {
            DxLib::LogFileAdd(
                "[DxLImGui] Initialize rejected: Custom input does not "
                "initialize the Win32 platform backend and cannot use "
                "Multi-Viewport. Use InputBackend::Win32 or "
                "disable ViewportsEnable.\n"
            );
            return false;
        }

        if (
            config.inputBackend ==
                DxLImGui::InputBackend::Custom &&
            config.customInputCallback == nullptr
        )
        {
            DxLib::LogFileAdd(
                "[DxLImGui] Initialize rejected: Custom input requires "
                "customInputCallback.\n"
            );
            return false;
        }

        return true;
    }
}


namespace DxLImGui
{
    void ConfigureEnableDpiAwareness() {
        ImGui_ImplWin32_EnableDpiAwareness();
    }

    LRESULT WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
        if (
            !g_RuntimeState.contextCreated ||
            g_RuntimeState.context == nullptr ||
            g_RuntimeState.inputBackend !=
                InputBackend::Win32 ||
            !g_RuntimeState.win32Initialized
        )
        {
            return 0;
        }

        // Win32バックエンドはCurrent Contextへ入力を記録します。
        // 他ライブラリやアプリケーションが一時的に使用しているContextを
        // 上書きしたままにしないよう、処理前の値を保存します。
        ImGuiContext* previousContext =
            ImGui::GetCurrentContext();

        ImGui::SetCurrentContext(
            g_RuntimeState.context
        );

        const LRESULT result =
            ImGui_ImplWin32_WndProcHandler(
                hWnd,
                msg,
                wParam,
                lParam
            );

        if (previousContext != g_RuntimeState.context)
        {
            // メッセージ処理の間だけDxLImGuiのContextを使用し、
            // 呼び出し元が管理していたImGuiContextを復元します。
            ImGui::SetCurrentContext(previousContext);
        }

        return result;
    }

    void SetupBeforeDxLibInit() {
        DxLib::SetWindowSizeExtendRate(1.0); //https://dxlib.xsrv.jp/cgi/patiobbs/patio.cgi?mode=view&no=5649
    }

    //TODO : bool値APIに変更する
    //NOTE : VOID API -> bool return API

    void ApplyConfig(const DxLImGuiConfig& config) {
        ApplyConfigFlags(config);
        ApplyConfigStyle(config);
        //ApplyFonts(config); //NOTE : ApplyFontsの実装が終わり次第導入予定なので、v 0.1.0ではまだしません。気を付けてください
    }

    void ApplyConfigFlags(const DxLImGuiConfig& config) {

        ImGuiIO& io = ImGui::GetIO();
        const bool customInputIsActive =
            g_RuntimeState.contextCreated &&
            g_RuntimeState.inputBackend ==
                InputBackend::Custom;

        if (customInputIsActive && config.ViewportsEnable)
        {
            DxLib::LogFileAdd(
                "[DxLImGui] ViewportsEnable ignored: Custom input does "
                "not initialize the Win32 platform backend.\n"
            );
        }

        SetConfigFlag(
            io,
            ImGuiConfigFlags_NavEnableKeyboard,
            config.NavEnableKeyboard
        );

        SetConfigFlag(
            io,
            ImGuiConfigFlags_DockingEnable,
            config.DockingEnable
        );

        SetConfigFlag(
            io,
            ImGuiConfigFlags_ViewportsEnable,
            config.ViewportsEnable &&
                !customInputIsActive
        );

        SetConfigFlag(
            io,
            ImGuiConfigFlags_DpiEnableScaleViewports,
            config.DpiEnableScaleViewports
        );

        SetConfigFlag(
            io,
            ImGuiConfigFlags_DpiEnableScaleFonts,
            config.DpiEnableScaleFonts
        );

    }

    void ApplyConfigStyle(const DxLImGuiConfig& config) {
        switch (config.stylePreset)
        {
        case StylePreset::Dark:
            ImGui::StyleColorsDark();
            break;

        case StylePreset::Light:
            ImGui::StyleColorsLight();
            break;

        case StylePreset::Classic:
            ImGui::StyleColorsClassic();
            break;

        default:
            DXLIMGUI_ASSERT(false);
            ImGui::StyleColorsDark();
            break;
        }

        //ユーザーが任意のカスタマイズの色や形などを指定された場合は
        // 上書きをして反映する
        if (config.styleCallback != nullptr)
        {
            auto& style = ImGui::GetStyle();
            config.styleCallback(style);
        }
    }

    //TODO : Config引数からはがす予定->Font構造体の作成予定
    void ApplyFonts(const DxLImGuiConfig& config) {
        DXLIMGUI_UNUSED(config);
    }

    // DxLibが用意したDirectX 11デバイスをDear ImGuiへ接続します。
    // 標準モードだけ公式Win32バックエンドも初期化します。
    // DxLib初期化後に呼ぶ必要があります。
    bool Initialize(const DxLImGuiConfig& config) {

        // 二重初期化は同じバックエンド資源やImGuiContextを複数回
        // 所有する原因になるため、Debugでは呼び出し順の誤りを検出します。
        DXLIMGUI_ASSERT(!g_RuntimeState.contextCreated);

        // Releaseでも二重作成を行わず、既存状態を維持します。
        if (g_RuntimeState.contextCreated) { return false; }

        // 既にCurrent Contextがある場合、その所有者やバックエンド構成を
        // DxLImGui側から判断できません。取り込まずに失敗させることで、
        // 他者のImGuiContextを初期化・破棄する事故を防ぎます。
        if (ImGui::GetCurrentContext() != nullptr)
        {
            return false;
        }

        if (!ValidateInputConfig(config))
        {
            return false;
        }

        //DxLibのAPIの説明に沿ってreinterpret_castを使用する方針

        //デバイス獲得(強制解釈 / constキャスト削除)。DxLib側のAPIで説明に沿っています。
        auto* device = reinterpret_cast<ID3D11Device*>
                    (const_cast<void*>(DxLib::GetUseDirect3D11Device()));

        //コンテキスト獲得(強制解釈 / constキャスト削除)。DxLib側のAPIで説明に沿っています。
        auto* context = reinterpret_cast<ID3D11DeviceContext*>
                    (const_cast<void*>(DxLib::GetUseDirect3D11DeviceContext()));


        //windowhandleの取得
        const HWND windowhandle = DxLib::GetMainWindowHandle();

        //エラーハンドルチェック
        if (windowhandle == nullptr) {
            return false;
        }


        if (device == nullptr || context == nullptr) {
            return false;
        }

        IMGUI_CHECKVERSION();

        ImGuiContext* createdContext =
            ImGui::CreateContext();

        if (createdContext == nullptr)
        {
            return false;
        }

        // ImGuiContextは内部を読まず、不透明なハンドルとして記録します。
        // 以降は公開APIのSetCurrentContext/DestroyContextへ渡す場合と、
        // Contextの同一性をポインタ比較する場合にだけ使用します。
        g_RuntimeState.context = createdContext;
        g_RuntimeState.contextCreated = true;
        g_RuntimeState.inputBackend = config.inputBackend;
        g_RuntimeState.customInputCallback =
            config.customInputCallback;

        // Configが取れるかTRY CATCH方式を利用する
        // NOTE :今後ApplyConfigをbool APIにして
        // 即時エラー確認ができるようにします

        try
        {
            ApplyConfig(config);
        }
        catch (...)
        {
            ImGui::DestroyContext(createdContext);
            g_RuntimeState = {};
            throw;
        }

        // 標準モードではDear ImGui公式Win32バックエンドを無改造で
        // 初期化します。Customモードは入力だけを部分的に差し替えず、
        // プラットフォームバックエンド全体を利用者側へ委ねます。
        if (config.inputBackend == InputBackend::Win32)
        {
            if (!ImGui_ImplWin32_Init(windowhandle))
            {
                if (
                    ImGui::GetIO().BackendPlatformUserData !=
                    nullptr
                )
                {
                    ImGui_ImplWin32_Shutdown();
                }

                ImGui::DestroyContext(createdContext);
                g_RuntimeState = {};
                return false;
            }

            g_RuntimeState.win32Initialized = true;
        }

        if (!ImGui_ImplDX11_Init(device, context)) {
            if (
                ImGui::GetIO().BackendRendererUserData !=
                nullptr
            )
            {
                ImGui_ImplDX11_Shutdown();
            }

            if (g_RuntimeState.win32Initialized)
            {
                ImGui_ImplWin32_Shutdown();
            }
            ImGui::DestroyContext(createdContext);
            g_RuntimeState = {};
            return false;
        }

        g_RuntimeState.dx11Initialized = true;

        return true;
    }

    void BeginFrame() {

        //TODO : 各セクションのアサートに準ずるものにフラグが失敗時のときは説明を記載する
        //NOTE : 各セクションの説明を追加する。基本はInitialzieで完結する

        DXLIMGUI_ASSERT(g_RuntimeState.contextCreated);
        DXLIMGUI_ASSERT(g_RuntimeState.dx11Initialized);
        DXLIMGUI_ASSERT(
            g_RuntimeState.inputBackend !=
                InputBackend::Win32 ||
            g_RuntimeState.win32Initialized
        );

        // Building中の再呼び出しは、前のフレームを閉じずにNewFrameを
        // 重ねる誤りです。Dear ImGuiと有効なバックエンドの状態を守るため、
        // Debugではここで呼び出し順を検出します。
        DXLIMGUI_ASSERT(
            g_RuntimeState.framePhase !=
            FramePhase::Building
        );


        //いずれかが初期化 / 呼び出されていない場合はなにもしない
        if (!g_RuntimeState.contextCreated ||
            !g_RuntimeState.dx11Initialized ||
            (
                g_RuntimeState.inputBackend ==
                    InputBackend::Win32 &&
                !g_RuntimeState.win32Initialized
            ) ||
            g_RuntimeState.framePhase == FramePhase::Building)
        {
            return;
        }

        if (!MakeRuntimeContextCurrent())
        {
            return;
        }

        // 新しいフレームでは、プラットフォームウィンドウを再び一度ずつ
        // 更新・描画できます。前フレームの二重実行防止状態をここで戻します。
        g_RuntimeState.platformWindowsUpdated = false;
        g_RuntimeState.platformWindowsRendered = false;

        // DX11バックエンドは両モードで描画資源を更新します。
        ImGui_ImplDX11_NewFrame();

        switch (g_RuntimeState.inputBackend)
        {
        case InputBackend::Win32:
            // 標準経路は公式Win32バックエンドをそのまま呼び出します。
            // 入力、フォーカス、カーソル、DPI、Multi-Viewportを
            // 公式実装へ一括して委ね、部分的な差し替えは行いません。
            ImGui_ImplWin32_NewFrame();
            break;

        case InputBackend::Custom:
            // CustomではWin32バックエンドを初期化していないため、
            // 必須コールバックがプラットフォーム更新と入力を担当します。
            g_RuntimeState.customInputCallback(
                ImGui::GetIO()
            );
            break;

        default:
            DXLIMGUI_ASSERT(false);
            break;
        }

        ImGui::NewFrame();

        const ImGuiIO& io = ImGui::GetIO();

        if (io.ConfigFlags & ImGuiConfigFlags_DockingEnable)
        {
            constexpr ImGuiDockNodeFlags dockFlags =
                ImGuiDockNodeFlags_PassthruCentralNode;

            ImGui::DockSpaceOverViewport(
                ImGui::GetID("DxLImGui"), //ID名
                ImGui::GetMainViewport(), //MainWindowのViewportを取ってくる
                dockFlags
            );
        }

        // NewFrameとDxLImGui側の自動DockSpace設定が完了した時点から、
        // 利用側が描画コマンドを登録できるBuildingとして扱います。
        // この後に解除されたSRVは、描画完了まで遅延解放します。
        g_RuntimeState.framePhase = FramePhase::Building;
    }

    void EndFrame() {
        DXLIMGUI_ASSERT(
            g_RuntimeState.framePhase ==
            FramePhase::Building
        );

        if (
            g_RuntimeState.framePhase !=
            FramePhase::Building
        )
        {
            return;
        }

        if (!MakeRuntimeContextCurrent())
        {
            g_RuntimeState.framePhase = FramePhase::Idle;
            // フレームを継続できない場合も、既に解除予約されたSRVと
            // 所有GraphHandleを残さないようにします。
            FlushPendingImageRemovals();
            return;
        }


        // DxLibの保留頂点をDear ImGuiのDirectX 11描画より先に確定しておき、
        // 両者DxLib , Dear ImGui描画状態が混ざることを防ぐ目的で使用しています
        // NOTE : RenderVertexの使用用途はDxLibのフォーム回答に沿って使用しています。
        // https://dxlib.xsrv.jp/cgi/patiobbs/patio.cgi?mode=view&no=5675

        const int renderVertexResult =
            DxLib::RenderVertex();

        DXLIMGUI_ASSERT(renderVertexResult != -1);

        //アサートが出されたあとに即時終了
        if (renderVertexResult == -1)
        {
            ImGui::EndFrame();
            g_RuntimeState.framePhase = FramePhase::Idle;
            FlushPendingImageRemovals();
            return;
        }


        ImGui::Render();
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

        // EndFrameはプラットフォームウィンドウも自動処理します。
        // Advanced APIが同じフレームで呼ばれてもUpdateのアサートや
        // 描画・Presentの二重実行を起こさないよう、共通の印を確認します。
        if (ImGui::GetIO().ConfigFlags & ImGuiConfigFlags_ViewportsEnable)
        {
            if (!g_RuntimeState.platformWindowsUpdated)
            {
                ImGui::UpdatePlatformWindows();
                g_RuntimeState.platformWindowsUpdated = true;
            }

            if (!g_RuntimeState.platformWindowsRendered)
            {
                ImGui::RenderPlatformWindowsDefault();
                g_RuntimeState.platformWindowsRendered = true;
            }
        }

        // ImGuiのDX11バックエンドが変更したDirectX 11状態をDxLib側へ
        // 戻し、次のDxLib描画を継続可能にする処理です。
        // DxLib側のAPIの説明に沿って使用用途を限定しています
        // レンダーターゲットの再設定を行うDxLib APIです

        //NOTE : 詳しくは以下のDxLibのスレッドを参照してください
        //https://dxlib.xsrv.jp/cgi/patiobbs/patio.cgi?mode=view&no=5219

        const int refreshResult =
            DxLib::RefreshDxLibDirect3DSetting();

        DXLIMGUI_ASSERT(refreshResult != -1);

        // メイン描画、プラットフォームウィンドウ、DxLib状態復元が
        // 終わるまでBuildingを維持します。ここからSRVを解放しても、
        // このフレームの描画コマンドから参照されることはありません。
        g_RuntimeState.framePhase = FramePhase::Rendered;
        FlushPendingImageRemovals();
    }

    // DX11バックエンドの終了とSRV解放には、DxLibが管理するDirectX 11
    // デバイスとGraphHandleが必要です。DxLib_Endより前に呼び出してください。
    void Shutdown() {

        // Shutdown対象を途中で見失わないよう、DxLImGuiが作成した
        // ImGuiContextを不透明なハンドルのまま退避します。
        ImGuiContext* const ownedContext =
            g_RuntimeState.context;

        // Shutdown後も呼び出し元が使っていたContextを継続できるよう、
        // Current Contextを切り替える前に元の値を保存します。
        ImGuiContext* const previousContext =
            ImGui::GetCurrentContext();

        if (ownedContext != nullptr)
        {
            // バックエンドのShutdownとDestroyContextはCurrent Contextを
            // 参照するため、必ずDxLImGui所有のContextを処理対象にします。
            ImGui::SetCurrentContext(ownedContext);
        }

        if (
            g_RuntimeState.framePhase == FramePhase::Building &&
            ownedContext != nullptr
        )
        {
            // NewFrameだけが呼ばれた状態でContextを破棄しないよう、
            // 描画は行わずEndFrameでDear ImGuiのフレームを閉じます。
            // これによりフレーム終了時の内部整合性処理も実行されます。
            ImGui::EndFrame();
            g_RuntimeState.framePhase = FramePhase::Idle;
        }

        // Building状態を閉じた後なので、SRVを即時解放してよい。
        if (imageCacheAlive)
        {
            ClearImageCacheImmediately();
        }



        //Dx11デバイス / Win32が有効である場合にシャットダウンの処理をします

        // NOTE : シャットダウンの順序はサンプル / ImGuiの仕様に沿っています
        // 詳しいコードはDear ImGuiの下記のサンプルを参照してください
        // https://github.com/ocornut/imgui/blob/master/examples/example_win32_directx11/main.cpp

        if (g_RuntimeState.dx11Initialized) {
            ImGui_ImplDX11_Shutdown();
            g_RuntimeState.dx11Initialized = false;
        }

        if(g_RuntimeState.win32Initialized) {
            ImGui_ImplWin32_Shutdown();
            g_RuntimeState.win32Initialized = false;
        }

        // Initializeで作成に成功したContextだけを破棄します。
        // 外部から渡された、または以前CurrentだったContextは所有しません。
        if (
            g_RuntimeState.contextCreated &&
            ownedContext != nullptr
        ) {
            ImGui::DestroyContext(ownedContext);
        }

        //もう使用しないので空指定
        g_RuntimeState = {};

        if (
            previousContext != nullptr &&
            previousContext != ownedContext
        )
        {
            // DxLImGuiのContext破棄後も、他ライブラリやアプリケーションが
            // 所有するImGuiContextを引き続きCurrentとして使用できます。
            ImGui::SetCurrentContext(previousContext);
        }
    }

    //Shutdown APIと同じです。
    //NOTE : 命名規則によりAPI名の変更の可能性 / または削除の可能性があります
    void ShutDown()
    {
        Shutdown();
    }

    // 互換API。高度制御の実体はAdvanced名前空間に置きます。
    void RestoreDxLibRenderingState() {
        Advanced::RestoreDxLibRenderingState();
    }


    void UpdateViewports()
    {
        Advanced::UpdatePlatformWindows();
    }


    void RenderViewports()
    {
        Advanced::RenderPlatformWindows();
    }









































    bool RegisterImage(int graphHandle)
    {
        return Advanced::RegisterImage(graphHandle);
    }


    bool RegisterImage(
        int graphHandle,
        int softImageHandle
    )
    {
        return Advanced::RegisterImage(
            graphHandle,
            softImageHandle
        );
    }


    bool DrawImage(int graphHandle)
    {
        if (!imageCacheAlive)
        {
            return false;
        }

        ImageCache& imageCache =
            GetImageCache();

        const auto imageIterator = imageCache.find(graphHandle);

        if (
            imageIterator == imageCache.end() ||
            imageIterator->second.pendingRemoval
        )
        {
            return false;
        }

        return DxLImGui::DrawImage(
            graphHandle,
            ImVec2(
                static_cast<float>(imageIterator->second.width),
                static_cast<float>(imageIterator->second.height)
            )
        );
    }


    bool DrawImage(
        int graphHandle,
        const ImVec2& size
    )
    {
        if (!imageCacheAlive)
        {
            return false;
        }

        ImageCache& imageCache =
            GetImageCache();

        if (
            !(size.x > 0.0f) ||
            !(size.y > 0.0f) ||
            !std::isfinite(size.x) ||
            !std::isfinite(size.y)
        )
        {
            return false;
        }

        if (
            !g_RuntimeState.contextCreated ||
            g_RuntimeState.context == nullptr
        )
        {
            return false;
        }

        if (
            g_RuntimeState.framePhase !=
            FramePhase::Building
        )
        {
            return false;
        }

        if (
            ImGui::GetCurrentContext() !=
            g_RuntimeState.context
        )
        {
            return false;
        }

        // 公開APIだけでは現在のImGuiウィンドウを確認できません。
        // ImGui::Begin()とImGui::End()の間で呼ぶことは利用側の契約です。
        const auto imageIterator = imageCache.find(graphHandle);

        if (
            imageIterator == imageCache.end() ||
            imageIterator->second.pendingRemoval ||
            imageIterator->second.srv == nullptr
        )
        {
            return false;
        }

        const ImTextureID textureId = static_cast<ImTextureID>(
            reinterpret_cast<std::uintptr_t>(
                imageIterator->second.srv.Get()
            )
        );

        ImGui::Image(
            ImTextureRef(textureId),
            size
        );

        return true;
    }


    void UnregisterImage(int graphHandle)
    {
        Advanced::UnregisterImage(graphHandle);
    }


    void ClearImageCache()
    {
        Advanced::ClearImageCache();
    }

    namespace Advanced
    {
        bool RegisterImage(int graphHandle)
        {
            std::uint64_t registrationId = 0;

            return RegisterImageInternal(
                graphHandle,
                registrationId
            );
        }


        bool RegisterImage(
            int graphHandle,
            int softImageHandle
        )
        {
            std::uint64_t registrationId = 0;

            return RegisterImageInternal(
                graphHandle,
                softImageHandle,
                registrationId
            );
        }


        void UnregisterImage(int graphHandle)
        {
            UnregisterImageInternal(
                graphHandle,
                0,
                false
            );
        }


        void ClearImageCache()
        {
            ClearImageCacheInternal();
        }


        void UpdatePlatformWindows()
        {
            if (!MakeRuntimeContextCurrent())
            {
                return;
            }

            // UpdatePlatformWindowsはDear ImGuiのフレーム終了後にだけ
            // 呼べるAPIです。DxLImGui側の状態でこの前提を保証し、
            // Dear ImGuiの内部フレーム番号には依存しません。
            if (
                g_RuntimeState.framePhase !=
                FramePhase::Rendered
            )
            {
                return;
            }

            if (g_RuntimeState.platformWindowsUpdated)
            {
                // 同一フレームでの再更新はDear ImGuiのDebugアサート対象です。
                // 通常のEndFrameが先に更新した場合も、ここで二重実行を止めます。
                return;
            }

            if (
                ImGui::GetIO().ConfigFlags &
                ImGuiConfigFlags_ViewportsEnable
            )
            {
                ImGui::UpdatePlatformWindows();
                g_RuntimeState.platformWindowsUpdated = true;
            }
        }


        void RenderPlatformWindows()
        {
            if (!MakeRuntimeContextCurrent())
            {
                return;
            }

            // 未完了の描画データをプラットフォームウィンドウへ送らないよう、
            // DxLImGuiのEndFrameが完了した状態だけを受け付けます。
            if (
                g_RuntimeState.framePhase !=
                FramePhase::Rendered
            )
            {
                return;
            }

            if (g_RuntimeState.platformWindowsRendered)
            {
                // RenderPlatformWindowsDefaultは再呼び出しを自動では防ぎません。
                // 二重描画とSwapChainの再Presentを避けるため、1回に制限します。
                return;
            }

            if (
                ImGui::GetIO().ConfigFlags &
                ImGuiConfigFlags_ViewportsEnable
            )
            {
                ImGui::RenderPlatformWindowsDefault();
                g_RuntimeState.platformWindowsRendered = true;
                DxLib::RefreshDxLibDirect3DSetting();
            }
        }


        void RestoreDxLibRenderingState()
        {
            DxLib::RefreshDxLibDirect3DSetting();
        }
    }

    //高レベルAPI
    Image LoadImageFromFile(const char* path)
    {
        //return Image(path);
        //可読性重視のためコンストラクタは使用せずLoadにする

        Image image;

        if (!image.Load(path)) {
        //TODO : MessageBoxで読み込み失敗を明示的にする(path)

            return image;
        }

        return image;

    }

    RenderTarget CreateRenderTarget(int width, int height, bool alpha)
    {
        RenderTarget rt(width, height, alpha);

        if (!rt)
        {
            DXLIMGUI_ASSERT(rt);
            return rt;
        }
        return rt;
    }

    bool DrawImage(const Image& image) {
        return image.Draw();
    }

    bool DrawImage(const Image& image, const ImVec2& availableSize)
    {
        return image.Draw(availableSize);
    }

    bool DrawImageFit(const Image& image, const ImVec2& availableSize) {
        return image.DrawFit(availableSize);
    }
































































        //==========================================================
        // ScopedImageRegistrationクラス
        // 作成者 : Kojima Ryoichi (@LuisR385)
        //
        //
        //==========================================================



        ScopedImageRegistration::ScopedImageRegistration(
            int graphHandle
        )
        {
            Register(graphHandle);
        }


        ScopedImageRegistration::ScopedImageRegistration(
            int graphHandle,
            int softImageHandle
        )
        {
            Register(
                graphHandle,
                softImageHandle
            );
        }


        ScopedImageRegistration::~ScopedImageRegistration()
        {
            Reset();
        }


        ScopedImageRegistration::ScopedImageRegistration(
            ScopedImageRegistration&& other
        ) noexcept
            : graphHandle_(
                std::exchange(
                    other.graphHandle_,
                    -1
                )
            )
            , registrationId_(
                std::exchange(
                    other.registrationId_,
                    0
                )
            )
        {
        }


        ScopedImageRegistration&
            ScopedImageRegistration::operator=(
                ScopedImageRegistration&& other
                ) noexcept
        {
            if (this /* = ScopedImageRegistration*/ == &other)
            {
                return *this;
            }

            Reset();

            graphHandle_ = std::exchange(
                other.graphHandle_,
                -1
            );

            registrationId_ = std::exchange(
                other.registrationId_,
                0
            );

            return *this;
        }


        bool ScopedImageRegistration::Register(
            int graphHandle
        )
        {
            // 再登録に失敗した場合に古い登録を所有し続けないという
            // 既存Registerの規約へ合わせ、先に現在の登録を解除します。
            Reset();

            std::uint64_t registrationId = 0;

            if (!RegisterImageInternal(
                graphHandle,
                registrationId
            ))
            {
                return false;
            }

            graphHandle_ = graphHandle;
            registrationId_ = registrationId;
            return true;
        }


        bool ScopedImageRegistration::Register(
            int graphHandle, //画像ハンドル
            int softImageHandle //ソフト画像ハンドル
        )
        {
            // 現在所有している登録を先に解除
            Reset();

            std::uint64_t registrationId = 0;

            if (!RegisterImageInternal(
                graphHandle,
                softImageHandle,
                registrationId
            ))
            {
                return false;
            }

            graphHandle_ = graphHandle;
            registrationId_ = registrationId;
            return true;
        }


        void ScopedImageRegistration::Reset() noexcept {
            if (graphHandle_ < 0){
                return;
            }

            // 通常のScoped登録は所有権表に存在しません。Imageまたは
            // RenderTargetが復元失敗のまま破棄された場合だけ、ここで
            // 残った所有権印を外します。描画先かもしれないGraphHandleは
            // 削除せず、SRV登録だけを安全に解除します。
            ReleaseGraphOwnershipInternal(
                graphHandle_,
                registrationId_
            );

            UnregisterImageInternal(
                graphHandle_,
                registrationId_,
                true
            );

            graphHandle_ = -1;
            registrationId_ = 0;
        }

        bool ScopedImageRegistration::AdoptGraphOwnership() noexcept
        {
            return AdoptGraphOwnershipInternal(
                graphHandle_,
                registrationId_
            );
        }


        void ScopedImageRegistration::ResetOwnedGraph() noexcept
        {
            const int ownedGraphHandle =
                std::exchange(graphHandle_, -1);
            const std::uint64_t ownedRegistrationId =
                std::exchange(registrationId_, 0);

            UnregisterOwnedGraphInternal(
                ownedGraphHandle,
                ownedRegistrationId
            );
        }


        bool ScopedImageRegistration::IsRegistered() const noexcept {
            return IsImageRegistrationActive(
                graphHandle_,
                registrationId_
            );
        }

        int ScopedImageRegistration::GetGraphHandle() const noexcept {
            return graphHandle_;
        }

        ScopedImageRegistration::operator bool() const noexcept {
            return IsRegistered();
        }



        Image::Image(const char* filePath)
        {
            this->Load(filePath);
        }

        Image::Image(Image&& other) noexcept
            : graphHandle_(other.graphHandle_) //画像ハンドル
            , width_(other.width_) //幅(X)
            , height_(other.height_) //高さ(Y)
            , registration_(std::move(other.registration_))
        {
            other.graphHandle_ = -1;
            other.width_ = 0;
            other.height_ = 0;
        }

        Image::~Image()
        {
            Reset();
        }

        bool Image::Load(const char* filePath)
        {
            if (
                filePath == nullptr ||
                filePath[0] == '\0' ||
                DxLib::DxLib_IsInit() == FALSE
            )
            {
                return false;
            }

            const int newGraphHandle =
                DxLib::LoadGraph(filePath);

            if (newGraphHandle < 0)
            {
                return false;
            }

            int newWidth = 0;
            int newHeight = 0;

            const bool sizeAvailable =
                DxLib::GetGraphSize(
                    newGraphHandle,
                    &newWidth,
                    &newHeight
                ) != -1 &&
                newWidth > 0 &&
                newHeight > 0;

            if (!sizeAvailable)
            {
                DxLib::DeleteGraph(newGraphHandle);
                return false;
            }

            ScopedImageRegistration newRegistration;

            // 通常画像もまずDxLib所有Texture2Dを直接SRV化します。
            // これにより、従来の全画素CPU読み出しとTexture2D複製を
            // 成功する環境では完全に省略できます。
            bool registered =
                newRegistration.Register(newGraphHandle);

            if (!registered)
            {
                // 派生グラフ、非対応フォーマット、SRV BindFlagなし等の
                // 環境では既存SoftImage経路を互換フォールバックとして
                // 使用し、登録処理の後で一時SoftImageを必ず破棄します。
                const int newSoftImageHandle =
                    DxLib::LoadSoftImage(filePath);

                if (newSoftImageHandle >= 0)
                {
                    registered = newRegistration.Register(
                        newGraphHandle,
                        newSoftImageHandle
                    );

                    DxLib::DeleteSoftImage(
                        newSoftImageHandle
                    );
                }
            }

            if (!registered)
            {
                DxLib::DeleteGraph(newGraphHandle);
                return false;
            }

            if (!newRegistration.AdoptGraphOwnership())
            {
                newRegistration.Reset();
                DxLib::DeleteGraph(newGraphHandle);
                return false;
            }

            // ここまで成功するまでは現在の画像を破棄しない
            Reset();

            graphHandle_ = newGraphHandle;
            width_ = newWidth;
            height_ = newHeight;
            registration_ = std::move(newRegistration);

            return true;
        }

        void Image::Reset() noexcept
        {
            if (graphHandle_ >= 0)
            {
                // 通常時はSRV -> GraphHandleの順に即時解放します。
                // フレーム中は両方をEndFrameへ遅延し、同じ順序で
                // 解放して送信済みImGui::Imageも保護します。
                registration_.ResetOwnedGraph();
                graphHandle_ = -1;
            }
            else
            {
                registration_.Reset();
            }

            width_ = 0;
            height_ = 0;
        }

        bool Image::Draw() const
        {
            if (!IsValid())
            {
                return false;
            }

            return  DxLImGui::DrawImage(
                graphHandle_
            );
        }

        bool Image::Draw(const ImVec2& size) const
        {
            if (!IsValid()) {
                return false;
            }

            return DxLImGui::DrawImage(
                graphHandle_,
                size
            );
        }

        bool Image::DrawFit(const ImVec2& availableSize) const
        {
            if (
                !IsValid() ||
                availableSize.x <= 0.0f ||
                availableSize.y <= 0.0f
                )
            {
                return false;
            }

            const float imageWidth =
                static_cast<float>(width_);

            const float imageHeight =
                static_cast<float>(height_);

            const float scaleX =
                availableSize.x / imageWidth;

            const float scaleY =
                availableSize.y / imageHeight;

            const float scale = (std::min)(scaleX, scaleY);

            const ImVec2 drawSize(
                imageWidth * scale,
                imageHeight * scale
            );

            return Draw(drawSize);
        }

        //有効化どうかを返します(画像ハンドルとレジスタが登録されているかを確認しています)
        bool Image::IsValid() const noexcept
        {
            return
                graphHandle_ >= 0 &&
                registration_.IsRegistered();
        }


        int Image::GetGraphHandle() const noexcept
        {
            return graphHandle_;
        }


        int Image::GetWidth() const noexcept
        {
            return width_;
        }

        int Image::GetHeight() const noexcept
        {
            return height_;
        }

        ImVec2 Image::GetSize() const noexcept
        {
            return ImVec2(
                static_cast<float>(width_),
                static_cast<float>(height_)
            );
        }

        //code : !image.load(/*画像の所在地*/) を実現するため
        Image::operator bool() const noexcept
        {
            return IsValid();
        }

        // ============================================================
        // RenderTarget support
        // Added: 2026/07/25
        // Author : Kojima Ryoichi (@LuisR385)
        //
        // GraphHandleはRenderTargetが所有し、画像キャッシュはその
        // Texture2Dを参照するSRVだけを所有します。毎フレーム行うのは
        // DxLib描画とImGuiへのSRV送信だけで、SRV再生成やCPU転送は
        // 行いません。
        // ============================================================
        RenderTarget::RenderTarget(
            int width,
            int height,
            bool useAlpha
        )
        {
            Create(width, height, useAlpha);
        }


        RenderTarget::~RenderTarget()
        {
            Reset();
        }


        RenderTarget::RenderTarget(
            RenderTarget&& other
        ) noexcept
        {
            // 描画中のGraphHandleをそのままmoveすると、どのオブジェクトが
            // 元の描画先へ戻すか不明になります。先に描画を閉じ、復元に
            // 失敗した場合は所有権を移さずmove元を維持します。
            if (
                other.drawing_ &&
                !other.EndDrawInternal()
            )
            {
                DXLIMGUI_ASSERT(false);
                return;
            }

            graphHandle_ =
                std::exchange(other.graphHandle_, -1);
            width_ =
                std::exchange(other.width_, 0);
            height_ =
                std::exchange(other.height_, 0);
            restoreScreen_ = std::exchange(
                other.restoreScreen_,
                DX_SCREEN_BACK
            );
            drawing_ =
                std::exchange(other.drawing_, false);
            registration_ =
                std::move(other.registration_);
        }


        RenderTarget& RenderTarget::operator=(
            RenderTarget&& other
        ) noexcept
        {
            if (this == &other)
            {
                return *this;
            }

            if (
                other.drawing_ &&
                !other.EndDrawInternal()
            )
            {
                // move元が現在の描画先である可能性を残したまま、
                // GraphHandleと復元責任だけを移すことはできません。
                DXLIMGUI_ASSERT(false);
                return *this;
            }

            // move先が所有していた描画先を先に復元・解放してから、
            // move元の所有権を引き継ぎます。
            Reset();

            if (graphHandle_ >= 0)
            {
                // 復元に失敗したmove先は削除せず、両者を維持します。
                DXLIMGUI_ASSERT(false);
                return *this;
            }

            graphHandle_ =
                std::exchange(other.graphHandle_, -1);
            width_ =
                std::exchange(other.width_, 0);
            height_ =
                std::exchange(other.height_, 0);
            restoreScreen_ = std::exchange(
                other.restoreScreen_,
                DX_SCREEN_BACK
            );
            drawing_ =
                std::exchange(other.drawing_, false);
            registration_ =
                std::move(other.registration_);

            return *this;
        }


        bool RenderTarget::Create(
            int width,
            int height,
            bool useAlpha
        )
        {
            if (
                width <= 0 ||
                height <= 0 ||
                DxLib::DxLib_IsInit() == FALSE
            )
            {
                return false;
            }

            const int newGraphHandle =
                DxLib::MakeScreen(
                    width,
                    height,
                    useAlpha ? TRUE : FALSE
                );

            if (newGraphHandle < 0)
            {
                return false;
            }

            ScopedImageRegistration newRegistration;

            if (!newRegistration.Register(newGraphHandle))
            {
                // SRV登録に失敗したGraphHandleはまだ本オブジェクトへ
                // 移していないため、ここで確実にDxLibへ返します。
                DxLib::DeleteGraph(newGraphHandle);
                return false;
            }

            if (!newRegistration.AdoptGraphOwnership())
            {
                newRegistration.Reset();
                DxLib::DeleteGraph(newGraphHandle);
                return false;
            }

            // 新しいGraphHandleとSRVの両方が揃うまで、現在表示中の
            // RenderTargetを維持します。
            Reset();

            if (graphHandle_ >= 0)
            {
                // 現在の描画先を復元できなかった場合は旧リソースを
                // 保持し、新しく作った側だけを安全に破棄します。
                newRegistration.ResetOwnedGraph();
                return false;
            }

            graphHandle_ = newGraphHandle;
            width_ = width;
            height_ = height;
            registration_ = std::move(newRegistration);
            return true;
        }


        void RenderTarget::Reset() noexcept
        {
            if (
                drawing_ &&
                !EndDrawInternal()
            )
            {
                // 実際の描画先である可能性が残るGraphHandleは
                // DeleteGraphせず、再度EndDrawできる状態を維持します。
                return;
            }

            if (graphHandle_ >= 0)
            {
                // SRVはDxLibのTexture2Dを参照しているため、常に
                // SRVを先に解放してからGraphHandleを破棄します。
                // フレーム中は両方をEndFrameへ遅延します。
                registration_.ResetOwnedGraph();
                graphHandle_ = -1;
            }
            else
            {
                registration_.Reset();
            }

            width_ = 0;
            height_ = 0;
            restoreScreen_ = DX_SCREEN_BACK;
            drawing_ = false;
        }


        // 現在の描画先を自動保存するため、引数なしでもネストできます。
        bool RenderTarget::BeginDraw() noexcept
        {
            if (DxLib::DxLib_IsInit() == FALSE)
            {
                return false;
            }

            return BeginDraw(
                DxLib::GetDrawScreen()
            );
        }

        // 呼び出し側が復元先を管理する必要がある場合の高度制御経路です。
        bool RenderTarget::BeginDraw(
            int restoreScreen
        ) noexcept
        {
            if (
                !IsValid() ||
                drawing_ ||
                restoreScreen == graphHandle_ ||
                DxLib::DxLib_IsInit() == FALSE
            )
            {
                return false;
            }

            // 描画先変更前にDxLibの保留頂点を現在の描画先へ確定し、
            // 前後のRenderTargetへ頂点が混ざらないようにします。
            if (DxLib::RenderVertex() == -1)
            {
                return false;
            }

            if (DxLib::SetDrawScreen(graphHandle_) == -1)
            {
                return false;
            }

            // 切り替えに成功してから復元先と描画中状態を保存します。
            // drawing_はResetやmoveがGraphHandleを削除してよいか判断し、
            // restoreScreen_はEndDrawで元の描画先へ戻すために使用します。
            restoreScreen_ = restoreScreen;
            drawing_ = true;
            return true;
        }


        bool RenderTarget::EndDrawInternal() noexcept
        {
            if (!drawing_)
            {
                return true;
            }

            if (DxLib::DxLib_IsInit() == FALSE)
            {
                drawing_ = false;
                restoreScreen_ = DX_SCREEN_BACK;
                return true;
            }

            // MakeScreen向けの描画を切替前に確定することで、
            // 同じSRVを直後のImGui::Imageから安全に参照できます。
            const int renderResult =
                DxLib::RenderVertex();

            DXLIMGUI_ASSERT(renderResult != -1);

            int restoreResult =
                DxLib::SetDrawScreen(restoreScreen_);

            if (
                restoreResult == -1 &&
                restoreScreen_ != DX_SCREEN_BACK
            )
            {
                restoreResult =
                    DxLib::SetDrawScreen(DX_SCREEN_BACK);
            }

            if (restoreResult == -1)
            {
                // 描画先が切り替わったことを確認できないため、
                // drawing_を維持してGraphHandle削除を防ぎます。
                return false;
            }

            drawing_ = false;
            restoreScreen_ = DX_SCREEN_BACK;
            return true;
        }


        bool RenderTarget::EndDraw() noexcept
        {
            const bool restored =
                EndDrawInternal();

            // 復元失敗は内部状態へ保持し、Debugでは見落とさないようにします。
            DXLIMGUI_ASSERT(restored);
            DXLIMGUI_UNUSED(restored);

            if (!restored)
            {
                return false;
            }

            return true;
        }


        bool RenderTarget::Draw() const
        {
            if (!IsValid())
            {
                return false;
            }

            return DxLImGui::DrawImage(graphHandle_);
        }


        bool RenderTarget::Draw(
            const ImVec2& size
        ) const
        {
            if (!IsValid())
            {
                return false;
            }

            return DxLImGui::DrawImage(
                graphHandle_,
                size
            );
        }


        bool RenderTarget::DrawFit(
            const ImVec2& availableSize
        ) const
        {
            if (
                !IsValid() ||
                availableSize.x <= 0.0f ||
                availableSize.y <= 0.0f
            )
            {
                return false;
            }

            const float targetWidth =
                static_cast<float>(width_);
            const float targetHeight =
                static_cast<float>(height_);

            const float scale = (std::min)(
                availableSize.x / targetWidth,
                availableSize.y / targetHeight
            );

            return Draw(
                ImVec2(
                    targetWidth * scale,
                    targetHeight * scale
                )
            );
        }


        bool RenderTarget::IsValid() const noexcept
        {
            return
                graphHandle_ >= 0 &&
                width_ > 0 &&
                height_ > 0 &&
                registration_.IsRegistered();
        }


        int RenderTarget::GetGraphHandle() const noexcept
        {
            return graphHandle_;
        }


        int RenderTarget::GetWidth() const noexcept
        {
            return width_;
        }


        int RenderTarget::GetHeight() const noexcept
        {
            return height_;
        }


        ImVec2 RenderTarget::GetSize() const noexcept
        {
            return ImVec2(
                static_cast<float>(width_),
                static_cast<float>(height_)
            );
        }


        RenderTarget::operator bool() const noexcept
        {
            return IsValid();
        }


}

#endif // DXLIMGUI_IMPLEMENTATION_INCLUDED
#endif // DXLIMGUI_IMPLEMENTATION
