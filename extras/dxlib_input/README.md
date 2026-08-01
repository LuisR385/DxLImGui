# DxLib custom input reference

`DxLibInput` is an optional reference implementation for
`DxLImGui::InputBackend::Custom`. It is not built or called by the DxLImGui
core library.

Add `DxLibInput.cpp` to the application project and include `DxLibInput.h`.
Keep one state object alive and call it from the required Custom callback:

```cpp
#include "extras/dxlib_input/DxLibInput.h"

namespace
{
    DxLImGui::Extras::DxLibInput dxLibInput;

    void UpdateCustomInput(ImGuiIO& io)
    {
        dxLibInput.Update(io);
    }
}

DxLImGui::DxLImGuiConfig config;
config.inputBackend = DxLImGui::InputBackend::Custom;
config.customInputCallback = UpdateCustomInput;
config.ViewportsEnable = false;
```

This helper updates `DisplaySize`, `DeltaTime`, focus, keyboard, mouse, and
the first DxLib gamepad. It intentionally does not promise parity with the
official Win32 backend. In particular, text/IME input, cursor shape and
visibility, DPI changes, mouse capture outside the client area, and
Multi-Viewport are not fully supported.

Do not call this helper while using `InputBackend::Win32`. Doing so would mix
official Win32 events with custom events.
