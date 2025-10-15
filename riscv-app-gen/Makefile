SRC ?= bubblesort/bubblesort.c
# funcoes que o compilador pode remover por causa do -O2
# adicionar __attribute__((noinline, used)) antes
# exemplo: 
# __attribute__((noinline, used))
# void bubbleSort(int arr[], int n) { ... }

# trocar gcc por clang com -target
CC = clang -target riscv32-unknown-elf

# ferramentas auxiliares sao prefixadas por 'llvm-'
OBJDUMP = llvm-objdump
READELF = llvm-readelf
OBJCOPY = llvm-objcopy

CFLAGS = -march=rv32im -mabi=ilp32

# adicionado -nostdlib para evitar erro do -lc -lm e -lclang_rt.builtins-riscv32
GCC_LDFLAGS = -T link.ld -nostartfiles -nostdlib -e main -O2

OBJ = $(SRC:.c=.o)
ELF = $(SRC:.c=.elf)
ASM = $(SRC:.c=.s)
BIN = $(SRC:.c=.bin)

# Regras
all: gcc_elf

info: $(ELF)
	$(READELF) -h $(ELF)

gcc_elf: $(SRC)
	$(CC) $(CFLAGS) $(GCC_LDFLAGS) -o $(ELF) $<
	$(OBJCOPY) -O binary $(ELF) $(BIN)
	$(OBJDUMP) -d $(ELF) > $(ASM)
	$(READELF) -h $(ELF)

clean:
	rm -f *.o *.elf *.s *.bin

.PHONY: all clean info