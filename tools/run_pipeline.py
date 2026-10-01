#!/usr/bin/env python3
import sys
import os
import subprocess
from pathlib import Path

ROOT_DIR = Path(__file__).resolve().parent.parent
XBOXRECOMP_DIR = ROOT_DIR / "xboxrecomp"
GAME_DIR = ROOT_DIR / "game"
MKSM_XBE = GAME_DIR / "default.xbe"
MKSM_GEN_DIR = ROOT_DIR / "src" / "recomp" / "gen"
CONFIG_SEEDS = ROOT_DIR / "config" / "seed_functions.json"
ANALYSIS_JSON = GAME_DIR / "mksm_analysis.json"

DISASM_OUT = ROOT_DIR / "tools" / "disasm" / "output"
FUNCID_OUT = ROOT_DIR / "tools" / "func_id" / "output"
ABI_OUT = ROOT_DIR / "tools" / "abi_analysis" / "output"

FUNCTIONS_JSON = DISASM_OUT / "functions.json"
LABELS_JSON = DISASM_OUT / "labels.json"
IDENTIFIED_JSON = FUNCID_OUT / "identified_functions.json"
ABI_JSON = ABI_OUT / "abi_functions.json"
MANUAL_C = ROOT_DIR / "src" / "recomp_manual.c"

if not MKSM_XBE.exists():
    print(f"[-] Erro: XBE nao encontrado em: {MKSM_XBE}")
    sys.exit(1)

# Adiciona xboxrecomp ao sys.path
sys.path.insert(0, str(XBOXRECOMP_DIR))
os.environ["PYTHONPATH"] = f"{XBOXRECOMP_DIR}{os.pathsep}{os.environ.get('PYTHONPATH', '')}"

MKSM_GEN_DIR.mkdir(parents=True, exist_ok=True)
GAME_DIR.mkdir(parents=True, exist_ok=True)

def run_step(cmd_args, desc):
    print(f"\n=======================================================")
    print(f"[*] {desc}")
    print(f"=======================================================")
    res = subprocess.run([sys.executable] + cmd_args, cwd=str(ROOT_DIR))
    if res.returncode != 0:
        print(f"[-] Falha na etapa: {desc} (codigo {res.returncode})")
        sys.exit(res.returncode)

# 1. xbe_parser (Se ja rodou, pode pular se desejar, mas roda rapido)
run_step(["-m", "tools.xbe_parser", str(MKSM_XBE), "--json", str(ANALYSIS_JSON)], "[1/5] Analisando cabecalho do XBE...")

# 2. disasm (Se ja tiver o functions.json, podemos pular para economizar 90s, ou rodar se faltar)
if not FUNCTIONS_JSON.exists():
    run_step(["-m", "tools.disasm", str(MKSM_XBE), "--text-only", "-v"], "[2/5] Desmontando secoes de codigo (.text)...")
else:
    print("\n[+] [2/5] functions.json ja existe, pulando disassembly...")

# 3. func_id
if not IDENTIFIED_JSON.exists():
    run_step(["-m", "tools.func_id", str(MKSM_XBE), "-v"], "[3/5] Identificando funcoes de biblioteca e CRT...")
else:
    print("\n[+] [3/5] identified_functions.json ja existe, pulando func_id...")

# 4. abi_analysis
run_step([
    "-m", "tools.abi_analysis", str(MKSM_XBE),
    "--functions", str(FUNCTIONS_JSON),
    "--identified", str(IDENTIFIED_JSON),
    "--output", str(ABI_JSON),
    "-v"
], "[4/5] Analisando convencoes de chamada (ABI analysis)...")

# 5. recomp
recomp_args = [
    "-m", "tools.recomp", str(MKSM_XBE),
    "--split", "500",
    "--gen-dir", str(MKSM_GEN_DIR),
    "--functions", str(FUNCTIONS_JSON),
    "--labels", str(LABELS_JSON),
    "--identified", str(IDENTIFIED_JSON),
    "--abi", str(ABI_JSON),
    "--exclude-manual", str(MANUAL_C),
    "--game-name", "MK: Shaolin Monks"
]

run_step(recomp_args, "[5/5] Traduzindo x86 para codigo C (Lifting)...")

print("\n=======================================================")
print("[+] SUCESSO TOTAL! Codigo C gerado em:", MKSM_GEN_DIR)
print("=======================================================")
