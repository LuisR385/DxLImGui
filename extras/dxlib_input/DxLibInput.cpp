#include "DxLibInput.h"

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable: 4010)
#endif
#include "DxLib.h"
#if defined(_MSC_VER)
#pragma warning(pop)
#endif

#include <algorithm>
#include <array>
#include <cstddef>

namespace
{
    struct KeyMapping
    {
        int dxLibKey;
        ImGuiKey imguiKey;
    };

    constexpr std::array keyMappings =
    {
        //アルファベット(QWERTY方式含)キー
        KeyMapping{ KEY_INPUT_A, ImGuiKey_A },
        KeyMapping{ KEY_INPUT_B, ImGuiKey_B },
        KeyMapping{ KEY_INPUT_C, ImGuiKey_C },
        KeyMapping{ KEY_INPUT_D, ImGuiKey_D },
        KeyMapping{ KEY_INPUT_E, ImGuiKey_E },
        KeyMapping{ KEY_INPUT_F, ImGuiKey_F },
        KeyMapping{ KEY_INPUT_G, ImGuiKey_G },
        KeyMapping{ KEY_INPUT_H, ImGuiKey_H },
        KeyMapping{ KEY_INPUT_I, ImGuiKey_I },
        KeyMapping{ KEY_INPUT_J, ImGuiKey_J },
        KeyMapping{ KEY_INPUT_K, ImGuiKey_K },
        KeyMapping{ KEY_INPUT_L, ImGuiKey_L },
        KeyMapping{ KEY_INPUT_M, ImGuiKey_M },
        KeyMapping{ KEY_INPUT_N, ImGuiKey_N },
        KeyMapping{ KEY_INPUT_O, ImGuiKey_O },
        KeyMapping{ KEY_INPUT_P, ImGuiKey_P },
        KeyMapping{ KEY_INPUT_Q, ImGuiKey_Q },
        KeyMapping{ KEY_INPUT_R, ImGuiKey_R },
        KeyMapping{ KEY_INPUT_S, ImGuiKey_S },
        KeyMapping{ KEY_INPUT_T, ImGuiKey_T },
        KeyMapping{ KEY_INPUT_U, ImGuiKey_U },
        KeyMapping{ KEY_INPUT_V, ImGuiKey_V },
        KeyMapping{ KEY_INPUT_W, ImGuiKey_W },
        KeyMapping{ KEY_INPUT_X, ImGuiKey_X },
        KeyMapping{ KEY_INPUT_Y, ImGuiKey_Y },
        KeyMapping{ KEY_INPUT_Z, ImGuiKey_Z },

        //数字キー
        KeyMapping{ KEY_INPUT_0, ImGuiKey_0 },
        KeyMapping{ KEY_INPUT_1, ImGuiKey_1 },
        KeyMapping{ KEY_INPUT_2, ImGuiKey_2 },
        KeyMapping{ KEY_INPUT_3, ImGuiKey_3 },
        KeyMapping{ KEY_INPUT_4, ImGuiKey_4 },
        KeyMapping{ KEY_INPUT_5, ImGuiKey_5 },
        KeyMapping{ KEY_INPUT_6, ImGuiKey_6 },
        KeyMapping{ KEY_INPUT_7, ImGuiKey_7 },
        KeyMapping{ KEY_INPUT_8, ImGuiKey_8 },
        KeyMapping{ KEY_INPUT_9, ImGuiKey_9 },

        //ファンクションキー
        KeyMapping{ KEY_INPUT_F1, ImGuiKey_F1 },
        KeyMapping{ KEY_INPUT_F2, ImGuiKey_F2 },
        KeyMapping{ KEY_INPUT_F3, ImGuiKey_F3 },
        KeyMapping{ KEY_INPUT_F4, ImGuiKey_F4 },
        KeyMapping{ KEY_INPUT_F5, ImGuiKey_F5 },
        KeyMapping{ KEY_INPUT_F6, ImGuiKey_F6 },
        KeyMapping{ KEY_INPUT_F7, ImGuiKey_F7 },
        KeyMapping{ KEY_INPUT_F8, ImGuiKey_F8 },
        KeyMapping{ KEY_INPUT_F9, ImGuiKey_F9 },
        KeyMapping{ KEY_INPUT_F10, ImGuiKey_F10 },
        KeyMapping{ KEY_INPUT_F11, ImGuiKey_F11 },
        KeyMapping{ KEY_INPUT_F12, ImGuiKey_F12 },

        
        //TODO : コメント名の区分を悩んでいる
        KeyMapping{ KEY_INPUT_UP, ImGuiKey_UpArrow },
        KeyMapping{ KEY_INPUT_DOWN, ImGuiKey_DownArrow },
        KeyMapping{ KEY_INPUT_LEFT, ImGuiKey_LeftArrow },
        KeyMapping{ KEY_INPUT_RIGHT, ImGuiKey_RightArrow },
        KeyMapping{ KEY_INPUT_HOME, ImGuiKey_Home },
        KeyMapping{ KEY_INPUT_END, ImGuiKey_End },
        KeyMapping{ KEY_INPUT_PGUP, ImGuiKey_PageUp },
        KeyMapping{ KEY_INPUT_PGDN, ImGuiKey_PageDown },

        //TODO : コメント名の区分を悩んでいる
        KeyMapping{ KEY_INPUT_BACK, ImGuiKey_Backspace },
        KeyMapping{ KEY_INPUT_TAB, ImGuiKey_Tab },
        KeyMapping{ KEY_INPUT_RETURN, ImGuiKey_Enter },
        KeyMapping{ KEY_INPUT_ESCAPE, ImGuiKey_Escape },
        KeyMapping{ KEY_INPUT_SPACE, ImGuiKey_Space },
        KeyMapping{ KEY_INPUT_INSERT, ImGuiKey_Insert },
        KeyMapping{ KEY_INPUT_DELETE, ImGuiKey_Delete },
        KeyMapping{ KEY_INPUT_CAPSLOCK, ImGuiKey_CapsLock },
        KeyMapping{ KEY_INPUT_SCROLL, ImGuiKey_ScrollLock },
        KeyMapping{ KEY_INPUT_PAUSE, ImGuiKey_Pause },
        KeyMapping{ KEY_INPUT_SYSRQ, ImGuiKey_PrintScreen },

        //ショートカットキー(windowsキー含む)
        KeyMapping{ KEY_INPUT_LSHIFT, ImGuiKey_LeftShift },
        KeyMapping{ KEY_INPUT_RSHIFT, ImGuiKey_RightShift },
        KeyMapping{ KEY_INPUT_LCONTROL, ImGuiKey_LeftCtrl },
        KeyMapping{ KEY_INPUT_RCONTROL, ImGuiKey_RightCtrl },
        KeyMapping{ KEY_INPUT_LALT, ImGuiKey_LeftAlt },
        KeyMapping{ KEY_INPUT_RALT, ImGuiKey_RightAlt },
        KeyMapping{ KEY_INPUT_LWIN, ImGuiKey_LeftSuper },
        KeyMapping{ KEY_INPUT_RWIN, ImGuiKey_RightSuper },
        KeyMapping{ KEY_INPUT_APPS, ImGuiKey_Menu },

        //記号
        KeyMapping{ KEY_INPUT_MINUS, ImGuiKey_Minus },
        KeyMapping{ KEY_INPUT_COMMA, ImGuiKey_Comma },
        KeyMapping{ KEY_INPUT_PERIOD, ImGuiKey_Period },
        KeyMapping{ KEY_INPUT_SLASH, ImGuiKey_Slash },
        KeyMapping{ KEY_INPUT_SEMICOLON, ImGuiKey_Semicolon },
        KeyMapping{ KEY_INPUT_LBRACKET, ImGuiKey_LeftBracket },
        KeyMapping{ KEY_INPUT_RBRACKET, ImGuiKey_RightBracket },
        KeyMapping{ KEY_INPUT_BACKSLASH, ImGuiKey_Backslash },

        //テンキー
        KeyMapping{ KEY_INPUT_NUMLOCK, ImGuiKey_NumLock },
        KeyMapping{ KEY_INPUT_NUMPAD0, ImGuiKey_Keypad0 },
        KeyMapping{ KEY_INPUT_NUMPAD1, ImGuiKey_Keypad1 },
        KeyMapping{ KEY_INPUT_NUMPAD2, ImGuiKey_Keypad2 },
        KeyMapping{ KEY_INPUT_NUMPAD3, ImGuiKey_Keypad3 },
        KeyMapping{ KEY_INPUT_NUMPAD4, ImGuiKey_Keypad4 },
        KeyMapping{ KEY_INPUT_NUMPAD5, ImGuiKey_Keypad5 },
        KeyMapping{ KEY_INPUT_NUMPAD6, ImGuiKey_Keypad6 },
        KeyMapping{ KEY_INPUT_NUMPAD7, ImGuiKey_Keypad7 },
        KeyMapping{ KEY_INPUT_NUMPAD8, ImGuiKey_Keypad8 },
        KeyMapping{ KEY_INPUT_NUMPAD9, ImGuiKey_Keypad9 },
        KeyMapping{ KEY_INPUT_MULTIPLY, ImGuiKey_KeypadMultiply },
        KeyMapping{ KEY_INPUT_ADD, ImGuiKey_KeypadAdd },
        KeyMapping{ KEY_INPUT_SUBTRACT, ImGuiKey_KeypadSubtract },
        KeyMapping{ KEY_INPUT_DECIMAL, ImGuiKey_KeypadDecimal },
        KeyMapping{ KEY_INPUT_DIVIDE, ImGuiKey_KeypadDivide },
        KeyMapping{ KEY_INPUT_NUMPADENTER, ImGuiKey_KeypadEnter }
    };

