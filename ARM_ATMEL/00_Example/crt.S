	.text
	.align	4
	.global	_start
    .type	_start, %function

_start:
	mov	sp, #2097152
	add	sp, sp, #8192
	b	main
	.size	init, .-init
	.ident	"GCC: (GNU) 4.0.3"
