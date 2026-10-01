#!/usr/bin/env bash
# ==============================================================================
# Pipeline de Recompilação: XBE -> Disasm -> Func ID -> ABI -> C Recompilado
# ==============================================================================

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"

XBOXRECOMP_DIR="${XBOXRECOMP_DIR:-$ROOT_DIR/xboxrecomp}"
MKSM_XBE="${MKSM_XBE:-$ROOT_DIR/game/default.xbe}"
MKSM_GEN_DIR="${MKSM_GEN_DIR:-$ROOT_DIR/src/recomp/gen}"
CONFIG_SEEDS="$ROOT_DIR/config/seed_functions.json"

if [ ! -f "$MKSM_XBE" ]; then
    echo "[-] Erro: XBE nao encontrado em: $MKSM_XBE"
    echo "    Coloque o default.xbe na pasta 'game/' ou defina a variavel MKSM_XBE."
    exit 1
fi

if [ ! -d "$XBOXRECOMP_DIR/tools" ]; then
    echo "[-] Erro: toolkit xboxrecomp nao encontrado em: $XBOXRECOMP_DIR"
    echo "    Execute: git clone https://github.com/sp00nznet/xboxrecomp.git $ROOT_DIR/xboxrecomp"
    exit 1
fi

export PYTHONPATH="$XBOXRECOMP_DIR:$PYTHONPATH"

mkdir -p "$MKSM_GEN_DIR"
mkdir -p "$ROOT_DIR/game"

echo "[1/5] Analisando cabecalho do XBE..."
python3 -m tools.xbe_parser "$MKSM_XBE" --json "$ROOT_DIR/game/mksm_analysis.json"

if [ "$LIFT_ONLY" != "1" ]; then
    echo "[2/5] Desmontando secoes de codigo (.text)..."
    python3 -m tools.disasm "$MKSM_XBE" --text-only -v

    echo "[3/5] Identificando funcoes de biblioteca e CRT..."
    python3 -m tools.func_id "$MKSM_XBE" -v

    echo "[4/5] Analisando convencoes de chamada (ABI analysis)..."
    python3 -m tools.abi_analysis "$MKSM_XBE" -v
fi

echo "[5/5] Traduzindo x86 para codigo C (Lifting)..."
python3 -m tools.recomp "$MKSM_XBE" \
    --gen-dir "$MKSM_GEN_DIR" \
    --functions "$XBOXRECOMP_DIR/tools/disasm/output/functions.json" \
    --abi "$XBOXRECOMP_DIR/tools/abi_analysis/output/abi_functions.json" \
    --seeds "$CONFIG_SEEDS" \
    --exclude-manual "$ROOT_DIR/src/recomp_manual.c"

echo "[+] Concluido com sucesso! Codigo C gerado em: $MKSM_GEN_DIR"
