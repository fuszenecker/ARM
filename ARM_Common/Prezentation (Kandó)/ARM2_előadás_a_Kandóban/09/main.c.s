	.syntax unified
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 44, 1
	.file	"main.c.ll"
	.section	.debug_info,"",%progbits
.Lsection_info:
	.section	.debug_abbrev,"",%progbits
.Lsection_abbrev:
	.section	.debug_aranges,"",%progbits
	.section	.debug_macinfo,"",%progbits
	.section	.debug_line,"",%progbits
.Lsection_line:
	.section	.debug_loc,"",%progbits
	.section	.debug_pubnames,"",%progbits
	.section	.debug_pubtypes,"",%progbits
	.section	.debug_str,"",%progbits
.Lsection_str:
	.section	.debug_ranges,"",%progbits
.Ldebug_range:
	.section	.debug_loc,"",%progbits
.Lsection_debug_loc:
	.text
.Ltext_begin:
	.data
	.file	1 "/home/fuszenecker/Prezentation/ARM2_el\305\221ad\303\241s_a_Kand\303\263ban/09/main.c"
	.text
	.globl	systick_handler
	.align	2
	.type	systick_handler,%function
	.code	16                      @ @systick_handler
	.thumb_func
systick_handler:
.Lfunc_begin0:
	.loc	1 17 0
