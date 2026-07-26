# コントリビューターの方々へ

# DxLImGuiデモGIFの撮影・配置

このディレクトリの`DxLImGui-demo.gif`は、ルートの`README.md`から
次の相対パスで直接参照されています。

```text
docs/images/DxLImGui-demo.gif
```

GitHubではファイル名の大文字小文字が区別されます。完成GIFへ差し替えるときも、
`DxLImGui-demo.gif`という名前を変更しないでください。

## デモの起動

リポジトリルートからRelease x64版を起動します。

```powershell
.\build\x64\Release\DxLImGui.exe --capture-demo
```

## 録画設定

- 録画時間: 12～15秒
- 推奨録画解像度: 1280x720
- 推奨フレームレート: 30fpsまたは60fps
- GIF化後の目安: 15fps、960x540または1280x720

画面配置が安定してから録画を開始してください。Multi-Viewportも見せる場合は、
録画前に`Capture Guide`ウィンドウをメインウィンドウ外へドラッグします。

## GIFへの変換

今後使用するかもしれませんが

FFmpegを使う例です。`DxLImGui-demo.mp4`は録画した動画の名前へ置き換えてください。

```powershell
ffmpeg -i DxLImGui-demo.mp4 -vf "fps=15,scale=960:540:flags=lanczos,split[s0][s1];[s0]palettegen=max_colors=128[p];[s1][p]paletteuse=dither=bayer" -loop 0 docs/images/DxLImGui-demo.gif
```

ScreenToGifなどのGUIツールを使う場合も、15fps前後へ減らし、不要な前後フレームを
削除してから保存するとREADME向けのファイルサイズに抑えやすくなります。

## 完成GIFの保存先

```text
docs/images/DxLImGui-demo.gif
```

現在のファイルはリンク切れ防止用プレースホルダーです。完成GIFを同じパスへ
上書きすれば、ルートREADMEの表示も自動的に更新されます。

### NOTE : 今後API整理 / 挙動の変化をする可能性が高いため、PR時に確認します
