    .text
    .align	4
    .global	_init
    .type	_init, %function
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
    nop
    ldr     pc, [pc, #-0xFF0]
    b       _stop

_stop:
    b       _stop