    void AddStickEvents(
        ImGuiIO& io,
        int x,
        int y,
        ImGuiKey leftKey,
        ImGuiKey rightKey,
        ImGuiKey upKey,
        ImGuiKey downKey
    )
    {
        constexpr float maxAnalogValue = 1000.0f;
        constexpr float deadZone = 0.1f;

        const float normalizedX =
            std::clamp(
                static_cast<float>(x) / maxAnalogValue,
                -1.0f,
                1.0f
            );
        const float normalizedY =
            std::clamp(
                static_cast<float>(y) / maxAnalogValue,
                -1.0f,
                1.0f
            );

        const float leftValue =
            normalizedX < -deadZone ? -normalizedX : 0.0f;
        const float rightValue =
            normalizedX > deadZone ? normalizedX : 0.0f;
        const float upValue =
            normalizedY < -deadZone ? -normalizedY : 0.0f;
        const float downValue =
            normalizedY > deadZone ? normalizedY : 0.0f;

        io.AddKeyAnalogEvent(leftKey, leftValue > 0.0f, leftValue);
        io.AddKeyAnalogEvent(rightKey, rightValue > 0.0f, rightValue);
        io.AddKeyAnalogEvent(upKey, upValue > 0.0f, upValue);
        io.AddKeyAnalogEvent(downKey, downValue > 0.0f, downValue);
    }
}

