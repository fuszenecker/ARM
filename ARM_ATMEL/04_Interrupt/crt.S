	.text
	.align	4
	.global	_start
    .type	_start, %function

    .org    0

_init:
_start:
_reset:
    b       _reset

_undefined_instruction:
    b       _undefined_instruction

_swi:
    b       _swi

_prefetch_abort:
    b       _prefetch_abort

_data_abort:
    b       _data_abort

_reserved:
    b       _reserved

_irq:
    b       irq

_fiq:
    b       irq

    .org    0x20

_endless:
    b       _endless

    .org    0x40

_c_start_up:
    mov     r0, #0xd1
    msr     cpsr, r0
	mov     sp, #0x200000
	add     sp, sp, #4096

    mov     r0, #0xd2
    msr     cpsr, r0
	mov     sp, #0x200000
	add     sp, sp, #6144

    mov     r0, #0xd3
    msr     cpsr, r0
	mov     sp, #0x200000
	add     sp, sp, #8192

	b	    main

