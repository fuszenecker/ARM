SECTIONS {
    . = 0;
    .text : {
        s_text = .;
        *(.text)
        e_text = .;
        
        s_rodata = .;
        *(.rodata)
        e_rodata = .;
        
        s_data_lma = .;
    }
    
    
    . = 0x20000000;
    .data : AT(s_data_lma) {
        *(.data)
    }
    
    .bss (NOLOAD) : {
        *(.bss)
        *(.stack)
    }
}

