#!/usr/bin/env python3
from typing import Optional

#
# Autor: Joao Vitor Belmonte Rates
#
# Troca instrucoes customizadas no assembly gerado pelas suas
# representacoes binarias equivalentes.
#


OPCODE_CUSTOM0 = b'0001011' # 0x0B
REGISTERS_MAP = {
    "0":    b'00000',
    "zero": b'00000',
    "ra":   b'00001',
    "sp":   b'00010',
    "gp":   b'00011',
    "tp":   b'00100',
    "t0":   b'00101',
    "t1":   b'00110',
    "t2":   b'00111',
    "s0":   b'01000',
    "s1":   b'01001',
    "a0":   b'01010',
    "a1":   b'01011',
    "a2":   b'01100',
    "a3":   b'01101',
    "a4":   b'01110',
    "a5":   b'01111',
    "a6":   b'10000',
    "a7":   b'10001',
    "s2":   b'10010',
    "s3":   b'10011',
    "s4":   b'10100',
    "s5":   b'10101',
    "s6":   b'10110',
    "s7":   b'10111',
    "s8":   b'11000',
    "s9":   b'11001',
    "s10":  b'11010',
    "s11":  b'11011',
    "t3":   b'11100',
    "t4":   b'11101',
    "t5":   b'11110',
    "t6":   b'11111',
}

# MUST CONTAIN # IN NAME
INSTRUCTION_MAP = {
    # jeito macaco de considerar a mesma instrucao, mas funciona :)
    "#pack.xy": (b'0001100', b'000', OPCODE_CUSTOM0), # func7, func3, opcode
    "#pack.xz": (b'0001010', b'000', OPCODE_CUSTOM0), # func7, func3, opcode
    "#pack.xw": (b'0001001', b'000', OPCODE_CUSTOM0), # func7, func3, opcode
    "#pack.yz": (b'0000110', b'000', OPCODE_CUSTOM0), # func7, func3, opcode
    "#pack.yw": (b'0000101', b'000', OPCODE_CUSTOM0), # func7, func3, opcode
    "#pack.zw": (b'0000011', b'000', OPCODE_CUSTOM0), # func7, func3, opcode
    #signed unpack
    "#unpack.s.x": (b'1001000', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#unpack.s.y": (b'1000100', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#unpack.s.z": (b'1000010', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#unpack.s.w": (b'1000001', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    #unsigned unpack
    "#unpack.u.x": (b'0001000', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#unpack.u.y": (b'0000100', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#unpack.u.z": (b'0000010', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#unpack.u.w": (b'0000001', b'001', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#lerp4": (b'0000000', b'010', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#dot4": (b'0000000', b'011', OPCODE_CUSTOM0),  # func7, func3, opcode
    "#add4.sat": (b'0000000', b'100', OPCODE_CUSTOM0),  # func7, func3, opcode
}

def encode_r_type(func7: int, rs2: int, rs1: int, func3: int, rd: int, opcode: int):
    instruction = (func7 << 25) | (rs2 << 20) | (rs1 << 15) | func3 | rd | opcode
    return instruction



def encoder(instruction: str, rd: str, rs1: str, rs2: str) -> Optional[int]:
    try:
        func7, func3, opcode = INSTRUCTION_MAP.get(instruction)
    except TypeError:
        print("Error: Instruction not found:", instruction)
        return None
    rs1_num = REGISTERS_MAP.get(rs1)
    rs2_num = REGISTERS_MAP.get(rs2)
    rd_num = REGISTERS_MAP.get(rd)
    print(f"Encoding: func7={func7}, func3={func3}, opcode={opcode}, rs1={rs1_num}, rs2={rs2_num}, rd={rd_num}")
    return encode_r_type(func7, rs2_num, rs1_num, func3, rd_num, opcode)

def replace(lines: list[str]) -> str:
    try:
        instr, rd, rs1, rs2 = lines[-1].strip().split()[1:]  # Skip the #APP line
    except ValueError:
        print("Error: Invalid instruction format in lines:", lines, "parts:", lines[-1].strip().split())
        return "".join(lines)
    encoded: bytes = encoder(instr, rd, rs1, rs2)
    try:
        value = int(encoded, 2)
    except TypeError:
        print("Error: Encoding failed for instruction:", instr, rd, rs1, rs2)
        return "".join(lines)
    print("Replacing instruction:", instr, rd, rs1, rs2, "with value:", f"0x{value:08x}")
    return f"\t.word 0x{value:08x} " + f"# {instr} {rd} {rs1} {rs2}\n"

def replace_file(input_file: str, output_file: str):
    BUFFER_OUTPUT = []
    TMP_STACK = []

    with open(input_file, 'r') as infile:
        INPUT_LINES = infile.readlines()
    
    iter_line = INPUT_LINES.__iter__()

    try:
        while  line := iter_line.__next__():
            if line.strip().startswith("#APP"):
                while  line := iter_line.__next__():
                    TMP_STACK.append(line)
                    if line.strip().startswith("#NO_APP"):
                        break
                    print("Apending:", line, " to stack")
                
                print("Stack:" , TMP_STACK)
                replaced_buffer = replace(TMP_STACK)
                TMP_STACK.clear()
                BUFFER_OUTPUT.append(replaced_buffer)
            else:
                BUFFER_OUTPUT.append(line)
    except StopIteration:
        print("End of file reached")    
        
    with open(output_file, 'w') as outfile:
        outfile.writelines(BUFFER_OUTPUT)
        

if __name__ == "__main__":
    import sys
    if len(sys.argv) != 3:
        print("Usage: pre_assembler.py <input_file> <output_file>")
        sys.exit(1)
    
    input_file = sys.argv[1]
    output_file = sys.argv[2]

    replace_file(input_file, output_file)

