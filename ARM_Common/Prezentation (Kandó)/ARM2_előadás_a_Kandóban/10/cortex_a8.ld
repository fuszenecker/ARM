/* ---------------------------------------------------------------------------
 * Linker script file for ARM Cortex-M3 microcontrollers
 * ------------------------------------------------------------------------ */

MEMORY
{
    FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x40000
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x10000
}

/* Section Definitions */
SECTIONS
{
    /* Code and constant data */
    .text :
    {
	    _pointers = .;

        /* Pointers to Interrupt (including RESET) service routines */
	    *(.vectors)
    
        /* Code sections */
	    _text = .;
	    *(.text .text.*)

        /* Read-only data */
	    *(.rodata .rodata*)
	    _etext = .;
    } > FLASH
   
    /* Initialized data (read-write) */
    .data : AT (_etext)
    {
	    _data = .;
	    *(.data .data.*)
	    _edata = . ;
    } > SRAM
 
    /* Uninitialized data (heap memory + stack) */
    .bss (NOLOAD) :
    {
	    _bss = . ;
	    *(.bss .bss.*)
	    _ebss = . ;
    } > SRAM
  
    . = ALIGN(4);
    _end = . ;
    
    __aeabi_uidiv = .;
    __aeabi_unwind_cpp_pr1 = .;
    __aeabi_unwind_cpp_pr0 = .;

    . = 0x40000000;

    .ARM.exidx.vectors :
    {
        *(.ARM.exidx.vectors);
    }

    . = 0x41000000;

    .ARM.extab :
    {
        *(.ARM.extab);
    }

    . = 0x42000000;
    .ARM.exidx :
    {
        *(.ARM.exidx)
    }

    . = 0x43000000;
    vtable :
    {
    }


    /* Stack will be at the end of the RAM area */
}