@ BB#0:                                 @ %entry
	.loc	1 18 2
	str	lr, [sp, #-4]!          @ main.c:18:2
	movw	r0, :lower16:pin_data   @ main.c:18:2
	movt	r0, :upper16:pin_data   @ main.c:18:2
	ldr	r1, [r0]                @ main.c:18:2
	rsb.w	r1, r1, #8              @ main.c:18:2
	str	r1, [r0]                @ main.c:18:2
	.loc	1 19 2
	ldr	r0, [r0]                @ main.c:19:2
	uxtb	r2, r0                  @ main.c:19:2
	mov.w	r0, #1073758208
	movs	r1, #8
	bl	GPIOPinWrite            @ main.c:19:2
	.loc	1 20 2
	movw	r0, :lower16:counter    @ main.c:20:2
	movt	r0, :upper16:counter    @ main.c:20:2
	ldr	r1, [r0]                @ main.c:20:2
	adds	r1, #1                  @ main.c:20:2
	str	r1, [r0]                @ main.c:20:2
	.loc	1 21 1
	ldr	lr, [sp], #4            @ main.c:21:1
	bx	lr                      @ main.c:21:1
.Ltmp0:
.Ltmp1:
	.size	systick_handler, .Ltmp1-systick_handler
.Lfunc_end0:

	.globl	main
	.align	2
	.type	main,%function
	.code	16                      @ @main
	.thumb_func
main:
.Lfunc_begin1:
	.loc	1 24 0
@ BB#0:                                 @ %entry
	.loc	1 26 2
	push	{r4, lr}                @ main.c:26:2
.Ltmp2:
	@DEBUG_VALUE: c <- 0+0          @ main.c:38:2
	movw	r0, :lower16:pin_data   @ main.c:26:2
	movs	r4, #0
	movt	r0, :upper16:pin_data   @ main.c:26:2
	str	r4, [r0]                @ main.c:26:2
	movs	r0, #1
	movt	r0, #8192
	.loc	1 28 2
	bl	SysCtlPeripheralEnable  @ main.c:28:2
	movs	r2, #4
	movs	r3, #9
	mov.w	r0, #1073758208
	movs	r1, #8
	.loc	1 29 2
	bl	GPIOPadConfigSet        @ main.c:29:2
	mov.w	r0, #1073758208
	movs	r1, #8
	.loc	1 30 2
	bl	GPIOPinTypeGPIOOutput   @ main.c:30:2
	movw	r0, #50880
	movt	r0, #45
	.loc	1 32 2
	bl	SysTickPeriodSet        @ main.c:32:2
	.loc	1 34 2
	bl	SysTickIntEnable        @ main.c:34:2
	.loc	1 35 2
	bl	SysTickEnable           @ main.c:35:2
	.loc	1 36 2
	bl	IntMasterEnable         @ main.c:36:2
	.loc	1 39 3
.Ltmp3:
	movw	r0, :lower16:counter    @ main.c:39:3
	movt	r0, :upper16:counter    @ main.c:39:3
.LBB1_1:                                @ %for.cond
                                        @ =>This Inner Loop Header: Depth=1
.Ltmp4:
	@DEBUG_VALUE: c <- 0+0
	ldr	r1, [r0]                @ main.c:39:3
	add	r1, r4
	str	r1, [r0]                @ main.c:39:3
	.loc	1 40 3
	@APP                            @ main.c:40:3
	wfi
	@NO_APP
.Ltmp5:
	.loc	1 38 15
	adds	r4, #1                  @ main.c:38:15
	b	.LBB1_1                 @ main.c:38:15
.Ltmp6:
.Ltmp7:
	.size	main, .Ltmp7-main
.Lfunc_end1:

	.type	pin_data,%object        @ @pin_data
	.comm	pin_data,4,4            @ @pin_data
	.type	counter,%object         @ @counter
	.comm	counter,4,4             @ @counter
.Ltext_end:
	.data
.Ldata_end:
	.text
.Lsection_end1:
	.section	.debug_info,"",%progbits
.Linfo_begin1:
	.long	284                     @ Length of Compilation Unit Info
	.short	2                       @ DWARF version number
	.long	.Labbrev_begin          @ Offset Into Abbrev. Section
	.byte	4                       @ Address Size (in bytes)
	.byte	1                       @ Abbrev [1] 0xb:0x111 DW_TAG_compile_unit
	.ascii	 "clang version 3.0 (trunk 129067)" @ DW_AT_producer
	.byte	0
	.short	12                      @ DW_AT_language
	.ascii	 "main.c"               @ DW_AT_name
	.byte	0
	.long	0                       @ DW_AT_entry_pc
	.long	.Lsection_line          @ DW_AT_stmt_list
	.ascii	 "/home/fuszenecker/Prezentation/ARM2_el\305\221ad\303\241s_a_Kand\303\263ban/09" @ DW_AT_comp_dir
	.byte	0
	.byte	1                       @ DW_AT_APPLE_optimized
	.byte	2                       @ Abbrev [2] 0x7c:0x1f DW_TAG_subprogram
	.ascii	 "systick_handler"      @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	17                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin0           @ DW_AT_low_pc
	.long	.Lfunc_end0             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	3                       @ Abbrev [3] 0x9b:0x7 DW_TAG_base_type
	.byte	5                       @ DW_AT_encoding
	.ascii	 "int"                  @ DW_AT_name
	.byte	0
	.byte	4                       @ DW_AT_byte_size
	.byte	4                       @ Abbrev [4] 0xa2:0x32 DW_TAG_subprogram
	.long	212                     @ DW_AT_sibling
	.ascii	 "main"                 @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	24                      @ DW_AT_decl_line
	.long	155                     @ DW_AT_type
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin1           @ DW_AT_low_pc
	.long	.Lfunc_end1             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	5                       @ Abbrev [5] 0xbe:0x15 DW_TAG_lexical_block
	.long	.Lfunc_begin1           @ DW_AT_low_pc
	.long	.Ltmp6                  @ DW_AT_high_pc
	.byte	6                       @ Abbrev [6] 0xc7:0xb DW_TAG_variable
	.byte	99                      @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	25                      @ DW_AT_decl_line
	.long	155                     @ DW_AT_type
	.byte	1                       @ DW_AT_const_value
	.byte	0
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	3                       @ Abbrev [3] 0xd4:0x10 DW_TAG_base_type
	.byte	7                       @ DW_AT_encoding
	.ascii	 "unsigned int"         @ DW_AT_name
	.byte	0
	.byte	4                       @ DW_AT_byte_size
	.byte	7                       @ Abbrev [7] 0xe4:0x5 DW_TAG_volatile_type
	.long	212                     @ DW_AT_type
	.byte	8                       @ Abbrev [8] 0xe9:0x17 DW_TAG_variable
	.ascii	 "pin_data"             @ DW_AT_name
	.byte	0
	.long	228                     @ DW_AT_type
	.byte	1                       @ DW_AT_external
	.byte	1                       @ DW_AT_decl_file
	.byte	12                      @ DW_AT_decl_line
	.byte	5                       @ DW_AT_location
	.byte	3
	.long	pin_data
	.byte	7                       @ Abbrev [7] 0x100:0x5 DW_TAG_volatile_type
	.long	155                     @ DW_AT_type
	.byte	8                       @ Abbrev [8] 0x105:0x16 DW_TAG_variable
	.ascii	 "counter"              @ DW_AT_name
	.byte	0
	.long	256                     @ DW_AT_type
	.byte	1                       @ DW_AT_external
	.byte	1                       @ DW_AT_decl_file
	.byte	14                      @ DW_AT_decl_line
	.byte	5                       @ DW_AT_location
	.byte	3
	.long	counter
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ 4 extra padding bytes for GDB
	.byte	0
	.byte	0
	.byte	0
.Linfo_end1:
	.section	.debug_abbrev,"",%progbits
.Labbrev_begin:
	.byte	1                       @ Abbreviation Code
	.byte	17                      @ DW_TAG_compile_unit
	.byte	1                       @ DW_CHILDREN_yes
	.byte	37                      @ DW_AT_producer
	.byte	8                       @ DW_FORM_string
	.byte	19                      @ DW_AT_language
	.byte	5                       @ DW_FORM_data2
	.byte	3                       @ DW_AT_name
	.byte	8                       @ DW_FORM_string
	.byte	82                      @ DW_AT_entry_pc
	.byte	1                       @ DW_FORM_addr
	.byte	16                      @ DW_AT_stmt_list
	.byte	1                       @ DW_FORM_addr
	.byte	27                      @ DW_AT_comp_dir
	.byte	8                       @ DW_FORM_string
	.ascii	 "\341\177"             @ DW_AT_APPLE_optimized
	.byte	12                      @ DW_FORM_flag
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	2                       @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	8                       @ DW_FORM_string
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	63                      @ DW_AT_external
	.byte	12                      @ DW_FORM_flag
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	1                       @ DW_FORM_addr
	.byte	64                      @ DW_AT_frame_base
	.byte	10                      @ DW_FORM_block1
	.ascii	 "\347\177"             @ DW_AT_APPLE_omit_frame_ptr
	.byte	12                      @ DW_FORM_flag
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	3                       @ Abbreviation Code
	.byte	36                      @ DW_TAG_base_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	62                      @ DW_AT_encoding
	.byte	11                      @ DW_FORM_data1
	.byte	3                       @ DW_AT_name
	.byte	8                       @ DW_FORM_string
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	4                       @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	1                       @ DW_AT_sibling
	.byte	19                      @ DW_FORM_ref4
	.byte	3                       @ DW_AT_name
	.byte	8                       @ DW_FORM_string
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	63                      @ DW_AT_external
	.byte	12                      @ DW_FORM_flag
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	1                       @ DW_FORM_addr
	.byte	64                      @ DW_AT_frame_base
	.byte	10                      @ DW_FORM_block1
	.ascii	 "\347\177"             @ DW_AT_APPLE_omit_frame_ptr
	.byte	12                      @ DW_FORM_flag
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	5                       @ Abbreviation Code
	.byte	11                      @ DW_TAG_lexical_block
	.byte	1                       @ DW_CHILDREN_yes
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	1                       @ DW_FORM_addr
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	6                       @ Abbreviation Code
	.byte	52                      @ DW_TAG_variable
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	8                       @ DW_FORM_string
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	28                      @ DW_AT_const_value
	.byte	10                      @ DW_FORM_block1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	7                       @ Abbreviation Code
	.byte	53                      @ DW_TAG_volatile_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	8                       @ Abbreviation Code
	.byte	52                      @ DW_TAG_variable
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	8                       @ DW_FORM_string
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	63                      @ DW_AT_external
	.byte	12                      @ DW_FORM_flag
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	2                       @ DW_AT_location
	.byte	10                      @ DW_FORM_block1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	0                       @ EOM(3)
.Labbrev_end:
	.section	.debug_pubnames,"",%progbits
.Lset0 = .Lpubnames_end1-.Lpubnames_begin1 @ Length of Public Names Info
	.long	.Lset0
.Lpubnames_begin1:
	.short	2                       @ DWARF Version
	.long	.Linfo_begin1           @ Offset of Compilation Unit Info
.Lset1 = .Linfo_end1-.Linfo_begin1      @ Compilation Unit Length
	.long	.Lset1
	.long	233                     @ DIE offset
	.asciz	 "pin_data"             @ External Name
	.long	261                     @ DIE offset
	.asciz	 "counter"              @ External Name
	.long	162                     @ DIE offset
	.asciz	 "main"                 @ External Name
	.long	124                     @ DIE offset
	.asciz	 "systick_handler"      @ External Name
	.long	0                       @ End Mark
.Lpubnames_end1:
	.section	.debug_pubtypes,"",%progbits
.Lset2 = .Lpubtypes_end1-.Lpubtypes_begin1 @ Length of Public Types Info
	.long	.Lset2
.Lpubtypes_begin1:
	.short	2                       @ DWARF Version
	.long	.Linfo_begin1           @ Offset of Compilation Unit Info
.Lset3 = .Linfo_end1-.Linfo_begin1      @ Compilation Unit Length
	.long	.Lset3
	.long	0                       @ End Mark
.Lpubtypes_end1:
	.section	.debug_aranges,"",%progbits
	.section	.debug_ranges,"",%progbits
	.section	.debug_macinfo,"",%progbits

