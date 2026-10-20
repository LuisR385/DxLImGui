# Third-Party Notices

このRelease ZIPには、DxLImGui本体とは異なる著作権および
ライセンス条件が適用される第三者ソフトウェアが含まれています。

本書は、Release ZIPへ実際に収録する第三者ソフトウェアの
ライセンス文書、著作権表示、およびソース内表示の配置場所を示すものです。

正式な条件は、各ライセンス原文を確認してください。

## DxLImGui

DxLImGui本体には、このZIPのルートに収録した
[`LICENSE`](LICENSE)のMIT Licenseが適用されます。

このライセンスは、`thirdparty/`以下のソフトウェアや、
個別に条件を示したフォントなどの第三者素材には適用されません。

## DxLib

DxLImGuiはDxLibを必要としますが、このRelease ZIPには
次のファイルを収録していません。

- DxLib本体
- DxLibのヘッダー
- DxLibの静的ライブラリ
- DxLibの付属文書`DxLib.txt`

DxLib 3.24fは、利用者が公式サイトから別途取得する必要があります。

- [ＤＸライブラリ置き場 ダウンロードページ](https://dxlib.xsrv.jp/dxdload.html)
- [ＤＸライブラリ置き場 著作権関係](https://dxlib.xsrv.jp/dxlicense.html)

別途取得したDxLibには、DxLib公式配布物の条件が適用されます。

DxLibおよびDxLib配布物に含まれる第三者ソフトウェアは、
このRelease ZIPへ収録しないため、それらの通知は本書へ転載していません。

## Dear ImGui

- 名称: Dear ImGui
- バージョン: 1.92.6 WIP
- 配置場所: [`thirdparty/imgui/`](thirdparty/imgui/)
- 同梱形態: ソースコード
- ライセンス:
  [`thirdparty/imgui/LICENSE.txt`](thirdparty/imgui/LICENSE.txt)
- 著作権表示:
  `Copyright (c) 2014-2026 Omar Cornut`

このRelease ZIPには、Dear ImGui本体、Win32バックエンド、
DirectX 11バックエンドを収録しています。

## stb由来コード

stb由来ヘッダーのライセンス表示は、次の各ファイル内に保持されています。

- [`thirdparty/imgui/imstb_rectpack.h`](thirdparty/imgui/imstb_rectpack.h)
- [`thirdparty/imgui/imstb_textedit.h`](thirdparty/imgui/imstb_textedit.h)
- [`thirdparty/imgui/imstb_truetype.h`](thirdparty/imgui/imstb_truetype.h)

stb由来の展開コードに関する表示は、
[`thirdparty/imgui/imgui_draw.cpp`](thirdparty/imgui/imgui_draw.cpp)
内に保持されています。

## 埋め込みフォント（ProggyClean）

現在の同梱ソースには、ProggyClean.ttfの圧縮データが
[`thirdparty/imgui/imgui_draw.cpp`](thirdparty/imgui/imgui_draw.cpp)
内に埋め込まれています。

クレジットについては、
[`thirdparty/imgui/docs/FONTS.md`](thirdparty/imgui/docs/FONTS.md#creditslicenses-for-fonts-included-in-repository)
も参照してください。

公式出典（参照日: 2026-07-26）:

[Proggy Fonts LICENSE](https://github.com/bluescan/proggyfonts/blob/master/LICENSE)

```text
MIT License

Copyright (c) 2004, 2005 Tristan Grimmer

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
```

## 日本語グリフ範囲データ

日本語グリフ範囲データの出典およびライセンス表示は、
[`thirdparty/imgui/imgui_draw.cpp`](thirdparty/imgui/imgui_draw.cpp)
内の`ImFontAtlas::GetGlyphRangesJapanese()`に保持されています。
