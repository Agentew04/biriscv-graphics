	.attribute	4, 16
	.attribute	5, "rv32i2p1_m2p0_zmmul1p0"
	.file	"rasterizer_lerp.c"
	.text
	.globl	main                            # -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   # @main
# %bb.0:
	addi	sp, sp, -48
	sw	s0, 44(sp)                      # 4-byte Folded Spill
	sw	s1, 40(sp)                      # 4-byte Folded Spill
	sw	s2, 36(sp)                      # 4-byte Folded Spill
	sw	s3, 32(sp)                      # 4-byte Folded Spill
	sw	s4, 28(sp)                      # 4-byte Folded Spill
	sw	s5, 24(sp)                      # 4-byte Folded Spill
	sw	s6, 20(sp)                      # 4-byte Folded Spill
	sw	s7, 16(sp)                      # 4-byte Folded Spill
	sw	s8, 12(sp)                      # 4-byte Folded Spill
	li	a0, 0
	lui	a1, %hi(buffer)
	addi	a1, a1, %lo(buffer)
	lui	a4, 1
	lui	a5, 1048570
	lui	a6, 1046796
	lui	a7, 7
	lui	t0, 1048566
	lui	t1, 204401
	lui	t2, 61686
	lui	a2, 1044480
	lui	a3, 4080
	lui	t3, 16
	lui	t4, 13
	lui	t5, 6
	addi	a4, a4, 1029
	addi	a5, a5, 1116
	addi	a6, a6, 1705
	addi	a7, a7, -87
	addi	t0, t0, -1065
	addi	t1, t1, -1699
	addi	t2, t2, 1024
	addi	t3, t3, -256
	addi	t4, t4, -973
	addi	t5, t5, 1434
	li	t6, 256
	mv	s0, a1
	j	.LBB0_2
.LBB0_1:                                #   in Loop: Header=BB0_2 Depth=1
	addi	a0, a0, 1
	addi	a4, a4, -205
	addi	s0, s0, 1024
	addi	a5, a5, -103
	add	a6, a6, t5
	addi	a7, a7, -102
	beq	a0, t6, .LBB0_8
.LBB0_2:                                # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_4 Depth 2
	slli	s1, a0, 10
	sub	s2, t0, a4
	add	s1, s1, a1
	slli	s3, s2, 8
	addi	s1, s1, 1024
	sub	s2, s2, s3
	mulhu	s2, s2, t1
	srli	s2, s2, 13
	mv	s3, a7
	mv	s4, a6
	mv	s5, a5
	mv	s6, s0
	j	.LBB0_4
.LBB0_3:                                #   in Loop: Header=BB0_4 Depth=2
	sw	s7, 0(s6)
	addi	s6, s6, 4
	addi	s5, s5, 205
	add	s4, s4, t4
	addi	s3, s3, -205
	beq	s6, s1, .LBB0_1
.LBB0_4:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	mv	s7, t2
	bgtz	s5, .LBB0_3
# %bb.5:                                #   in Loop: Header=BB0_4 Depth=2
	mv	s7, t2
	bgtz	s3, .LBB0_3
# %bb.6:                                #   in Loop: Header=BB0_4 Depth=2
	mv	s7, t2
	blt	a4, t0, .LBB0_3
# %bb.7:                                #   in Loop: Header=BB0_4 Depth=2
	mulhu	s7, s4, t1
	srli	s7, s7, 13
	#APP
	.word	3405695742
	#NO_APP	#lerp s7 a2 a3
	andi	s7, s7, 255
	mv	s8, s2
	#APP
	.word	3405695742
	#NO_APP	#lerp s8 s7 t3
	andi	s7, s8, 255
	j	.LBB0_3
.LBB0_8:
	li	a0, 0
	lw	s0, 44(sp)                      # 4-byte Folded Reload
	lw	s1, 40(sp)                      # 4-byte Folded Reload
	lw	s2, 36(sp)                      # 4-byte Folded Reload
	lw	s3, 32(sp)                      # 4-byte Folded Reload
	lw	s4, 28(sp)                      # 4-byte Folded Reload
	lw	s5, 24(sp)                      # 4-byte Folded Reload
	lw	s6, 20(sp)                      # 4-byte Folded Reload
	lw	s7, 16(sp)                      # 4-byte Folded Reload
	lw	s8, 12(sp)                      # 4-byte Folded Reload
	addi	sp, sp, 48
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        # -- End function
	.type	buffer,@object                  # @buffer
	.bss
	.globl	buffer
	.p2align	2, 0x0
buffer:
	.zero	262144
	.size	buffer, 262144

	.ident	"clang version 20.1.8"
	.section	".note.GNU-stack","",@progbits
	.addrsig