namespace DxLImGui::Extras
{
    void DxLibInput::Update(ImGuiIO& io)
    {
        const auto currentTime = Clock::now();
        if (hasPreviousFrameTime_)
        {
            io.DeltaTime =
                std::chrono::duration<float>(
                    currentTime - previousFrameTime_
                ).count();

            if (io.DeltaTime <= 0.0f)
            {
                io.DeltaTime = 1.0f / 60.0f;
            }
        }
        else
        {
            io.DeltaTime = 1.0f / 60.0f;
            hasPreviousFrameTime_ = true;
        }
        previousFrameTime_ = currentTime;

        const HWND mainWindow = DxLib::GetMainWindowHandle();
        RECT clientRect{};
        if (
            mainWindow != nullptr &&
            ::GetClientRect(mainWindow, &clientRect) != FALSE
        )
        {
            io.DisplaySize = ImVec2(
                static_cast<float>(
                    clientRect.right - clientRect.left
                ),
                static_cast<float>(
                    clientRect.bottom - clientRect.top
                )
            );
        }

        const HWND focusedWindow = ::GetForegroundWindow();
        io.AddFocusEvent(
            mainWindow != nullptr &&
            (
                focusedWindow == mainWindow ||
                ::IsChild(mainWindow, focusedWindow) != FALSE
            )
        );

        char keyStates[256]{};
        if (DxLib::GetHitKeyStateAll(keyStates) == 0)
        {
            for (const KeyMapping& mapping : keyMappings)
            {
                const auto keyIndex =
                    static_cast<std::size_t>(mapping.dxLibKey);

                if (keyIndex >= previousKeyStates_.size())
                {
                    continue;
                }

                const bool isPressed =
                    keyStates[keyIndex] != 0;

                if (isPressed != previousKeyStates_[keyIndex])
                {
                    io.AddKeyEvent(mapping.imguiKey, isPressed);
                    previousKeyStates_[keyIndex] = isPressed;
                }
            }

            io.AddKeyEvent(
                ImGuiMod_Ctrl,
                keyStates[KEY_INPUT_LCONTROL] != 0 ||
                    keyStates[KEY_INPUT_RCONTROL] != 0
            );
            io.AddKeyEvent(
                ImGuiMod_Shift,
                keyStates[KEY_INPUT_LSHIFT] != 0 ||
                    keyStates[KEY_INPUT_RSHIFT] != 0
            );
            io.AddKeyEvent(
                ImGuiMod_Alt,
                keyStates[KEY_INPUT_LALT] != 0 ||
                    keyStates[KEY_INPUT_RALT] != 0
            );
            io.AddKeyEvent(
                ImGuiMod_Super,
                keyStates[KEY_INPUT_LWIN] != 0 ||
                    keyStates[KEY_INPUT_RWIN] != 0
            );
        }

        int mouseX = 0;
        int mouseY = 0;
        if (DxLib::GetMousePoint(&mouseX, &mouseY) == 0)
        {
            io.AddMousePosEvent(
                static_cast<float>(mouseX),
                static_cast<float>(mouseY)
            );
        }

        const int mouseInput = DxLib::GetMouseInput();
        const auto addMouseButtonEvent =
            [&io, mouseInput](
                int dxLibButton,
                ImGuiMouseButton imguiButton
            )
            {
                io.AddMouseButtonEvent(
                    imguiButton,
                    (mouseInput & dxLibButton) != 0
                );
            };

        addMouseButtonEvent(
            MOUSE_INPUT_LEFT,
            ImGuiMouseButton_Left
        );
        addMouseButtonEvent(
            MOUSE_INPUT_RIGHT,
            ImGuiMouseButton_Right
        );
        addMouseButtonEvent(
            MOUSE_INPUT_MIDDLE,
            ImGuiMouseButton_Middle
        );

        const float horizontalWheel =
            DxLib::GetMouseHWheelRotVolF();
        const float verticalWheel =
            DxLib::GetMouseWheelRotVolF();

        if (horizontalWheel != 0.0f || verticalWheel != 0.0f)
        {
            io.AddMouseWheelEvent(
                horizontalWheel,
                verticalWheel
            );
        }

        const int padState =
            DxLib::GetJoypadNum() > 0
            ? DxLib::GetJoypadInputState(DX_INPUT_PAD1)
            : -1;

        if (padState < 0)
        {
            io.BackendFlags &= ~ImGuiBackendFlags_HasGamepad;
            return;
        }

        io.BackendFlags |= ImGuiBackendFlags_HasGamepad;

        const auto addGamepadButton =
            [&io, padState](int dxLibButton, ImGuiKey imguiKey)
            {
                io.AddKeyEvent(
                    imguiKey,
                    (padState & dxLibButton) != 0
                );
            };

        addGamepadButton(PAD_INPUT_START, ImGuiKey_GamepadStart);
        addGamepadButton(PAD_INPUT_M, ImGuiKey_GamepadBack);
        addGamepadButton(PAD_INPUT_X, ImGuiKey_GamepadFaceLeft);
        addGamepadButton(PAD_INPUT_B, ImGuiKey_GamepadFaceRight);
        addGamepadButton(PAD_INPUT_Y, ImGuiKey_GamepadFaceUp);
        addGamepadButton(PAD_INPUT_A, ImGuiKey_GamepadFaceDown);
        addGamepadButton(PAD_INPUT_LEFT, ImGuiKey_GamepadDpadLeft);
        addGamepadButton(PAD_INPUT_RIGHT, ImGuiKey_GamepadDpadRight);
        addGamepadButton(PAD_INPUT_UP, ImGuiKey_GamepadDpadUp);
        addGamepadButton(PAD_INPUT_DOWN, ImGuiKey_GamepadDpadDown);
        addGamepadButton(PAD_INPUT_L, ImGuiKey_GamepadL1);
        addGamepadButton(PAD_INPUT_R, ImGuiKey_GamepadR1);

        int leftX = 0;
        int leftY = 0;
        if (
            DxLib::GetJoypadAnalogInput(
                &leftX,
                &leftY,
                DX_INPUT_PAD1
            ) == 0
        )
        {
            AddStickEvents(
                io,
                leftX,
                leftY,
                ImGuiKey_GamepadLStickLeft,
                ImGuiKey_GamepadLStickRight,
                ImGuiKey_GamepadLStickUp,
                ImGuiKey_GamepadLStickDown
            );
        }

        int rightX = 0;
        int rightY = 0;
        if (
            DxLib::GetJoypadAnalogInputRight(
                &rightX,
                &rightY,
                DX_INPUT_PAD1
            ) == 0
        )
        {
            AddStickEvents(
                io,
                rightX,
                rightY,
                ImGuiKey_GamepadRStickLeft,
                ImGuiKey_GamepadRStickRight,
                ImGuiKey_GamepadRStickUp,
                ImGuiKey_GamepadRStickDown
            );
        }
    }

    void DxLibInput::Reset() noexcept
    {
        previousKeyStates_.fill(false);
        previousFrameTime_ = {};
        hasPreviousFrameTime_ = false;
    }
}
