import os, sys
from PIL import Image

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
WIDTH = 512
BG = (12, 6, 4)

im = Image.open(os.path.join(ROOT, "icon.jpg")).convert("RGBA")
im = im.resize((WIDTH, round(im.height * WIDTH / im.width)), Image.Resampling.LANCZOS)
bg = Image.new("RGBA", im.size, BG + (255,))
bg.alpha_composite(im)
px = list(bg.convert("RGB").getdata())
w, h = bg.size

runs = []
i = 0
while i < len(px):
    j = i
    while j + 1 < len(px) and px[j + 1] == px[i] and j + 1 - i < 255:
        j += 1
    runs.append((j - i + 1,) + px[i])
    i = j + 1

out = os.path.join(ROOT, "src", "mksm_logo.h")
with open(out, "w") as f:
    f.write("/* Generated from icon.jpg for MKSM loading screen */\n")
    f.write(f"#define MKSM_LOGO_W {w}\n#define MKSM_LOGO_H {h}\n")
    f.write(f"#define MKSM_LOGO_BG_R {BG[0]}\n#define MKSM_LOGO_BG_G {BG[1]}\n#define MKSM_LOGO_BG_B {BG[2]}\n")
    f.write(f"static const unsigned char k_mksm_logo_rle[{len(runs) * 4}] = {{\n")
    flat = [v for r in runs for v in r]
    for k in range(0, len(flat), 24):
        f.write("    " + ",".join(str(v) for v in flat[k:k + 24]) + ",\n")
    f.write("};\n")
print(f"Generated {out}: {w}x{h}, {len(runs)} runs")
