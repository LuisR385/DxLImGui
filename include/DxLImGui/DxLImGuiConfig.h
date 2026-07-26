//=======================================================================================================================
//
//  DxLImGui
//
//  DxLibとDear ImGuiをDirectX 11環境で接続し、
//  初期化、フレーム処理、画像表示などを簡単に扱うためのライブラリです。
//
//  必要なファイル:
//
//      include/DxLImGui/DxLImGuiConfig.h
//      include/DxLImGui/DxLImGui.h
//      src/DxLImGui.cpp
//
//  対応環境:
//
//      Windows
//      DirectX 11
//      C++17
//      Dear ImGui 1.92.x
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
//      v1.0.0までは、公開API、名前空間、挙動、ファイル構成が
//      変更される可能性があります。
//
//  Design references:
//
//      Dear ImGui
//          Omar Cornut氏およびコントリビューター
//
//      raylib / rlImGui
//          (raylib) Ramon Santamaria氏 / (rlImGui) Jeffery Myers氏
//          raylibおよびrlImGuiの設計思想を参考にしています。
//
//  Copyright (c) 2026 Kojima Ryoichi(@LuisR385)
//
//=======================================================================================================================


#pragma once

#include <imgui.h>

#ifndef IMGUI_VERSION_NUM
#error "Dear ImGui is required."
#endif

// DxLImGuiは同梱版と同じDear ImGui 1.92.xを対象にします。
#if IMGUI_VERSION_NUM < 19200
#error "DxLImGui requires Dear ImGui 1.92.x."
#endif

#if IMGUI_VERSION_NUM >= 19300
#error "DxLImGui requires Dear ImGui 1.92.x."
#endif

// ============================================================
// DXLIMGUI configuration
// ============================================================

// ------------------------------------------------------------
// Version
// ------------------------------------------------------------

#define DXLIMGUI_VERSION_MAJOR 0
#define DXLIMGUI_VERSION_MINOR 1
#define DXLIMGUI_VERSION_PATCH 0

#define DXLIMGUI_VERSION_NUM \
    (DXLIMGUI_VERSION_MAJOR * 10000 + \
     DXLIMGUI_VERSION_MINOR * 100 + \
     DXLIMGUI_VERSION_PATCH)

#define DXLIMGUI_VERSION_STRING "0.1.0"

// ------------------------------------------------------------
// Platform detection
// ------------------------------------------------------------

#if defined(_WIN32) || defined(_WIN64)
#define DXLIMGUI_PLATFORM_WINDOWS 1
#else
#define DXLIMGUI_PLATFORM_WINDOWS 0
#endif

// ------------------------------------------------------------
// Build type
//
// DXLIMGUI_SHARED        : DLLとして使用
// DXLIMGUI_BUILD_SHARED  : DLL本体をビルドしている側
//
// 何も定義しなければ、静的ライブラリまたは直接組み込み。
// ------------------------------------------------------------

#ifndef DXLIMGUI_API

#if DXLIMGUI_PLATFORM_WINDOWS && defined(DXLIMGUI_SHARED)

#if defined(DXLIMGUI_BUILD_SHARED)
#define DXLIMGUI_API __declspec(dllexport)
#else
#define DXLIMGUI_API __declspec(dllimport)
#endif

#else
#define DXLIMGUI_API
#endif

#endif

// ------------------------------------------------------------
// Compiler utilities
// ------------------------------------------------------------

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

// ------------------------------------------------------------
// Attributes
// ------------------------------------------------------------

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

// ------------------------------------------------------------
// Assertions
// ------------------------------------------------------------

#ifndef DXLIMGUI_ASSERT
#include <cassert>
#define DXLIMGUI_ASSERT(expression) assert(expression)
#endif

// ------------------------------------------------------------
// Feature switches
// ------------------------------------------------------------

// 必要に応じて利用側が0に上書き可能。

//NOTE : 未使用。今後組み込む予定

// 利用側が用途に応じて
// マクロを定義することにより
// ツール開発時の齟齬(そご)を無くすための独自マクロ


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


