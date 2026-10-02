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

CMAKE_EXTRA_ARGS=()
if [ "${MKSM_VULKAN:-0}" = "1" ]; then
    if [ -z "${NVK_SDK:-}" ]; then
        echo "[ERRO] MKSM_VULKAN=1 requer NVK_SDK apontando para o prefixo instalado do mesa-switch."
        echo "       Esperado: \$NVK_SDK/include/vulkan e \$NVK_SDK/lib/libvulkan.a"
        exit 20
    fi
    if [ ! -f "$NVK_SDK/lib/libvulkan.a" ]; then
        echo "[ERRO] libvulkan.a nao encontrado em: $NVK_SDK/lib/libvulkan.a"
        exit 21
    fi
    echo "[GPU] Vulkan/NVK habilitado: $NVK_SDK"
    CMAKE_EXTRA_ARGS+=(
        -DXBOXRECOMP_VULKAN=ON
        -DNVK_SDK="$NVK_SDK"
    )
else
    echo "[GPU] OpenGL/EGL habilitado (padrao)"
    CMAKE_EXTRA_ARGS+=( -DXBOXRECOMP_VULKAN=OFF )
fi

cmake -B "$BUILD_DIR" -S "$ROOT_DIR" \
    -G "Ninja" \
    -DCMAKE_TOOLCHAIN_FILE="$DEVKITPRO/cmake/Switch.cmake" \
    -DCMAKE_BUILD_TYPE=Release \
    -DXBOXRECOMP_DIR="$ROOT_DIR/xboxrecomp" \
    -DMKSM_GEN_DIR="$ROOT_DIR/src/recomp/gen" \
    "${CMAKE_EXTRA_ARGS[@]}"

echo "[2/3] Compilando arquivos C para ARM64 com Ninja..."
ninja -C "$BUILD_DIR"

echo "[3/3] Gerando pacote .NRO para Switch Homebrew..."
ELF_FILE="$BUILD_DIR/mksm_recomp.elf"
[ ! -f "$ELF_FILE" ] && ELF_FILE="$BUILD_DIR/mksm_recomp"
elf2nro "$ELF_FILE" "$BUILD_DIR/mksm.nro" --nacp="$ROOT_DIR/control.nacp" --icon="$ROOT_DIR/icon.png"

echo ""
echo "======================================================="
echo "[+] SUCESSO! Executavel do Nintendo Switch gerado em:"
echo "    $BUILD_DIR/mksm.nro"
echo "======================================================="
