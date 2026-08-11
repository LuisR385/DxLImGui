//=======================================================================================================================
//
// 										    DxLibとDear ImGuiをDirectX 11環境で接続し、
//                                      初期化、フレーム処理、画像表示などを簡単に扱うためのライブラリです
//
//								NOTE: DxLImGuiConfigを使用するため、DxLImGuiを使用する際は
//											必ずプロジェクト内に以下を含んでください
//
//										* include/DxLImGui/DxLImGuiConfig.h
//										* include/DxLImGui/DxLImGui.h
//										* src/DxLImGui.cpp
//
//
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

# include "DxLImGuiConfig.h"
#include <type_traits>

#define NOMINMAX	  // NOTE: 基本DxLImGuiではMIN,MAXマクロは使用しませんし、名前衝突を解決したいためです。必要なら消してください
# include <Windows.h> // HWND, UINT, WPARAM, LPARAM

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable: 4010)
#endif
# include "DxLib.h"
#if defined(_MSC_VER)
#pragma warning(pop)
#endif

# include <imgui.h> //Dear ImGui
namespace DxLImGui
{
	//StylePreset列挙型
	//ImGuiのウィジェットなどの色一式です
	//カスタマイズされる場合はカスタマイズ
	enum class StylePreset : std::size_t { //TODO : メモリを最大限に節約したいのでsize_t->uint_8tに移行する
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
