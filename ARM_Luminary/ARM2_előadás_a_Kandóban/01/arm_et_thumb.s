	.arm
	.org 	0

_start:
	mov	r0, #0x1000
	bl	arm_func
	ldr	r1, [pc, #4]
	blx	r1
ide:	b	ide

thumb_func_addr:
	.long	thumb_func + 1

	.arm
arm_func:
	mov	r7, #128
	add	r2, r7, #4
	mul	r2, r1, r0
	mov	r1, r7

	add	r3, r6, r7, lsr #3
	ldr	r3, [r7], #4
	ldr	r2, [r7, #5]!

	smlal	r1, r2, r3, r4

	bx 	lr

	.short	. - arm_func

	.thumb
thumb_func:
	mov	r7, #128
	add 	r2, r7, #4
	mul	r2, r1
	mov 	r1, r7

#	add	r3, r6, r7, lsr #3
	lsr	r7, #3
	add	r3, r6, r7

#	ldr	r3, [r7], #4
	ldr	r3, [r7]
	add	r7, #4

#	ldr	r2, [r7, #5]!
	add	r7, #5
	ldr	r2, [r7]

	smlal	r1, r2, r3, r4

	bx 	lr

	.short	. - thumb_func

	.arm
	nop
