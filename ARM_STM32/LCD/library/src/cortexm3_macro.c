/*;******************** (C) COPYRIGHT 2008 STMicroelectronics ********************
;* File Name          : cortexm3_macro.s
;* Author             : MCD Application Team
;* Version            : V2.0.1
;* Date               : 06/13/2008
;* Description        : Instruction wrappers for special Cortex-M3 instructions.
;*                      to be used with RIDE7 toolchain.
;*******************************************************************************
; THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
; WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE TIME.
; AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY DIRECT,
; INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING FROM THE
; CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE CODING
; INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
;******************************************************************************/

/*;*****************************************************************************
; Function Name  : __WFI
; Description    : Assembler function for the WFI instruction.
; Input          : None
; Return         : None
;******************************************************************************/

#warning "DON'T USE THESE FUNCTIONS. THEY ARE ST'S MACROS!!!"

void  __WFI() {
    asm("WFI");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __WFE
; Description    : Assembler function for the WFE instruction.
; Input          : None
; Return         : None
;******************************************************************************/

void  __WFE() {
    asm("WFE");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __SEV
; Description    : Assembler function for the SEV instruction.
; Input          : None
; Return         : None
;******************************************************************************/

void  __SEV() {
    asm("SEV");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __ISB
; Description    : Assembler function for the ISB instruction.
; Input          : None
; Return         : None
;******************************************************************************/

void  __ISB() {
    asm("ISB");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __DSB
; Description    : Assembler function for the DSB instruction.
; Input          : None
; Return         : None
;******************************************************************************/

void  __DSB() {
    asm("DSB");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __DMB
; Description    : Assembler function for the DMB instruction.
; Input          : None
; Return         : None
;******************************************************************************/

void  __DMB() {
    asm("DMB");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __SVC
; Description    : Assembler function for the SVC instruction.
; Input          : None
; Return         : None
;******************************************************************************/

void  __SVC() {
    asm("SVC 1");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __MRS_CONTROL
; Description    : Assembler function for the MRS instruction.
; Input          : None
; Return         : - r4 : Cortex-M3 CONTROL register value.
;******************************************************************************/

void  __MRS_CONTROL() {
    asm("MRS  r0,control");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __MSR_CONTROL
; Description    : Assembler function for the MSR instruction.
; Input          : - R0 : Cortex-M3 CONTROL register new value.  
; Return         : None
;******************************************************************************/

void  __MSR_CONTROL() {
    asm("MSR control, r0");
    asm("ISB");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __MRS_PSP
; Description    : Assembler function for the MRS instruction.
; Input          : None
; Return         : - r0 : Process Stack value.
;******************************************************************************/

void  __MRS_PSP() {
    asm("MRS r0, psp");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __MSR_PSP
; Description    : Assembler function for the MSR instruction.
; Input          : - r0 : Process Stack new value.  
; Return         : None
;******************************************************************************/

void  __MSR_PSP() {
    asm("MSR psp,  r0");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __MRS_MSP
; Description    : Assembler function for the MRS instruction.
; Input          : None
; Return         : - r0 : Main Stack value.
;******************************************************************************/

void  __MRS_MSP() {
    asm("MRS r0, msp");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __MSR_MSP
; Description    : Assembler function for the MSR instruction.
; Input          : - r0 : Main Stack new value.  
; Return         : None
;******************************************************************************/

void  __MSR_MSP() {
    asm("MSR msp, r0");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __RESETPRIMASK
; Description    : Assembler function to reset the PRIMASK.
; Input          : None 
; Return         : None
;******************************************************************************/

void  __RESETPRIMASK() {
    asm("CPSIE i");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __SETPRIMASK
; Description    : Assembler function to set the PRIMASK.
; Input          : None 
; Return         : None
;******************************************************************************/

void  __SETPRIMASK() {
    asm("CPSID i");
    asm("BX r14");
}
  
/*;*****************************************************************************
; Function Name  : __READ_PRIMASK
; Description    :Assembler function to get the PRIMASK value.
; Input          : None 
; Return         : - r0 : PRIMASK register value 
;******************************************************************************/

void  __READ_PRIMASK() {
    asm("MRS r0, PRIMASK");
    asm("BX r14");
}
    
/*;*****************************************************************************
; Function Name  : __RESETFAULTMASK
; Description    : Assembler function to reset the FAULTMASK.
; Input          : None 
; Return         : None
;******************************************************************************/

void  __RESETFAULTMASK() {
    asm("CPSIE f");
    asm("BX r14");
}
  
/*;*****************************************************************************
; Function Name  : __SETFAULTMASK
; Description    : Assembler function to set the FAULTMASK.
; Input          : None 
; Return         : None
;******************************************************************************/

void  __SETFAULTMASK() {
    asm("CPSID f");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __READ_FAULTMASK
; Description    : Assembler function to get the FAULTMASK value.
; Input          : None 
; Return         : - r0 : FAULTMASK register value 
;******************************************************************************/

void  __READ_FAULTMASK() {
    asm("MRS r0, FAULTMASK");
    asm("BX r14");
}
  
/*;*****************************************************************************
; Function Name  : __BASEPRICONFIG
; Description    : Assembler function to set the Base Priority.
; Input          : - r0 : Base Priority new value  
; Return         : None
;******************************************************************************/

void  __BASEPRICONFIG(unsigned long basepri) {
    asm("MSR basepri, r0");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __GetBASEPRI
; Description    : Assembler function to get the Base Priority value.
; Input          : None 
; Return         : - r0 : Base Priority value 
;******************************************************************************/

void  __GetBASEPRI() {
    asm("MRS r0, basepri_max");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __REV_HalfWord
; Description    : Reverses the byte order in HalfWord(16-bit) input variable.
; Input          : - r0 : specifies the input variable
; Return         : - r0 : holds tve variable value after byte reversing.
;******************************************************************************/

void  __REV_HalfWord() {
    asm("REV16 r0, r0");
    asm("BX r14");
}

/*;*****************************************************************************
; Function Name  : __REV_Word
; Description    : Reverses the byte order in Word(32-bit) input variable.
; Input          : - r0 : specifies the input variable
; Return         : - r0 : holds tve variable value after byte reversing.
;******************************************************************************/

void  __REV_Word() {
    asm("REV r0, r0");
    asm("BX r14");
}
  
/*;******************* (C) COPYRIGHT 2008 STMicroelectronics *****END OF FILE****/
