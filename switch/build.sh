#!/usr/bin/env bash
# ==============================================================================
# Script de Compilacao para Nintendo Switch (libnx / devkitA64 / Ninja)
# ==============================================================================

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"

export DEVKITPRO=/opt/devkitpro
export DEVKITA64=/opt/devkitpro/devkitA64
export PATH="$DEVKITA64/bin:$DEVKITPRO/tools/bin:$PATH"

BUILD_DIR="$ROOT_DIR/build-switch"
rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR"

cd "$ROOT_DIR"

echo "[1/3] Configurando CMake para Nintendo Switch (Ninja)..."
cmake -B "$BUILD_DIR" -S "$ROOT_DIR" \
    -G "Ninja" \
    -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/Switch.cmake" \
    -DCMAKE_BUILD_TYPE=Release \
    -DXBOXRECOMP_DIR="$ROOT_DIR/xboxrecomp" \
    -DMKSM_GEN_DIR="$ROOT_DIR/src/recomp/gen"

echo "[2/3] Compilando arquivos C para ARM64 com Ninja..."
ninja -C "$BUILD_DIR"

echo "[3/3] Gerando pacote .NRO para Switch Homebrew..."
elf2nro "$BUILD_DIR/mksm_recomp.elf" "$BUILD_DIR/mksm.nro" \
    --name="MK: Shaolin Monks" \
    --author="Recomp Port" \
    --version="1.0.0" 2>/dev/null || elf2nro "$BUILD_DIR/mksm_recomp" "$BUILD_DIR/mksm.nro"

echo ""
echo "======================================================="
echo "[+] SUCESSO! Executavel do Nintendo Switch gerado em:"
echo "    $BUILD_DIR/mksm.nro"
echo "======================================================="
