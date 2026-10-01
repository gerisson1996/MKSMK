# ==============================================================================
# Pipeline de Recompilacao (Windows PowerShell): XBE -> Disasm -> Func ID -> ABI -> C Recompilado
# ==============================================================================

$ErrorActionPreference = "Stop"

$SCRIPT_DIR = Split-Path -Parent $MyInvocation.MyCommand.Path
$ROOT_DIR = Split-Path -Parent $SCRIPT_DIR

$XBOXRECOMP_DIR = if ($env:XBOXRECOMP_DIR) { $env:XBOXRECOMP_DIR } else { "$ROOT_DIR\xboxrecomp" }
$MKSM_XBE = if ($env:MKSM_XBE) { $env:MKSM_XBE } else { "$ROOT_DIR\game\default.xbe" }
$MKSM_GEN_DIR = if ($env:MKSM_GEN_DIR) { $env:MKSM_GEN_DIR } else { "$ROOT_DIR\src\recomp\gen" }
$CONFIG_SEEDS = "$ROOT_DIR\config\seed_functions.json"

if (-not (Test-Path $MKSM_XBE)) {
    Write-Host "[-] Erro: XBE nao encontrado em: $MKSM_XBE" -ForegroundColor Red
    Write-Host "    Coloque o default.xbe na pasta 'game/' ou defina a variavel MKSM_XBE."
    exit 1
}

if (-not (Test-Path "$XBOXRECOMP_DIR\tools")) {
    Write-Host "[-] Erro: toolkit xboxrecomp nao encontrado em: $XBOXRECOMP_DIR" -ForegroundColor Red
    Write-Host "    Execute: git clone https://github.com/sp00nznet/xboxrecomp.git `"$ROOT_DIR\xboxrecomp`""
    exit 1
}

$env:PYTHONPATH = "$XBOXRECOMP_DIR;$env:PYTHONPATH"

if (-not (Test-Path $MKSM_GEN_DIR)) { New-Item -ItemType Directory -Path $MKSM_GEN_DIR -Force | Out-Null }
if (-not (Test-Path "$ROOT_DIR\game")) { New-Item -ItemType Directory -Path "$ROOT_DIR\game" -Force | Out-Null }

Write-Host "[1/5] Analisando cabecalho do XBE..." -ForegroundColor Cyan
python -m tools.xbe_parser "$MKSM_XBE" --json "$ROOT_DIR\game\mksm_analysis.json"

if ($env:LIFT_ONLY -ne "1") {
    Write-Host "[2/5] Desmontando secoes de codigo (.text)..." -ForegroundColor Cyan
    python -m tools.disasm "$MKSM_XBE" --text-only -v

    Write-Host "[3/5] Identificando funcoes de biblioteca e CRT..." -ForegroundColor Cyan
    python -m tools.func_id "$MKSM_XBE" -v

    Write-Host "[4/5] Analisando convencoes de chamada (ABI analysis)..." -ForegroundColor Cyan
    python -m tools.abi_analysis "$MKSM_XBE" -v
}

Write-Host "[5/5] Traduzindo x86 para codigo C (Lifting)..." -ForegroundColor Cyan
python -m tools.recomp "$MKSM_XBE" `
    --gen-dir "$MKSM_GEN_DIR" `
    --functions "$XBOXRECOMP_DIR\tools\disasm\output\functions.json" `
    --abi "$XBOXRECOMP_DIR\tools\abi_analysis\output\abi_functions.json" `
    --seeds "$CONFIG_SEEDS" `
    --exclude-manual "$ROOT_DIR\src\recomp_manual.c"

Write-Host "[+] Concluido com sucesso! Codigo C gerado em: $MKSM_GEN_DIR" -ForegroundColor Green
