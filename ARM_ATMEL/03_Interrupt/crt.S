	.text
	.align	4
	.global	_start
    .type	_start, %function

    .org    0

_init:
_start:
    b       _c_start_up
    b       _stop
    b       _stop
    b       _stop
    b       _stop
    b       _stop
    b       irq
    b       irq

_c_start_up:
    mov     r0, #0xd1
    msr     cpsr, r0
	mov     sp, #0x200000
	add     sp, sp, #4096

    mov     r0, #0xd2
    msr     cpsr, r0
	mov     sp, #0x200000
	add     sp, sp, #6144

    mov     r0, #0xdf
    msr     cpsr, r0
	mov     sp, #0x200000
	add     sp, sp, #8192

	b	    main

_irq_handler:
_fiq_handler:
    sub     lr, lr, #4
    stmdb   sp!, {lr}
    bl      irq
    ldmia   sp!, {pc}^

_stop:
    b       _stop

