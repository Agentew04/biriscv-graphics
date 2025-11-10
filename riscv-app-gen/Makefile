SRC ?= rasterizer/rasterizer_lerp.c
DIR := $(shell dirname $(SRC))

# funcoes que o compilador pode remover por causa do -O2
# adicionar __attribute__((noinline, used)) antes
# exemplo: 
# __attribute__((noinline, used))
# void bubbleSort(int arr[], int n) { ... }

# trocar gcc por clang com -target
CC = clang -target riscv32-unknown-elf -S
AS = llvm-mc -triple=riscv32-unknown-elf -filetype=obj
LINKER = ld.lld
CUSTOM_ASM = python3 pre_assembler.py

# ferramentas auxiliares sao prefixadas por 'llvm-'
OBJDUMP = llvm-objdump
READELF = llvm-readelf
OBJCOPY = llvm-objcopy

CFLAGS = -march=rv32im -mabi=ilp32 -O2

# adicionado -nostdlib para evitar erro do -lc -lm e -lclang_rt.builtins-riscv32
GCC_LDFLAGS = -T link.ld -nostdlib -e main

OBJ = $(SRC:.c=.o)
ELF = $(SRC:.c=.elf)
ASM = $(SRC:.c=.s)
ASM_C = $(SRC:.c=.sc)
DISASM =$(SRC:.c=.disasm.s)
BIN = $(SRC:.c=.bin)

# Regras
all: gcc_elf

info: $(ELF)
	$(READELF) -h $(ELF)

gcc_elf: $(SRC)
# compila .c -> .s
	$(CC) $(CFLAGS) -o $(ASM) $<
# substitui instrucoes customizadas no .s
	$(CUSTOM_ASM) $(ASM) $(ASM_C)
# monta .s -> .o
	$(AS) $(ASM_C) -o $(OBJ)
# linka .o -> .elf
	$(LINKER) $(GCC_LDFLAGS) $(OBJ) -o $(ELF) 
# .elf -> .bin
	$(OBJCOPY) $(ELF) -O binary $(BIN)
# .elf -> .disasm.s
	$(OBJDUMP) -d $(ELF) > $(DISASM)
# info do .elf
	$(READELF) -h $(ELF)

clean:
	@cd $(DIR) && rm -f *.o *.elf *.s *.bin

.PHONY: all clean info