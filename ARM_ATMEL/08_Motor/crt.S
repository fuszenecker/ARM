	.text
	.align	4
	.global	_start
    .type	_start, %function

    .org    0

_init:
_start:
    b       main
    b       _stop
    b       _stop
    b       _stop
    b       _stop
    b       _stop
    b       irq
    b       irq

_stop:
    b       _stop

