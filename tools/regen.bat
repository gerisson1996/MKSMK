@echo off
setlocal enabledelayedexpansion

set "ROOT_DIR=%~dp0.."
set "XBOXRECOMP_DIR=%ROOT_DIR%\xboxrecomp"
set "MKSM_XBE=%ROOT_DIR%\game\default.xbe"
set "MKSM_GEN_DIR=%ROOT_DIR%\src\recomp\gen"
set "CONFIG_SEEDS=%ROOT_DIR%\config\seed_functions.json"

if not exist "%MKSM_XBE%" (
    echo [-] Erro: XBE nao encontrado em: %MKSM_XBE%
    echo     Coloque o default.xbe na pasta 'game\default.xbe'.
    exit /b 1
)

if not exist "%XBOXRECOMP_DIR%\tools" (
    echo [-] Erro: toolkit xboxrecomp nao encontrado em: %XBOXRECOMP_DIR%
    exit /b 1
)

set "PYTHONPATH=%XBOXRECOMP_DIR%;%PYTHONPATH%"

if not exist "%MKSM_GEN_DIR%" mkdir "%MKSM_GEN_DIR%"
if not exist "%ROOT_DIR%\game" mkdir "%ROOT_DIR%\game"

echo [1/5] Analisando cabecalho do XBE...
python -m tools.xbe_parser "%MKSM_XBE%" --json "%ROOT_DIR%\game\mksm_analysis.json"
if errorlevel 1 goto error

if "%LIFT_ONLY%"=="1" goto lift

echo [2/5] Desmontando secoes de codigo (.text)...
python -m tools.disasm "%MKSM_XBE%" --text-only -v
if errorlevel 1 goto error

echo [3/5] Identificando funcoes de biblioteca e CRT...
python -m tools.func_id "%MKSM_XBE%" -v
if errorlevel 1 goto error

echo [4/5] Analisando convencoes de chamada (ABI analysis)...
python -m tools.abi_analysis "%MKSM_XBE%" -v
if errorlevel 1 goto error

:lift
echo [5/5] Traduzindo x86 para codigo C (Lifting)...
python -m tools.recomp "%MKSM_XBE%" ^
    --gen-dir "%MKSM_GEN_DIR%" ^
    --functions "%XBOXRECOMP_DIR%\tools\disasm\output\functions.json" ^
    --abi "%XBOXRECOMP_DIR%\tools\abi_analysis\output\abi_functions.json" ^
    --seeds "%CONFIG_SEEDS%" ^
    --exclude-manual "%ROOT_DIR%\src\recomp_manual.c"
if errorlevel 1 goto error

echo.
echo [+] Concluido com sucesso! Codigo C gerado em: %MKSM_GEN_DIR%
goto end

:error
echo.
echo [-] Ocorreu um erro durante a execucao do pipeline.
exit /b 1

:end
