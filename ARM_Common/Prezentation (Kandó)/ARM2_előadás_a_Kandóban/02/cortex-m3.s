	.org	0
	.thumb

stack_pointer:	.long	0x2000fffc
reset:		.long	_start + 1
nmi:		.long	nmi_handler + 1
hard_fault:	.long	0
mmu_fault:	.long	mmu_handler + 1
bus_fault:	.long	0
usage_fault:	.long	0
__unused_0__:	.long	0
__unused_1__:	.long	0
__unused_2__:	.long	0
__unused_3__:	.long	0
svc:		.long	svc_handler + 1
debug_monitor:	.long	0
__unused_4__:	.long	0
pendsv:		.long	0
systick:	.long	systick_handler + 1
irq0:		.long	irq0_handler + 1
irq1:		.long	irq1_handler + 1
# and so on...

	.balign	32

_start:
		bl	main
		b	_start

nmi_handler:	b	.
mmu_handler:	b	.
svc_handler:	b	.
systick_handler:b	.
irq0_handler:	b	.
irq1_handler:	b	.
