@echo off
setlocal enabledelayedexpansion

set "ROOT_DIR=%~dp0.."
set "DEVKITPRO=C:\devkitPro"
set "DEVKITA64=%DEVKITPRO%\devkitA64"

if not exist "%DEVKITA64%" (
    echo [-] Erro: devkitA64 nao encontrado em %DEVKITA64%
    exit /b 1
)

set "PATH=%DEVKITA64%\bin;%DEVKITPRO%\tools\bin;%DEVKITPRO%\msys2\usr\bin;%PATH%"

set "BUILD_DIR=%ROOT_DIR%\build-switch"
if not exist "%BUILD_DIR%" mkdir "%BUILD_DIR%"

echo [1/3] Configurando CMake para Nintendo Switch (Ninja)...
cmake -B build-switch -S . ^
    -G "Ninja" ^
    -DCMAKE_TOOLCHAIN_FILE="/opt/devkitpro/cmake/Switch.cmake" ^
    -DCMAKE_BUILD_TYPE=Release ^
    -DXBOXRECOMP_DIR="xboxrecomp" ^
    -DMKSM_GEN_DIR="src/recomp/gen"
if errorlevel 1 goto error

echo [2/3] Compilando arquivos C para ARM64 com Ninja...
ninja -C build-switch
if errorlevel 1 goto error

echo [3/3] Gerando pacote .NRO...
elf2nro "build-switch/mksm_recomp.elf" "build-switch/mksm.nro" --name="MK: Shaolin Monks" --author="Recomp Port" --version="1.0.0" 2>nul || elf2nro "build-switch/mksm_recomp" "build-switch/mksm.nro"

echo.
echo =======================================================
echo [+] SUCESSO! Executavel gerado em: build-switch\mksm.nro
echo =======================================================
goto end

:error
echo.
echo [-] Ocorreu um erro durante a compilacao.
exit /b 1

:end
