# Resource safety confirmation samples

`ResourceSafetyChecks.cpp` contains opt-in confirmation scenarios. They are
compiled with the example project so API and link compatibility are checked,
but they are not called automatically because several scenarios intentionally
shut down DxLImGui or DxLib.

The non-graphics checks can be run automatically with:

```text
.\build\x64\Debug\DxLImGui.exe --run-safety-checks
```

Exit code `0` means all non-graphics checks passed.

The scenarios cover:

- rejection and preservation of an already-current external ImGui context;
- a successful initialization retry after that external-context rejection;
- disabling configuration flags after they were enabled;
- application of the style preset and style callback;
- rejection of duplicate image-cache ownership and safe move transfer;
- invalidation of scoped registration state after clearing the cache;
- resetting an image after `ImGui::Image()` submission but before `EndFrame()`;
- shutting down while a Dear ImGui frame is active;
- resetting an `Image` after `DxLib_End()`;
- link availability of `UpdateViewports()` and `RenderViewports()`.

Run one destructive scenario per application lifetime. The image scenarios
document their required initialized state and valid-handle inputs in the source.

## Direct MakeScreen SRV check

Run the direct Direct3D 11 validation sample with:

```text
.\build\x64\Debug\DxLImGui.exe --run-makescreen-srv-check
```

Add `--auto-exit` to close automatically after 240 rendered frames:

```text
.\build\x64\Debug\DxLImGui.exe --run-makescreen-srv-check --auto-exit
```

The sample:

- creates one 512x512 `MakeScreen` graph;
- obtains its borrowed `ID3D11Texture2D*`;
- logs `D3D11_TEXTURE2D_DESC` and the exact
  `CreateShaderResourceView` HRESULT to DxLib's `Log.txt`;
- creates one SRV and reuses the same pointer for every frame;
- draws changing DxLib content into the MakeScreen graph;
- calls `RefreshDxLibDirect3DSetting()` before displaying the SRV;
- submits that SRV directly to `ImGui::Image()`.

The ownership and shutdown order are intentionally explicit:

1. DxLib owns the borrowed `ID3D11Texture2D*`; the sample does not call
   `AddRef` or `Release` on it.
2. The sample owns the SRV returned by `CreateShaderResourceView`.
3. The sample releases the SRV before calling `DeleteGraph`.
4. The sample owns and deletes the MakeScreen graph handle.

This check intentionally has no `CopyResource` or `ResolveSubresource`
fallback. Add and test a fallback only if direct SRV creation fails.

## RenderTarget and direct GraphHandle registration checks

Run the combined RenderTarget regression sample with:

```text
.\build\x64\Debug\DxLImGui.exe --run-render-target-checks --auto-exit
```

The automatic run renders 240 frames and checks:

- direct `ID3D11ShaderResourceView` creation from a `GraphHandle`;
- duplicate registration rejection for both the scoped and public APIs;
- compatibility of the existing `(graphHandle, softImageHandle)` overload;
- `RenderTarget` move construction, move assignment, self-move assignment,
  repeated `Reset()`, and repeated `Create()`;
- preservation of the old resource when `Create()` receives an invalid size;
- rejection of a second `BeginDraw()` and safety of a second `EndDraw()`;
- sequential use and display of two RenderTargets;
- nested draw-screen restoration through
  `inner.BeginDraw(outer.GetGraphHandle())`;
- successful `RenderTarget::DrawFit()` submission for two available sizes;
- `RenderTarget::Reset()` after `ImGui::Image` submission, with deferred
  SRV release followed by GraphHandle deletion at `EndFrame()`;
- direct `Image::Load()` of a generated PNG containing two different alpha
  values, including a one-time test-only staging readback of the source
  Texture2D alpha channel;
- `Image` move construction, move assignment, and repeated `Reset()` after
  direct SRV loading;
- release of the final cached SRV by `DxLImGui::Shutdown()` before its
  GraphHandle is deleted.

Debug builds log one Texture2D description and one
`CreateShaderResourceView` result per registration. They do not log or create
an SRV every frame.

The product RenderTarget path performs no `GetPixelSoftImage`,
`CopyResource`, `ResolveSubresource`, or other GPU-to-CPU transfer. The only
readback is isolated inside `RenderTargetChecks.cpp` and runs once to verify
the generated PNG alpha channel.

The smallest normal-use loop is also available in
`examples/RenderTargetExample.cpp`.

### Public API notes

- New code should use `DxLImGui::Shutdown()`,
  `StylePreset::Light`, and `StylePreset::Classic`.
  `White` and `Gray` remain compatibility aliases.
- Advanced image-cache and platform-window control lives in
  `DxLImGui::Advanced`. The original root-level functions remain as
  compatibility wrappers.
- The incomplete custom-namespace macros were removed. The supported public
  namespace is `DxLImGui`.
- Both `Image::DrawFit()` and `RenderTarget::DrawFit()` may enlarge or shrink
  while preserving aspect ratio.

### Ownership

1. `RenderTarget` owns the `GraphHandle` returned by `DxLib::MakeScreen`.
2. DxLib owns the borrowed `ID3D11Texture2D*`; DxLImGui never calls
   `Release()` on that borrowed pointer.
3. The image cache owns the `ID3D11ShaderResourceView` through
   `Microsoft::WRL::ComPtr`.
4. `RenderTarget::Reset()` restores the draw screen, unregisters the SRV,
   then calls `DxLib::DeleteGraph`.
5. If an ImGui frame already references the SRV, both cache removal and the
   owned GraphHandle deletion are deferred until `EndFrame()`. The cache then
   releases the SRV first and calls `DeleteGraph` second.
6. If draw-screen restoration fails, `Reset()` keeps the RenderTarget alive
   and does not delete a GraphHandle that may still be the active draw target.
7. `ClearImageCache()` and `UnregisterImage()` can invalidate the display
   registration, but do not take GraphHandle ownership away from a live
   `Image` or `RenderTarget`; its later `Reset()` remains responsible for the
   GraphHandle.
8. Prefer destroying `Image` and `RenderTarget` objects before
   `DxLImGui::Shutdown()`. Destruction after `Shutdown()` is still guarded and
   will delete an owned GraphHandle while DxLib remains initialized.
