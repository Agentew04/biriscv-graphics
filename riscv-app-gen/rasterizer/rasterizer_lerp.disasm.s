
rasterizer/rasterizer_lerp.elf:	file format elf32-littleriscv

Disassembly of section .text:

80000000 <main>:
80000000: fd010113     	addi	sp, sp, -0x30
80000004: 02812623     	sw	s0, 0x2c(sp)
80000008: 02912423     	sw	s1, 0x28(sp)
8000000c: 03212223     	sw	s2, 0x24(sp)
80000010: 03312023     	sw	s3, 0x20(sp)
80000014: 01412e23     	sw	s4, 0x1c(sp)
80000018: 01512c23     	sw	s5, 0x18(sp)
8000001c: 01612a23     	sw	s6, 0x14(sp)
80000020: 01712823     	sw	s7, 0x10(sp)
80000024: 01812623     	sw	s8, 0xc(sp)
80000028: 00000513     	li	a0, 0x0
8000002c: 800015b7     	lui	a1, 0x80001
80000030: 00058593     	mv	a1, a1
80000034: 00001737     	lui	a4, 0x1
80000038: ffffa7b7     	lui	a5, 0xffffa
8000003c: ff90c837     	lui	a6, 0xff90c
80000040: 000078b7     	lui	a7, 0x7
80000044: ffff62b7     	lui	t0, 0xffff6
80000048: 31e71337     	lui	t1, 0x31e71
8000004c: 0f0f63b7     	lui	t2, 0xf0f6
80000050: ff000637     	lui	a2, 0xff000
80000054: 00ff06b7     	lui	a3, 0xff0
80000058: 00010e37     	lui	t3, 0x10
8000005c: 0000deb7     	lui	t4, 0xd
80000060: 00006f37     	lui	t5, 0x6
80000064: 40570713     	addi	a4, a4, 0x405
80000068: 45c78793     	addi	a5, a5, 0x45c
8000006c: 6a980813     	addi	a6, a6, 0x6a9
80000070: fa988893     	addi	a7, a7, -0x57
80000074: bd728293     	addi	t0, t0, -0x429
80000078: 95d30313     	addi	t1, t1, -0x6a3
8000007c: 40038393     	addi	t2, t2, 0x400
80000080: f00e0e13     	addi	t3, t3, -0x100
80000084: c33e8e93     	addi	t4, t4, -0x3cd
80000088: 59af0f13     	addi	t5, t5, 0x59a
8000008c: 10000f93     	li	t6, 0x100
80000090: 00058413     	mv	s0, a1
80000094: 0200006f     	j	0x800000b4 <main+0xb4>
80000098: 00150513     	addi	a0, a0, 0x1
8000009c: f3370713     	addi	a4, a4, -0xcd
800000a0: 40040413     	addi	s0, s0, 0x400
800000a4: f9978793     	addi	a5, a5, -0x67
800000a8: 01e80833     	add	a6, a6, t5
800000ac: f9a88893     	addi	a7, a7, -0x66
800000b0: 09f50463     	beq	a0, t6, 0x80000138 <main+0x138>
800000b4: 00a51493     	slli	s1, a0, 0xa
800000b8: 40e28933     	sub	s2, t0, a4
800000bc: 00b484b3     	add	s1, s1, a1
800000c0: 00891993     	slli	s3, s2, 0x8
800000c4: 40048493     	addi	s1, s1, 0x400
800000c8: 41390933     	sub	s2, s2, s3
800000cc: 02693933     	mulhu	s2, s2, t1
800000d0: 00d95913     	srli	s2, s2, 0xd
800000d4: 00088993     	mv	s3, a7
800000d8: 00080a13     	mv	s4, a6
800000dc: 00078a93     	mv	s5, a5
800000e0: 00040b13     	mv	s6, s0
800000e4: 01c0006f     	j	0x80000100 <main+0x100>
800000e8: 017b2023     	sw	s7, 0x0(s6)
800000ec: 004b0b13     	addi	s6, s6, 0x4
800000f0: 0cda8a93     	addi	s5, s5, 0xcd
800000f4: 01da0a33     	add	s4, s4, t4
800000f8: f3398993     	addi	s3, s3, -0xcd
800000fc: f89b0ee3     	beq	s6, s1, 0x80000098 <main+0x98>
80000100: 00038b93     	mv	s7, t2
80000104: ff5042e3     	bgtz	s5, 0x800000e8 <main+0xe8>
80000108: 00038b93     	mv	s7, t2
8000010c: fd304ee3     	bgtz	s3, 0x800000e8 <main+0xe8>
80000110: 00038b93     	mv	s7, t2
80000114: fc574ae3     	blt	a4, t0, 0x800000e8 <main+0xe8>
80000118: 026a3bb3     	mulhu	s7, s4, t1
8000011c: 00dbdb93     	srli	s7, s7, 0xd
80000120: cafe         	<unknown>
80000122: cafe         	<unknown>
80000124: 0ffbfb93     	andi	s7, s7, 0xff
80000128: 00090c13     	mv	s8, s2
8000012c: cafe         	<unknown>
8000012e: cafe         	<unknown>
80000130: 0ffc7b93     	andi	s7, s8, 0xff
80000134: fb5ff06f     	j	0x800000e8 <main+0xe8>
80000138: 00000513     	li	a0, 0x0
8000013c: 02c12403     	lw	s0, 0x2c(sp)
80000140: 02812483     	lw	s1, 0x28(sp)
80000144: 02412903     	lw	s2, 0x24(sp)
80000148: 02012983     	lw	s3, 0x20(sp)
8000014c: 01c12a03     	lw	s4, 0x1c(sp)
80000150: 01812a83     	lw	s5, 0x18(sp)
80000154: 01412b03     	lw	s6, 0x14(sp)
80000158: 01012b83     	lw	s7, 0x10(sp)
8000015c: 00c12c03     	lw	s8, 0xc(sp)
80000160: 03010113     	addi	sp, sp, 0x30
80000164: 00008067     	ret
