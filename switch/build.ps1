# ==============================================================================
# Script de Compilacao para Nintendo Switch (Windows PowerShell)
# ==============================================================================

$ErrorActionPreference = "Stop"

$SCRIPT_DIR = Split-Path -Parent $MyInvocation.MyCommand.Path
$ROOT_DIR = Split-Path -Parent $SCRIPT_DIR

$env:DEVKITPRO = if ($env:DEVKITPRO) { $env:DEVKITPRO } else { "c:\devkitPro" }
$env:DEVKITA64 = "$env:DEVKITPRO\devkitA64"

if (-not (Test-Path "$env:DEVKITA64")) {
    Write-Host "[-] Erro: devkitA64 nao encontrado em $env:DEVKITA64" -ForegroundColor Red
    exit 1
}

$env:PATH = "$env:DEVKITA64\bin;$env:DEVKITPRO\tools\bin;$env:PATH"

$BUILD_DIR = "$ROOT_DIR\build-switch"
if (-not (Test-Path $BUILD_DIR)) { New-Item -ItemType Directory -Path $BUILD_DIR -Force | Out-Null }

$TOOLCHAIN = "$env:DEVKITPRO\cmake\Switch.cmake"

Write-Host "[1/3] Configurando CMake para Nintendo Switch (devkitA64)..." -ForegroundColor Cyan
cmake -B "$BUILD_DIR" -S "$ROOT_DIR" `
    -G "Unix Makefiles" `
    -DCMAKE_TOOLCHAIN_FILE="$TOOLCHAIN" `
    -DCMAKE_BUILD_TYPE=Release `
    -DXBOXRECOMP_DIR="$ROOT_DIR\xboxrecomp" `
    -DMKSM_GEN_DIR="$ROOT_DIR\src\recomp\gen"

Write-Host "[2/3] Compilando codigo C (isso pode levar alguns minutos)..." -ForegroundColor Cyan
cmake --build "$BUILD_DIR" -j4

Write-Host "[3/3] Gerando pacote .NRO para Switch Homebrew..." -ForegroundColor Cyan
$ELF_FILE = "$BUILD_DIR\mksm_recomp.elf"
if (-not (Test-Path $ELF_FILE)) { $ELF_FILE = "$BUILD_DIR\mksm_recomp" }
$NRO_FILE = "$BUILD_DIR\mksm.nro"
$NACP_FILE = "$ROOT_DIR\control.nacp"
$ICON_FILE = "$ROOT_DIR\icon.png"

elf2nro "$ELF_FILE" "$NRO_FILE" --nacp="$NACP_FILE" --icon="$ICON_FILE"

Write-Host ""
Write-Host "[+] SUCESSO! Executavel do Nintendo Switch gerado em:" -ForegroundColor Green
Write-Host "    $NRO_FILE" -ForegroundColor Yellow
