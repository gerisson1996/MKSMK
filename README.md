# Mortal Kombat: Shaolin Monks (Xbox) — Static Recompilation (Nintendo Switch / PC)

Projeto de recompilação estática do jogo **Mortal Kombat: Shaolin Monks** (Xbox Original NTSC-U), baseado na arquitetura e pipeline do `xboxrecomp` e `nfsu2-sw`.

---

## 📁 Estrutura do Projeto

| Caminho | Descrição |
|---|---|
| `game/` | Onde você coloca o `default.xbe` e arquivos do jogo extraídos |
| `src/main.c` | Ponto de entrada, inicialização do kernel do Xbox, memória e áudio |
| `src/recomp_manual.c` | Overrides manuais em C para funções problemáticas |
| `src/switch_nx.c` | Camada de compatibilidade para Nintendo Switch (libnx) |
| `config/seed_functions.json` | Pontos de entrada não identificados estaticamente |
| `xboxrecomp/` | Toolkit do recompilador x86 -> C |
| `tools/regen.ps1` (ou `.sh`) | Pipeline que desmonta o XBE e gera os arquivos `.c` |
| `switch/build.sh` | Compila o código gerado em um `.nro` executável no Switch |

---

## 🛠️ Pré-requisitos para Instalar no Windows

1. **Python 3.10 ou superior**:
   - Baixe no [python.org](https://www.python.org/downloads/) (marque a opção *"Add Python to PATH"* ao instalar).
   - Instale a biblioteca Capstone no terminal:
     ```powershell
     pip install capstone
     ```

2. **Git**:
   - Baixe no [git-scm.com](https://git-scm.com/download/win).

3. **CMake 3.20+**:
   - Baixe no [cmake.org](https://cmake.org/download/).

4. **Para compilar para Switch (devkitPro)**:
   - Instale o **devkitPro Pacman**: [devkitpro.org/wiki/Getting_Started](https://devkitpro.org/wiki/Getting_Started)
   - Instale os pacotes do Switch:
     ```bash
     dkp-pacman -S switch-dev libnx switch-sdl2 switch-mesa switch-glad
     ```

---

## 🚀 Passo a Passo para Executar

### 1. Clonar o toolkit `xboxrecomp`
No terminal, dentro da pasta do projeto `mksm-sw`:
```powershell
git clone https://github.com/sp00nznet/xboxrecomp.git xboxrecomp
```

### 2. Colocar o seu `default.xbe`
Crie a pasta `game` e copie o `default.xbe` do seu MK Shaolin Monks para dentro dela:
```text
mksm-sw/
└── game/
    └── default.xbe
```

### 3. Executar o Pipeline de Recompilação (Gerar o código C)
No Windows PowerShell:
```powershell
.\tools\regen.ps1
```
*(Ou no Linux / WSL: `bash tools/regen.sh`)*

Isso irá:
- Analisar o XBE (`mksm_analysis.json`)
- Desmontar as instruções x86
- Descobrir convenções de chamada (ABI)
- Gerar dezenas de arquivos C contendo o código traduzido em `src/recomp/gen/`

### 4. Ajustar o Entry Point em `src/main.c`
Abra o arquivo `game/mksm_analysis.json` gerado e procure por `"entry_point"`.
Abra `src/main.c` e atualize a linha:
```c
#define MKSM_ENTRY_POINT 0x00XXXXXXu
```

### 5. Compilar para Nintendo Switch
Com o ambiente devkitPro configurado:
```bash
bash switch/build.sh
```
O executável final estará em: `build-switch/mksm.nro`.

### 6. Instalar no Nintendo Switch
Copie para o cartão microSD:
```text
sdmc:/switch/mksm/mksm.nro
sdmc:/switch/mksm/game/ (coloque os arquivos de dados do jogo extraídos aqui)
```
Abra o Homebrew Launcher no Switch (em modo Title Override, segurando R em um jogo) e execute o MK Shaolin Monks!
