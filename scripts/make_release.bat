@echo off
setlocal
set "PYTHONUTF8=1"

py -3 -c "import sys" >nul 2>&1
if errorlevel 1 goto use_python

py -3 "%~dp0make_release.py" %*
exit /b %errorlevel%

:use_python
python "%~dp0make_release.py" %*
exit /b %errorlevel%
