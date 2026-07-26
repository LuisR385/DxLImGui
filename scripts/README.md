# Release ZIP生成スクリプト

このディレクトリには、DxLImGuiの利用者向けRelease ZIPを生成するスクリプトがあります。

- `make_release.py`: ZIPの生成、内容検査、SHA-256の計算を行う本体
- `make_release.bat`: WindowsからPythonスクリプトを起動するためのラッパー

## 必要な環境

- Windows
- Python 3
- `py -3`または`python`コマンドがPATHから実行できること
- DxLImGuiリポジトリの完全な作業ツリー

外部Pythonパッケージは使用しません。

## 基本的な使い方

次の例は、リポジトリルートで実行します。

Pythonスクリプトを直接実行する場合:

```powershell
python scripts/make_release.py v0.1.0
```

Python Launcherを使用する場合:

```powershell
py -3 scripts/make_release.py v0.1.0
```

バッチファイルを使用する場合:

```bat
scripts\make_release.bat v0.1.0
```

バッチファイルは最初に`py -3`を試し、利用できない場合は`python`を使用します。渡された引数は、そのまま`make_release.py`へ渡されます。

スクリプトのヘルプは次のコマンドで表示できます。

```powershell
python scripts/make_release.py --help
```

## バージョン指定

バージョンは`vX.Y.Z`形式で指定します。

```text
v0.1.0
```

指定したバージョンから先頭の`v`を除いた値は、`include/DxLImGui/DxLImGuiConfig.h`の`DXLIMGUI_VERSION_STRING`と一致する必要があります。

例えば、ヘッダーの値が`0.1.0`の場合に指定できるバージョンは`v0.1.0`です。一致しない場合、スクリプトはZIPを生成せず終了します。

## 生成物

正常に完了すると、リポジトリルートの`dist`ディレクトリへ次の2ファイルを生成します。

```text
dist/
├── DxLImGui-v0.1.0.zip
└── DxLImGui-v0.1.0.zip.sha256
```

ZIP内のルートディレクトリは`DxLImGui-v0.1.0/`です。

処理の最後には、ZIPへ収録した全ファイル、生成先、SHA-256が表示されます。

## 既存ファイルの上書き

同名のZIPまたはSHA-256ファイルが存在する場合、通常はエラーとして終了します。内容を確認したうえで上書きする場合だけ、`--force`を指定してください。

```powershell
python scripts/make_release.py v0.1.0 --force
```

バッチファイルでも同じオプションを使用できます。

```bat
scripts\make_release.bat v0.1.0 --force
```

`--force`は、対象バージョンと同名のZIPおよびSHA-256ファイルだけを置き換えます。

## ZIPへ収録する内容

スクリプトは、コード内の固定された許可リストにある28ファイルだけを収録します。

- DxLImGuiの公開ヘッダーと実装
- ビルドに必要なDear ImGui本体
- Dear ImGuiのWin32バックエンド
- Dear ImGuiのDirectX 11バックエンド
- Dear ImGuiのライセンスおよびフォント文書
- 利用者向けサンプル
- Release ZIP専用のREADMEと第三者通知
- DxLImGuiの`LICENSE`

入力元とZIP内の配置が異なる文書は次のとおりです。

| 入力元 | ZIP内の配置 |
| --- | --- |
| `release/README.md` | `README.md` |
| `release/THIRD_PARTY_NOTICES.md` | `THIRD_PARTY_NOTICES.md` |

詳細な収録ファイルは、`make_release.py`の`ARCHIVE_ENTRIES`に定義されています。

## ZIPへ収録しない内容

次の内容はRelease ZIPへ収録しません。

- DxLib本体
- DxLibのヘッダー、静的ライブラリ、`DxLib.txt`
- `.git`、`.github`、`.vs`
- `build`、`dist`、`local`
- ソリューション、プロジェクト、テスト、開発者向けファイル
- `.exe`、`.lib`、`.obj`、`.pdb`、`.ilk`、`.user`

Release ZIPの利用者は、DxLibを公式配布元から別途取得する必要があります。導入方法は[Release ZIP専用README](../release/README.md)を参照してください。

## スクリプトが行う検査

ZIPを確定する前に、主に次の項目を検査します。

1. バージョンが`vX.Y.Z`形式であること
2. 指定バージョンが`DXLIMGUI_VERSION_STRING`と一致すること
3. 許可リストの28ファイルがすべて存在すること
4. 入力元とZIP内のパスに重複や不正な相対パスがないこと
5. シンボリックリンクを経由したファイルがないこと
6. Release文書に未置換のGitHub URLや壊れたローカルリンクがないこと
7. DxLib、`.lib`、ビルド生成物などの禁止対象が混入していないこと
8. 完成したZIPのファイル一覧と内容が許可リストに一致すること
9. ZIPが破損していないこと

検査に失敗した場合、完成したZIPとSHA-256ファイルは配置されません。

## 再現可能性

ZIP内のファイル順序、タイムスタンプ、アクセス権、圧縮レベルを固定しています。同じ内容、同じPythonおよび圧縮実装で実行した場合に、可能な範囲で同じZIPになるようにしています。

ZIPへは絶対パスを記録せず、`/`区切りの相対パスだけを使用します。

## SHA-256の確認

生成されたSHA-256ファイルには、ZIPのハッシュ値とファイル名が記録されます。

PowerShellでは次のコマンドでZIPのSHA-256を確認できます。

```powershell
Get-FileHash .\dist\DxLImGui-v0.1.0.zip -Algorithm SHA256
```

表示された値が、`DxLImGui-v0.1.0.zip.sha256`に記載された値と一致することを確認してください。

## 主なエラー

### `Version must use vX.Y.Z format`

バージョンを`v0.1.0`のような形式で指定してください。

### `Version mismatch`

指定したバージョンと`DXLIMGUI_VERSION_STRING`が一致していません。公開するバージョンとソースのバージョンを確認してください。

### `Required files are missing`

許可リストにある必須ファイルが見つかりません。表示されたパスと作業ツリーを確認してください。

### `Output files already exist`

同名の生成物があります。既存ファイルを確認し、意図して上書きする場合だけ`--force`を指定してください。

### `Unresolved GitHub URL`または`Broken local link`

Release ZIP専用文書に未置換のURL、またはZIP内に存在しないファイルへの相対リンクがあります。`release/README.md`と`release/THIRD_PARTY_NOTICES.md`を確認してください。

### `'python' is not recognized`またはPythonを起動できない

Python 3をインストールし、`py -3`または`python`コマンドをPATHから実行できることを確認してください。

## 公開前の確認

このスクリプトはZIPとSHA-256ファイルをローカルに生成するだけです。commit、tag、push、GitHub Releaseの作成や公開は行いません。

生成後は、ZIPの内容、ライセンス文書、バージョン、SHA-256を確認してから公開してください。
