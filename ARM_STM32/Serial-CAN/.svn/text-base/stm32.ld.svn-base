/* ---------------------------------------------------------------------------
 * Linker script file for ARM Cortex-M3 microcontrollers
 * ------------------------------------------------------------------------ */

MEMORY {
    FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x20000
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x2000
}

/* Section Definitions */
SECTIONS {
    /* Code and constant data */
    .text : {
	    _pointers = .;

        /* Initial value of the stack pointer after RESET */
	    *(.stack_pointer)

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
    .data : AT (_etext) {
	    _data = .;
	    *(.data .data.*)
	    _edata = . ;
    } > SRAM
 
    /* Uninitialized data (heap memory + stack) */
    .bss (NOLOAD) : {
	    _bss = . ;
	    *(.bss .bss.*)
	    _ebss = . ;
    } > SRAM
  
    . = ALIGN(4);
    _end = . ;

    /* Stack will be at the end of the RAM area */
}
