import sys
import math

def load_hex_dump(path):
    print(f"Carregando memoria de {path}")
    mem = bytearray()
    base_addr = 0

    with open(path, 'r') as f:
        for line in f:
            line = line.strip()
            if not line:
                continue

            # Linha tipo "// 0x00000000"
            if line.startswith("//"):
                # Atualiza base, mas não importa pra montagem linear
                base_addr = int(line.split()[1], 16)
                # Ajusta tamanho do array se necessário
                if base_addr > len(mem):
                    mem.extend(b"\x00" * (base_addr - len(mem)))
                continue

            # Linha com hex bytes (cada 8 bytes -> 8 chars)
            # Ex: 00112e230f0f6400
            chunk = bytes.fromhex(line)
            mem.extend(chunk)

    return mem


def extract_rgba_to_ppm(mem, start_addr, size, out_path):
    # pega range
    end = start_addr + size
    buf = mem[start_addr:end]

    if(size % 4 != 0):
        print("Tamanho não é múltiplo de 4 bytes!")
        sys.exit(1)
        return
    
    pixel_count = size // 4
    side = int(math.isqrt(pixel_count))

    print(f"Extraindo imagem de {start_addr:#x} a {end:#x} ({size} bytes) para {out_path}. Assumindo {side}x{side} pixels.")

    # cada pixel = 4 bytes RGBA
    if len(buf) != side * side * 4 or len(buf) != pixel_count*4:
        print("Tamanho inválido para imagem quadrada! Certifique-se que tamanho atende restricao: M=N*N*4, N:=+int")
        sys.exit(1)
        return

    # monta imagem RGB (descarta A)
    rgb = bytearray()
    for i in range(0, len(buf), 4):
        r = buf[i]
        g = buf[i+1]
        b = buf[i+2]
        # a ignorado
        rgb.extend([r, g, b])

    # escreve PPM binário (P6)
    with open(out_path, "wb") as f:
        header = f"P6\n{side} {side}\n255\n".encode()
        f.write(header)
        f.write(rgb)


def main():
    if len(sys.argv) != 5:
        print("uso: python hex_to_ppm.py input.hex start_hex size output.ppm")
        return

    path = sys.argv[1]
    start = int(sys.argv[2], 16)
    size = int(sys.argv[3])
    out_path = sys.argv[4]

    mem = load_hex_dump(path)
    extract_rgba_to_ppm(mem, start, size, out_path)


if __name__ == "__main__":
    main()
