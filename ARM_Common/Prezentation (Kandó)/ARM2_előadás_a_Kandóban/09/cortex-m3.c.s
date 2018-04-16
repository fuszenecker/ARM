	.syntax unified
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 44, 1
	.file	"cortex-m3.c.ll"
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
	.file	1 "/home/fuszenecker/Prezentation/ARM2_el\305\221ad\303\241s_a_Kand\303\263ban/09/cortex-m3.c"
	.text
	.globl	_start
	.align	2
	.type	_start,%function
	.code	16                      @ @_start
	.thumb_func
_start:
.Lfunc_begin0:
	.loc	1 42 0
@ BB#0:                                 @ %entry
	str	lr, [sp, #-4]!
.Ltmp0:
	@DEBUG_VALUE: p <- R2+0         @ cortex-m3.c:43:57
	movw	r0, :lower16:_data
	.loc	1 45 2
.Ltmp1:
	movw	r1, :lower16:_edata     @ cortex-m3.c:45:2
	movt	r0, :upper16:_data
.Ltmp2:
	@DEBUG_VALUE: q <- R0+0         @ cortex-m3.c:43:57
	movt	r1, :upper16:_edata     @ cortex-m3.c:45:2
	cmp	r0, r1                  @ cortex-m3.c:45:2
	bhi	.LBB0_3
@ BB#1:
.Ltmp3:
	@DEBUG_VALUE: q <- R0+0
	@DEBUG_VALUE: p <- R2+0
	movw	r2, :lower16:_etext
.Ltmp4:
	movt	r2, :upper16:_etext
.Ltmp5:
.LBB0_2:                                @ %for.inc
                                        @ =>This Inner Loop Header: Depth=1
	@DEBUG_VALUE: p <- R2+0
	ldr	r3, [r0], #4            @ cortex-m3.c:45:2
	str	r3, [r2], #4            @ cortex-m3.c:45:2
.Ltmp6:
	cmp	r0, r1                  @ cortex-m3.c:45:2
	bls	.LBB0_2
.LBB0_3:                                @ %for.cond5
                                        @ =>This Inner Loop Header: Depth=1
.Ltmp7:
	@DEBUG_VALUE: p <- R2+0
	.loc	1 48 3
	bl	main                    @ cortex-m3.c:48:3
.Ltmp8:
	b	.LBB0_3                 @ cortex-m3.c:48:3
.Ltmp9:
.Ltmp10:
	.size	_start, .Ltmp10-_start
.Lfunc_end0:

	.globl	nmi_handler
	.align	2
	.type	nmi_handler,%function
	.code	16                      @ @nmi_handler
	.thumb_func
nmi_handler:
.Lfunc_begin1:
	.loc	1 52 0
@ BB#0:                                 @ %entry
.LBB1_1:                                @ %for.cond
                                        @ =>This Inner Loop Header: Depth=1
	.loc	1 53 2
	b	.LBB1_1                 @ cortex-m3.c:53:2
.Ltmp11:
.Ltmp12:
	.size	nmi_handler, .Ltmp12-nmi_handler
.Lfunc_end1:

	.globl	hard_fault
	.align	2
	.type	hard_fault,%function
	.code	16                      @ @hard_fault
	.thumb_func
hard_fault:
.Lfunc_begin2:
	.loc	1 57 0
@ BB#0:                                 @ %entry
.LBB2_1:                                @ %for.cond
                                        @ =>This Inner Loop Header: Depth=1
	.loc	1 58 2
	b	.LBB2_1                 @ cortex-m3.c:58:2
.Ltmp13:
.Ltmp14:
	.size	hard_fault, .Ltmp14-hard_fault
.Lfunc_end2:

	.globl	mmu_handler
	.align	2
	.type	mmu_handler,%function
	.code	16                      @ @mmu_handler
	.thumb_func
mmu_handler:
.Lfunc_begin3:
	.loc	1 62 0
@ BB#0:                                 @ %entry
.LBB3_1:                                @ %for.cond
                                        @ =>This Inner Loop Header: Depth=1
	.loc	1 63 2
	b	.LBB3_1                 @ cortex-m3.c:63:2
.Ltmp15:
.Ltmp16:
	.size	mmu_handler, .Ltmp16-mmu_handler
.Lfunc_end3:

	.globl	svc_handler
	.align	2
	.type	svc_handler,%function
	.code	16                      @ @svc_handler
	.thumb_func
svc_handler:
.Lfunc_begin4:
	.loc	1 67 0
@ BB#0:                                 @ %entry
.LBB4_1:                                @ %for.cond
                                        @ =>This Inner Loop Header: Depth=1
	.loc	1 68 2
	b	.LBB4_1                 @ cortex-m3.c:68:2
.Ltmp17:
.Ltmp18:
	.size	svc_handler, .Ltmp18-svc_handler
.Lfunc_end4:

	.globl	irq0_handler
	.align	2
	.type	irq0_handler,%function
	.code	16                      @ @irq0_handler
	.thumb_func
irq0_handler:
.Lfunc_begin5:
	.loc	1 72 0
@ BB#0:                                 @ %entry
.LBB5_1:                                @ %for.cond
                                        @ =>This Inner Loop Header: Depth=1
	.loc	1 73 2
	b	.LBB5_1                 @ cortex-m3.c:73:2
.Ltmp19:
.Ltmp20:
	.size	irq0_handler, .Ltmp20-irq0_handler
.Lfunc_end5:

	.globl	irq1_handler
	.align	2
	.type	irq1_handler,%function
	.code	16                      @ @irq1_handler
	.thumb_func
irq1_handler:
.Lfunc_begin6:
	.loc	1 77 0
@ BB#0:                                 @ %entry
.LBB6_1:                                @ %for.cond
                                        @ =>This Inner Loop Header: Depth=1
	.loc	1 78 2
	b	.LBB6_1                 @ cortex-m3.c:78:2
.Ltmp21:
.Ltmp22:
	.size	irq1_handler, .Ltmp22-irq1_handler
.Lfunc_end6:

	.type	stack_pointer,%object   @ @stack_pointer
	.section	.stack_pointer,"aw",%progbits
	.globl	stack_pointer
	.align	2
stack_pointer:
	.long	536936444
	.size	stack_pointer, 4

	.type	vectors,%object         @ @vectors
	.section	.vectors,"aw",%progbits
	.globl	vectors
	.align	2
vectors:
	.long	_start
	.long	nmi_handler
	.long	hard_fault
	.long	mmu_handler
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	0
	.long	svc_handler
	.long	0
	.long	0
	.long	0
	.long	systick_handler
	.long	irq0_handler
	.long	irq1_handler
	.size	vectors, 68

	.text
.Ltext_end:
	.data
.Ldata_end:
	.text
.Lsection_end1:
	.section	.debug_info,"",%progbits
.Linfo_begin1:
	.long	462                     @ Length of Compilation Unit Info
	.short	2                       @ DWARF version number
	.long	.Labbrev_begin          @ Offset Into Abbrev. Section
	.byte	4                       @ Address Size (in bytes)
	.byte	1                       @ Abbrev [1] 0xb:0x1c3 DW_TAG_compile_unit
	.ascii	 "clang version 3.0 (trunk 129067)" @ DW_AT_producer
	.byte	0
	.short	12                      @ DW_AT_language
	.ascii	 "cortex-m3.c"          @ DW_AT_name
	.byte	0
	.long	0                       @ DW_AT_entry_pc
	.long	.Lsection_line          @ DW_AT_stmt_list
	.ascii	 "/home/fuszenecker/Prezentation/ARM2_el\305\221ad\303\241s_a_Kand\303\263ban/09" @ DW_AT_comp_dir
	.byte	0
	.byte	1                       @ DW_AT_APPLE_optimized
	.byte	2                       @ Abbrev [2] 0x81:0x3f DW_TAG_subprogram
	.long	192                     @ DW_AT_sibling
	.ascii	 "_start"               @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	42                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin0           @ DW_AT_low_pc
	.long	.Lfunc_end0             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	3                       @ Abbrev [3] 0x9b:0x24 DW_TAG_lexical_block
	.long	.Ltmp1                  @ DW_AT_low_pc
	.long	.Ltmp9                  @ DW_AT_high_pc
	.byte	4                       @ Abbrev [4] 0xa4:0xd DW_TAG_variable
	.byte	112                     @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	43                      @ DW_AT_decl_line
	.long	455                     @ DW_AT_type
.Lset0 = .Ldebug_loc0-.Lsection_debug_loc @ DW_AT_location
	.long	.Lset0
	.byte	4                       @ Abbrev [4] 0xb1:0xd DW_TAG_variable
	.byte	113                     @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	43                      @ DW_AT_decl_line
	.long	455                     @ DW_AT_type
.Lset1 = .Ldebug_loc5-.Lsection_debug_loc @ DW_AT_location
	.long	.Lset1
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	5                       @ Abbrev [5] 0xc0:0x1b DW_TAG_subprogram
	.ascii	 "nmi_handler"          @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	52                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin1           @ DW_AT_low_pc
	.long	.Lfunc_end1             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	5                       @ Abbrev [5] 0xdb:0x1a DW_TAG_subprogram
	.ascii	 "hard_fault"           @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	57                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin2           @ DW_AT_low_pc
	.long	.Lfunc_end2             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	5                       @ Abbrev [5] 0xf5:0x1b DW_TAG_subprogram
	.ascii	 "mmu_handler"          @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	62                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin3           @ DW_AT_low_pc
	.long	.Lfunc_end3             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	5                       @ Abbrev [5] 0x110:0x1b DW_TAG_subprogram
	.ascii	 "svc_handler"          @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	67                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin4           @ DW_AT_low_pc
	.long	.Lfunc_end4             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	5                       @ Abbrev [5] 0x12b:0x1c DW_TAG_subprogram
	.ascii	 "irq0_handler"         @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	72                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin5           @ DW_AT_low_pc
	.long	.Lfunc_end5             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	5                       @ Abbrev [5] 0x147:0x1c DW_TAG_subprogram
	.ascii	 "irq1_handler"         @ DW_AT_name
	.byte	0
	.byte	1                       @ DW_AT_decl_file
	.byte	77                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_external
	.long	.Lfunc_begin6           @ DW_AT_low_pc
	.long	.Lfunc_end6             @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.byte	1                       @ DW_AT_APPLE_omit_frame_ptr
	.byte	6                       @ Abbrev [6] 0x163:0x2 DW_TAG_pointer_type
	.byte	4                       @ DW_AT_byte_size
	.byte	7                       @ Abbrev [7] 0x165:0x1c DW_TAG_variable
	.ascii	 "stack_pointer"        @ DW_AT_name
	.byte	0
	.long	355                     @ DW_AT_type
	.byte	1                       @ DW_AT_external
	.byte	1                       @ DW_AT_decl_file
	.byte	17                      @ DW_AT_decl_line
	.byte	5                       @ DW_AT_location
	.byte	3
	.long	stack_pointer
	.byte	8                       @ Abbrev [8] 0x181:0x7 DW_TAG_subroutine_type
	.long	392                     @ DW_AT_sibling
	.byte	9                       @ Abbrev [9] 0x186:0x1 DW_TAG_unspecified_parameters
	.byte	0                       @ End Of Children Mark
	.byte	10                      @ Abbrev [10] 0x188:0x6 DW_TAG_pointer_type
	.long	385                     @ DW_AT_type
	.byte	4                       @ DW_AT_byte_size
	.byte	11                      @ Abbrev [11] 0x18e:0x3 DW_TAG_base_type
	.byte	4                       @ DW_AT_byte_size
	.byte	5                       @ DW_AT_encoding
	.byte	12                      @ Abbrev [12] 0x191:0x10 DW_TAG_array_type
	.long	417                     @ DW_AT_sibling
	.long	392                     @ DW_AT_type
	.byte	13                      @ Abbrev [13] 0x19a:0x6 DW_TAG_subrange_type
	.long	398                     @ DW_AT_type
	.byte	16                      @ DW_AT_upper_bound
	.byte	0                       @ End Of Children Mark
	.byte	7                       @ Abbrev [7] 0x1a1:0x16 DW_TAG_variable
	.ascii	 "vectors"              @ DW_AT_name
	.byte	0
	.long	401                     @ DW_AT_type
	.byte	1                       @ DW_AT_external
	.byte	1                       @ DW_AT_decl_file
	.byte	20                      @ DW_AT_decl_line
	.byte	5                       @ DW_AT_location
	.byte	3
	.long	vectors
	.byte	14                      @ Abbrev [14] 0x1b7:0x10 DW_TAG_base_type
	.byte	7                       @ DW_AT_encoding
	.ascii	 "unsigned int"         @ DW_AT_name
	.byte	0
	.byte	4                       @ DW_AT_byte_size
	.byte	10                      @ Abbrev [10] 0x1c7:0x6 DW_TAG_pointer_type
	.long	439                     @ DW_AT_type
	.byte	4                       @ DW_AT_byte_size
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
	.byte	1                       @ DW_CHILDREN_yes
	.byte	1                       @ DW_AT_sibling
	.byte	19                      @ DW_FORM_ref4
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
	.byte	11                      @ DW_TAG_lexical_block
	.byte	1                       @ DW_CHILDREN_yes
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	1                       @ DW_FORM_addr
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	4                       @ Abbreviation Code
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
	.byte	2                       @ DW_AT_location
	.byte	6                       @ DW_FORM_data4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	5                       @ Abbreviation Code
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
	.byte	6                       @ Abbreviation Code
	.byte	15                      @ DW_TAG_pointer_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	7                       @ Abbreviation Code
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
	.byte	8                       @ Abbreviation Code
	.byte	21                      @ DW_TAG_subroutine_type
	.byte	1                       @ DW_CHILDREN_yes
	.byte	1                       @ DW_AT_sibling
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	9                       @ Abbreviation Code
	.byte	24                      @ DW_TAG_unspecified_parameters
	.byte	0                       @ DW_CHILDREN_no
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	10                      @ Abbreviation Code
	.byte	15                      @ DW_TAG_pointer_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	11                      @ Abbreviation Code
	.byte	36                      @ DW_TAG_base_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	62                      @ DW_AT_encoding
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	12                      @ Abbreviation Code
	.byte	1                       @ DW_TAG_array_type
	.byte	1                       @ DW_CHILDREN_yes
	.byte	1                       @ DW_AT_sibling
	.byte	19                      @ DW_FORM_ref4
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	13                      @ Abbreviation Code
	.byte	33                      @ DW_TAG_subrange_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	47                      @ DW_AT_upper_bound
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	14                      @ Abbreviation Code
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
	.byte	0                       @ EOM(3)
.Labbrev_end:
	.section	.debug_pubnames,"",%progbits
.Lset2 = .Lpubnames_end1-.Lpubnames_begin1 @ Length of Public Names Info
	.long	.Lset2
.Lpubnames_begin1:
	.short	2                       @ DWARF Version
	.long	.Linfo_begin1           @ Offset of Compilation Unit Info
.Lset3 = .Linfo_end1-.Linfo_begin1      @ Compilation Unit Length
	.long	.Lset3
	.long	192                     @ DIE offset
	.asciz	 "nmi_handler"          @ External Name
	.long	357                     @ DIE offset
	.asciz	 "stack_pointer"        @ External Name
	.long	417                     @ DIE offset
	.asciz	 "vectors"              @ External Name
	.long	272                     @ DIE offset
	.asciz	 "svc_handler"          @ External Name
	.long	219                     @ DIE offset
	.asciz	 "hard_fault"           @ External Name
	.long	327                     @ DIE offset
	.asciz	 "irq1_handler"         @ External Name
	.long	245                     @ DIE offset
	.asciz	 "mmu_handler"          @ External Name
	.long	129                     @ DIE offset
	.asciz	 "_start"               @ External Name
	.long	299                     @ DIE offset
	.asciz	 "irq0_handler"         @ External Name
	.long	0                       @ End Mark
.Lpubnames_end1:
	.section	.debug_pubtypes,"",%progbits
.Lset4 = .Lpubtypes_end1-.Lpubtypes_begin1 @ Length of Public Types Info
	.long	.Lset4
.Lpubtypes_begin1:
	.short	2                       @ DWARF Version
	.long	.Linfo_begin1           @ Offset of Compilation Unit Info
.Lset5 = .Linfo_end1-.Linfo_begin1      @ Compilation Unit Length
	.long	.Lset5
	.long	0                       @ End Mark
.Lpubtypes_end1:
	.section	.debug_loc,"",%progbits
.Ldebug_loc0:
	.long	.Ltmp0
	.long	.Ltmp4
	.short	1                       @ Loc expr size
	.byte	82                      @ DW_OP_reg2
	.long	.Ltmp5
	.long	.Ltmp6
	.short	1                       @ Loc expr size
	.byte	82                      @ DW_OP_reg2
	.long	.Ltmp7
	.long	.Ltmp8
	.short	1                       @ Loc expr size
	.byte	82                      @ DW_OP_reg2
	.long	0
	.long	0
.Ldebug_loc5:
	.long	.Ltmp2
	.long	.Ltmp5
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc8:
	.section	.debug_aranges,"",%progbits
	.section	.debug_ranges,"",%progbits
	.section	.debug_macinfo,"",%progbits

