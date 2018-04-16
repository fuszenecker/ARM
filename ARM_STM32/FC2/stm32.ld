MEMORY
{
    FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x4000
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x2000
}

/* Section Definitions */
SECTIONS
{
    .text :
    {
        . = 0;
        _pointers = .;
        *(.stack_pointer)

        . = 4;
        _vectors = .;
        *(.vectors)

        . = ALIGN(4);
        _text = .;
        *(.text .text.*)
        _etext = .;

        . = ALIGN(4);
        _rodata = .;
        *(.rodata .rodata*)
        _erodata = .;
    } > FLASH

    .ARM.exidx :
    {
        . = ALIGN(4);
        _ARM_exidx = .;
        *(.ARM.exidx .ARM.exidx.*)
        __aeabi_unwind_cpp_pr0 = .;
        __aeabi_unwind_cpp_pr1 = .;
        _eARM_exidx = .;
    } > FLASH
   
    .data : AT (_etext)
    {
        . = ALIGN(4);
        _data = .;
        *(.data .data.*)
        _edata = .;
    } > SRAM
 
    .bss (NOLOAD) :
    {
        . = ALIGN(4);
        _bss = . ;
        *(.bss .bss.*)
        _ebss = .;
    } > SRAM
  
    .stack (NOLOAD) :
    {
        . = ALIGN(4);
        _stack = .;
        *(.stack)
        . = ALIGN(4);
        _estack = .;
    } > SRAM
  
    . = ALIGN(4);
    _end = .;
}
