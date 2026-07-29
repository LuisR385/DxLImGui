@echo off
setlocal

set "CONFIGURATION=%~1"
set "PLATFORM=%~2"
set "TARGET=%~3"

if not defined CONFIGURATION set "CONFIGURATION=Debug"
if not defined PLATFORM set "PLATFORM=x64"
if not defined TARGET set "TARGET=Build"

if /i not "%CONFIGURATION%"=="Debug" if /i not "%CONFIGURATION%"=="Release" (
    echo Error: configuration must be Debug or Release.
    exit /b 2
)

if /i not "%PLATFORM%"=="x64" if /i not "%PLATFORM%"=="Win32" (
    echo Error: platform must be x64 or Win32.
    exit /b 2
)

set "VSWHERE=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe"
if not exist "%VSWHERE%" (
    echo Error: vswhere.exe was not found. Install Visual Studio 2022.
    exit /b 1
)

set "MSBUILD="
set "VSWHERE_OUTPUT=%TEMP%\DxLImGui-msbuild-%RANDOM%.txt"
"%VSWHERE%" -latest -version "[17.0,18.0)" -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 Microsoft.Component.MSBuild -find MSBuild\**\Bin\MSBuild.exe > "%VSWHERE_OUTPUT%"
set /p "MSBUILD=" < "%VSWHERE_OUTPUT%"
del "%VSWHERE_OUTPUT%" >nul 2>&1

if not defined MSBUILD (
    echo Error: Visual Studio 2022 with the Desktop development with C++ workload was not found.
    exit /b 1
)

 echo Building DxLImGui.sln with VS2022 MSVC ^(%CONFIGURATION%^|%PLATFORM%^)...
"%MSBUILD%" "%~dp0..\DxLImGui.sln" /m /t:%TARGET% /p:Configuration=%CONFIGURATION% /p:Platform=%PLATFORM% /nologo
exit /b %ERRORLEVEL%
