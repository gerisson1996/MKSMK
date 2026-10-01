# Mortal Kombat: Shaolin Monks — Nintendo Switch Port (Static Recompilation)

Port nativo de recompilação estática do **Mortal Kombat: Shaolin Monks** (Xbox Original) para o **Nintendo Switch**.

---

## 🎮 Estrutura dos Arquivos Gerados

- **Executável Switch Homebrew:** [`build-switch/mksm.nro`](file:///C:/Users/geris/.gemini/antigravity/scratch/mksm-sw/build-switch/mksm.nro) (~27.8 MB)
- **Binário ELF (Debug / Símbolos):** [`build-switch/mksm_recomp.elf`](file:///C:/Users/geris/.gemini/antigravity/scratch/mksm-sw/build-switch/mksm_recomp.elf) (~102.4 MB)
- **Código C Recompilado:** [`src/recomp/gen/`](file:///C:/Users/geris/.gemini/antigravity/scratch/mksm-sw/src/recomp/gen) (51 módulos C, 2.007.636 linhas de código traduzidas, 25.376 funções)

---

## 🕹️ Como Rodar no Nintendo Switch (Console Real ou Emulador)

### 1. No Console Nintendo Switch (Atmosphere / CFW)
1. No seu cartão microSD, crie a pasta:
   ```
   sdmc:/switch/mksm/
   ```
2. Copie o arquivo [`mksm.nro`](file:///C:/Users/geris/.gemini/antigravity/scratch/mksm-sw/build-switch/mksm.nro) para `sdmc:/switch/mksm/mksm.nro`.
3. Extraia todos os arquivos do jogo do Xbox (incluindo o `default.xbe`, pastas de áudio, vídeos, texturas e modelos `.xbx`/`.geo`) e coloque-os dentro da pasta `sdmc:/switch/mksm/`.
4. Abra o **Homebrew Menu** no Nintendo Switch (segurando `R` ao abrir qualquer jogo para ter acesso à memória total / Title Redirection).
5. Selecione **MK: Shaolin Monks** e divirta-se!

### 2. No Emulador de Nintendo Switch (Ryujinx / Yuzu / Sudachi)
1. Abra o emulador.
2. Carregue o arquivo [`build-switch/mksm.nro`](file:///C:/Users/geris/.gemini/antigravity/scratch/mksm-sw/build-switch/mksm.nro).
3. Certifique-se de que os dados do jogo (`default.xbe` e pastas de assets) estejam na pasta correspondente do emulador (`sdcard/switch/mksm/`).

---

## ⚙️ Como recompilar futuramente

Para compilar novamente após alterações no código:
```powershell
& "C:\devkitPro\msys2\usr\bin\bash.exe" -l -c "cd '/c/Users/geris/.gemini/antigravity/scratch/mksm-sw' && ninja -C build-switch && elf2nro build-switch/mksm_recomp.elf build-switch/mksm.nro --name='MK: Shaolin Monks' --author='Antigravity Port' --version='1.0.0'"
```
