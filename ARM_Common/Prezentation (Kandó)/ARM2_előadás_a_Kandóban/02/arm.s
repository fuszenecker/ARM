	.org 	0
	.global	_start
	.func	_start

_start:
reset:		b	start
undefined:	b	.
swi:		b	swi_handler
prefetch_abort:	b	.
data_abort:	b	.
__unused__:	nop
irq:		b	irq_handler
fiq:		b	fiq_handler

	.org	0x100

start:
		nop
		mov	r0, #0x1000
		mov	r11, #0
		mov	sp, #0x20000000
		add	sp, #0x10000
		sub	sp, #4
		b 	main

irq_handler:
		b	.

fiq_handler:
		b	.

swi_handler:
		b	.
