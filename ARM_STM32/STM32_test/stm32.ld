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
	_pointers = .;
	*(.stack_pointer)
	*(.vectors)
	_text = .;
	*(.text .text.*)
	*(.rodata .rodata*)
	_etext = .;
  } > FLASH
   
  .data : AT (_etext)
  {
	_data = .;
	*(.data .data.*)
	_edata = . ;
  } > SRAM
 
  .bss (NOLOAD) :
  {
	_bss = . ;
	*(.bss .bss.*)
	_ebss = . ;
  } > SRAM
  
  .stack (NOLOAD) :
  {
	. = ALIGN(4);
	_stack = . ;
	*(.stack)
	. = ALIGN(4);
	_estack = . ;
  } > SRAM
  
  . = ALIGN(4);
  _end = . ;
}
