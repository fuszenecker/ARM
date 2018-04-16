;-  ----------------------------------------------------------------------------
;-          ATMEL Microcontroller Software Support  -  ROUSSET  -
;-  ----------------------------------------------------------------------------
;-  DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
;-  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
;-  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
;-  DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
;-  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
;-  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
;-  OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
;-  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
;-  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
;-  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
;-  ----------------------------------------------------------------------------
;- File Name           : AT91SAM9261.h
;- Object              : AT91SAM9261 definitions
;- Generated           : AT91 SW Application Group  09/04/2006 (18:45:07)
;- 
;- CVS Reference       : /AT91SAM9261.pl/1.14/Mon Sep  4 16:43:56 2006//
;- CVS Reference       : /SYS_SAM9261.pl/1.5/Thu Nov 18 13:22:33 2004//
;- CVS Reference       : /HMATRIX1_SAM9261.pl/1.2/Mon Nov  8 16:38:17 2004//
;- CVS Reference       : /PMC_SAM9261.pl/1.4/Fri Sep  9 15:24:01 2005//
;- CVS Reference       : /HSMC3_SAM9261.pl/1.1/Tue Nov 16 09:16:07 2004//
;- CVS Reference       : /SHDWC_SAM9261.pl/1.1/Tue Mar  8 14:46:52 2005//
;- CVS Reference       : /UDP_6ept_puon.pl/1.1/Thu Aug  3 12:46:31 2006//
;- CVS Reference       : /HSDRAMC1_6100A.pl/1.2/Mon Aug  9 10:52:25 2004//
;- CVS Reference       : /AIC_6075B.pl/1.3/Fri May 20 14:21:42 2005//
;- CVS Reference       : /PDC_6074C.pl/1.2/Thu Feb  3 09:02:11 2005//
;- CVS Reference       : /DBGU_6059D.pl/1.1/Mon Jan 31 13:54:41 2005//
;- CVS Reference       : /PIO_6057A.pl/1.2/Thu Feb  3 10:29:42 2005//
;- CVS Reference       : /RSTC_6098A.pl/1.3/Thu Nov  4 13:57:00 2004//
;- CVS Reference       : /RTTC_6081A.pl/1.2/Thu Nov  4 13:57:22 2004//
;- CVS Reference       : /PITC_6079A.pl/1.2/Thu Nov  4 13:56:22 2004//
;- CVS Reference       : /WDTC_6080A.pl/1.3/Thu Nov  4 13:58:52 2004//
;- CVS Reference       : /TC_6082A.pl/1.7/Wed Mar  9 16:31:51 2005//
;- CVS Reference       : /MCI_6101A.pl/1.1/Tue Jul 13 06:33:59 2004//
;- CVS Reference       : /TWI_6061A.pl/1.1/Tue Jul 13 06:38:23 2004//
;- CVS Reference       : /US_6089C.pl/1.1/Mon Jan 31 13:56:02 2005//
;- CVS Reference       : /SSC_6078B.pl/1.1/Wed Jul 13 15:25:46 2005//
;- CVS Reference       : /SPI_6088D.pl/1.3/Fri May 20 14:23:02 2005//
;- CVS Reference       : /UHP_6127A.pl/1.1/Wed Feb 23 16:03:17 2005//
;- CVS Reference       : /LCDC_6063A.pl/1.3/Fri Dec  9 10:59:26 2005//
;-  ----------------------------------------------------------------------------

;- Hardware register definition

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR System Peripherals
;- *****************************************************************************
;- -------- GPBR : (SYS Offset: 0x1350) GPBR General Purpose Register -------- 
;- -------- GPBR : (SYS Offset: 0x1354) GPBR General Purpose Register -------- 
;- -------- GPBR : (SYS Offset: 0x1358) GPBR General Purpose Register -------- 
;- -------- GPBR : (SYS Offset: 0x135c) GPBR General Purpose Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR SDRAM Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_SDRAMC
SDRAMC_MR       #  4 ;- SDRAM Controller Mode Register
SDRAMC_TR       #  4 ;- SDRAM Controller Refresh Timer Register
SDRAMC_CR       #  4 ;- SDRAM Controller Configuration Register
SDRAMC_HSR      #  4 ;- SDRAM Controller High Speed Register
SDRAMC_LPR      #  4 ;- SDRAM Controller Low Power Register
SDRAMC_IER      #  4 ;- SDRAM Controller Interrupt Enable Register
SDRAMC_IDR      #  4 ;- SDRAM Controller Interrupt Disable Register
SDRAMC_IMR      #  4 ;- SDRAM Controller Interrupt Mask Register
SDRAMC_ISR      #  4 ;- SDRAM Controller Interrupt Mask Register
SDRAMC_MDR      #  4 ;- SDRAM Memory Device Register
;- -------- SDRAMC_MR : (SDRAMC Offset: 0x0) SDRAM Controller Mode Register -------- 
AT91C_SDRAMC_MODE         EQU (0xF:SHL:0) ;- (SDRAMC) Mode
AT91C_SDRAMC_MODE_NORMAL_CMD EQU (0x0) ;- (SDRAMC) Normal Mode
AT91C_SDRAMC_MODE_NOP_CMD EQU (0x1) ;- (SDRAMC) Issue a NOP Command at every access
AT91C_SDRAMC_MODE_PRCGALL_CMD EQU (0x2) ;- (SDRAMC) Issue a All Banks Precharge Command at every access
AT91C_SDRAMC_MODE_LMR_CMD EQU (0x3) ;- (SDRAMC) Issue a Load Mode Register at every access
AT91C_SDRAMC_MODE_RFSH_CMD EQU (0x4) ;- (SDRAMC) Issue a Refresh
AT91C_SDRAMC_MODE_EXT_LMR_CMD EQU (0x5) ;- (SDRAMC) Issue an Extended Load Mode Register
AT91C_SDRAMC_MODE_DEEP_CMD EQU (0x6) ;- (SDRAMC) Enter Deep Power Mode
;- -------- SDRAMC_TR : (SDRAMC Offset: 0x4) SDRAMC Refresh Timer Register -------- 
AT91C_SDRAMC_COUNT        EQU (0xFFF:SHL:0) ;- (SDRAMC) Refresh Counter
;- -------- SDRAMC_CR : (SDRAMC Offset: 0x8) SDRAM Configuration Register -------- 
AT91C_SDRAMC_NC           EQU (0x3:SHL:0) ;- (SDRAMC) Number of Column Bits
AT91C_SDRAMC_NC_8         EQU (0x0) ;- (SDRAMC) 8 Bits
AT91C_SDRAMC_NC_9         EQU (0x1) ;- (SDRAMC) 9 Bits
AT91C_SDRAMC_NC_10        EQU (0x2) ;- (SDRAMC) 10 Bits
AT91C_SDRAMC_NC_11        EQU (0x3) ;- (SDRAMC) 11 Bits
AT91C_SDRAMC_NR           EQU (0x3:SHL:2) ;- (SDRAMC) Number of Row Bits
AT91C_SDRAMC_NR_11        EQU (0x0:SHL:2) ;- (SDRAMC) 11 Bits
AT91C_SDRAMC_NR_12        EQU (0x1:SHL:2) ;- (SDRAMC) 12 Bits
AT91C_SDRAMC_NR_13        EQU (0x2:SHL:2) ;- (SDRAMC) 13 Bits
AT91C_SDRAMC_NB           EQU (0x1:SHL:4) ;- (SDRAMC) Number of Banks
AT91C_SDRAMC_NB_2_BANKS   EQU (0x0:SHL:4) ;- (SDRAMC) 2 banks
AT91C_SDRAMC_NB_4_BANKS   EQU (0x1:SHL:4) ;- (SDRAMC) 4 banks
AT91C_SDRAMC_CAS          EQU (0x3:SHL:5) ;- (SDRAMC) CAS Latency
AT91C_SDRAMC_CAS_2        EQU (0x2:SHL:5) ;- (SDRAMC) 2 cycles
AT91C_SDRAMC_CAS_3        EQU (0x3:SHL:5) ;- (SDRAMC) 3 cycles
AT91C_SDRAMC_DBW          EQU (0x1:SHL:7) ;- (SDRAMC) Data Bus Width
AT91C_SDRAMC_DBW_32_BITS  EQU (0x0:SHL:7) ;- (SDRAMC) 32 Bits datas bus
AT91C_SDRAMC_DBW_16_BITS  EQU (0x1:SHL:7) ;- (SDRAMC) 16 Bits datas bus
AT91C_SDRAMC_TWR          EQU (0xF:SHL:8) ;- (SDRAMC) Number of Write Recovery Time Cycles
AT91C_SDRAMC_TWR_0        EQU (0x0:SHL:8) ;- (SDRAMC) Value :  0
AT91C_SDRAMC_TWR_1        EQU (0x1:SHL:8) ;- (SDRAMC) Value :  1
AT91C_SDRAMC_TWR_2        EQU (0x2:SHL:8) ;- (SDRAMC) Value :  2
AT91C_SDRAMC_TWR_3        EQU (0x3:SHL:8) ;- (SDRAMC) Value :  3
AT91C_SDRAMC_TWR_4        EQU (0x4:SHL:8) ;- (SDRAMC) Value :  4
AT91C_SDRAMC_TWR_5        EQU (0x5:SHL:8) ;- (SDRAMC) Value :  5
AT91C_SDRAMC_TWR_6        EQU (0x6:SHL:8) ;- (SDRAMC) Value :  6
AT91C_SDRAMC_TWR_7        EQU (0x7:SHL:8) ;- (SDRAMC) Value :  7
AT91C_SDRAMC_TWR_8        EQU (0x8:SHL:8) ;- (SDRAMC) Value :  8
AT91C_SDRAMC_TWR_9        EQU (0x9:SHL:8) ;- (SDRAMC) Value :  9
AT91C_SDRAMC_TWR_10       EQU (0xA:SHL:8) ;- (SDRAMC) Value : 10
AT91C_SDRAMC_TWR_11       EQU (0xB:SHL:8) ;- (SDRAMC) Value : 11
AT91C_SDRAMC_TWR_12       EQU (0xC:SHL:8) ;- (SDRAMC) Value : 12
AT91C_SDRAMC_TWR_13       EQU (0xD:SHL:8) ;- (SDRAMC) Value : 13
AT91C_SDRAMC_TWR_14       EQU (0xE:SHL:8) ;- (SDRAMC) Value : 14
AT91C_SDRAMC_TWR_15       EQU (0xF:SHL:8) ;- (SDRAMC) Value : 15
AT91C_SDRAMC_TRC          EQU (0xF:SHL:12) ;- (SDRAMC) Number of RAS Cycle Time Cycles
AT91C_SDRAMC_TRC_0        EQU (0x0:SHL:12) ;- (SDRAMC) Value :  0
AT91C_SDRAMC_TRC_1        EQU (0x1:SHL:12) ;- (SDRAMC) Value :  1
AT91C_SDRAMC_TRC_2        EQU (0x2:SHL:12) ;- (SDRAMC) Value :  2
AT91C_SDRAMC_TRC_3        EQU (0x3:SHL:12) ;- (SDRAMC) Value :  3
AT91C_SDRAMC_TRC_4        EQU (0x4:SHL:12) ;- (SDRAMC) Value :  4
AT91C_SDRAMC_TRC_5        EQU (0x5:SHL:12) ;- (SDRAMC) Value :  5
AT91C_SDRAMC_TRC_6        EQU (0x6:SHL:12) ;- (SDRAMC) Value :  6
AT91C_SDRAMC_TRC_7        EQU (0x7:SHL:12) ;- (SDRAMC) Value :  7
AT91C_SDRAMC_TRC_8        EQU (0x8:SHL:12) ;- (SDRAMC) Value :  8
AT91C_SDRAMC_TRC_9        EQU (0x9:SHL:12) ;- (SDRAMC) Value :  9
AT91C_SDRAMC_TRC_10       EQU (0xA:SHL:12) ;- (SDRAMC) Value : 10
AT91C_SDRAMC_TRC_11       EQU (0xB:SHL:12) ;- (SDRAMC) Value : 11
AT91C_SDRAMC_TRC_12       EQU (0xC:SHL:12) ;- (SDRAMC) Value : 12
AT91C_SDRAMC_TRC_13       EQU (0xD:SHL:12) ;- (SDRAMC) Value : 13
AT91C_SDRAMC_TRC_14       EQU (0xE:SHL:12) ;- (SDRAMC) Value : 14
AT91C_SDRAMC_TRC_15       EQU (0xF:SHL:12) ;- (SDRAMC) Value : 15
AT91C_SDRAMC_TRP          EQU (0xF:SHL:16) ;- (SDRAMC) Number of RAS Precharge Time Cycles
AT91C_SDRAMC_TRP_0        EQU (0x0:SHL:16) ;- (SDRAMC) Value :  0
AT91C_SDRAMC_TRP_1        EQU (0x1:SHL:16) ;- (SDRAMC) Value :  1
AT91C_SDRAMC_TRP_2        EQU (0x2:SHL:16) ;- (SDRAMC) Value :  2
AT91C_SDRAMC_TRP_3        EQU (0x3:SHL:16) ;- (SDRAMC) Value :  3
AT91C_SDRAMC_TRP_4        EQU (0x4:SHL:16) ;- (SDRAMC) Value :  4
AT91C_SDRAMC_TRP_5        EQU (0x5:SHL:16) ;- (SDRAMC) Value :  5
AT91C_SDRAMC_TRP_6        EQU (0x6:SHL:16) ;- (SDRAMC) Value :  6
AT91C_SDRAMC_TRP_7        EQU (0x7:SHL:16) ;- (SDRAMC) Value :  7
AT91C_SDRAMC_TRP_8        EQU (0x8:SHL:16) ;- (SDRAMC) Value :  8
AT91C_SDRAMC_TRP_9        EQU (0x9:SHL:16) ;- (SDRAMC) Value :  9
AT91C_SDRAMC_TRP_10       EQU (0xA:SHL:16) ;- (SDRAMC) Value : 10
AT91C_SDRAMC_TRP_11       EQU (0xB:SHL:16) ;- (SDRAMC) Value : 11
AT91C_SDRAMC_TRP_12       EQU (0xC:SHL:16) ;- (SDRAMC) Value : 12
AT91C_SDRAMC_TRP_13       EQU (0xD:SHL:16) ;- (SDRAMC) Value : 13
AT91C_SDRAMC_TRP_14       EQU (0xE:SHL:16) ;- (SDRAMC) Value : 14
AT91C_SDRAMC_TRP_15       EQU (0xF:SHL:16) ;- (SDRAMC) Value : 15
AT91C_SDRAMC_TRCD         EQU (0xF:SHL:20) ;- (SDRAMC) Number of RAS to CAS Delay Cycles
AT91C_SDRAMC_TRCD_0       EQU (0x0:SHL:20) ;- (SDRAMC) Value :  0
AT91C_SDRAMC_TRCD_1       EQU (0x1:SHL:20) ;- (SDRAMC) Value :  1
AT91C_SDRAMC_TRCD_2       EQU (0x2:SHL:20) ;- (SDRAMC) Value :  2
AT91C_SDRAMC_TRCD_3       EQU (0x3:SHL:20) ;- (SDRAMC) Value :  3
AT91C_SDRAMC_TRCD_4       EQU (0x4:SHL:20) ;- (SDRAMC) Value :  4
AT91C_SDRAMC_TRCD_5       EQU (0x5:SHL:20) ;- (SDRAMC) Value :  5
AT91C_SDRAMC_TRCD_6       EQU (0x6:SHL:20) ;- (SDRAMC) Value :  6
AT91C_SDRAMC_TRCD_7       EQU (0x7:SHL:20) ;- (SDRAMC) Value :  7
AT91C_SDRAMC_TRCD_8       EQU (0x8:SHL:20) ;- (SDRAMC) Value :  8
AT91C_SDRAMC_TRCD_9       EQU (0x9:SHL:20) ;- (SDRAMC) Value :  9
AT91C_SDRAMC_TRCD_10      EQU (0xA:SHL:20) ;- (SDRAMC) Value : 10
AT91C_SDRAMC_TRCD_11      EQU (0xB:SHL:20) ;- (SDRAMC) Value : 11
AT91C_SDRAMC_TRCD_12      EQU (0xC:SHL:20) ;- (SDRAMC) Value : 12
AT91C_SDRAMC_TRCD_13      EQU (0xD:SHL:20) ;- (SDRAMC) Value : 13
AT91C_SDRAMC_TRCD_14      EQU (0xE:SHL:20) ;- (SDRAMC) Value : 14
AT91C_SDRAMC_TRCD_15      EQU (0xF:SHL:20) ;- (SDRAMC) Value : 15
AT91C_SDRAMC_TRAS         EQU (0xF:SHL:24) ;- (SDRAMC) Number of RAS Active Time Cycles
AT91C_SDRAMC_TRAS_0       EQU (0x0:SHL:24) ;- (SDRAMC) Value :  0
AT91C_SDRAMC_TRAS_1       EQU (0x1:SHL:24) ;- (SDRAMC) Value :  1
AT91C_SDRAMC_TRAS_2       EQU (0x2:SHL:24) ;- (SDRAMC) Value :  2
AT91C_SDRAMC_TRAS_3       EQU (0x3:SHL:24) ;- (SDRAMC) Value :  3
AT91C_SDRAMC_TRAS_4       EQU (0x4:SHL:24) ;- (SDRAMC) Value :  4
AT91C_SDRAMC_TRAS_5       EQU (0x5:SHL:24) ;- (SDRAMC) Value :  5
AT91C_SDRAMC_TRAS_6       EQU (0x6:SHL:24) ;- (SDRAMC) Value :  6
AT91C_SDRAMC_TRAS_7       EQU (0x7:SHL:24) ;- (SDRAMC) Value :  7
AT91C_SDRAMC_TRAS_8       EQU (0x8:SHL:24) ;- (SDRAMC) Value :  8
AT91C_SDRAMC_TRAS_9       EQU (0x9:SHL:24) ;- (SDRAMC) Value :  9
AT91C_SDRAMC_TRAS_10      EQU (0xA:SHL:24) ;- (SDRAMC) Value : 10
AT91C_SDRAMC_TRAS_11      EQU (0xB:SHL:24) ;- (SDRAMC) Value : 11
AT91C_SDRAMC_TRAS_12      EQU (0xC:SHL:24) ;- (SDRAMC) Value : 12
AT91C_SDRAMC_TRAS_13      EQU (0xD:SHL:24) ;- (SDRAMC) Value : 13
AT91C_SDRAMC_TRAS_14      EQU (0xE:SHL:24) ;- (SDRAMC) Value : 14
AT91C_SDRAMC_TRAS_15      EQU (0xF:SHL:24) ;- (SDRAMC) Value : 15
AT91C_SDRAMC_TXSR         EQU (0xF:SHL:28) ;- (SDRAMC) Number of Command Recovery Time Cycles
AT91C_SDRAMC_TXSR_0       EQU (0x0:SHL:28) ;- (SDRAMC) Value :  0
AT91C_SDRAMC_TXSR_1       EQU (0x1:SHL:28) ;- (SDRAMC) Value :  1
AT91C_SDRAMC_TXSR_2       EQU (0x2:SHL:28) ;- (SDRAMC) Value :  2
AT91C_SDRAMC_TXSR_3       EQU (0x3:SHL:28) ;- (SDRAMC) Value :  3
AT91C_SDRAMC_TXSR_4       EQU (0x4:SHL:28) ;- (SDRAMC) Value :  4
AT91C_SDRAMC_TXSR_5       EQU (0x5:SHL:28) ;- (SDRAMC) Value :  5
AT91C_SDRAMC_TXSR_6       EQU (0x6:SHL:28) ;- (SDRAMC) Value :  6
AT91C_SDRAMC_TXSR_7       EQU (0x7:SHL:28) ;- (SDRAMC) Value :  7
AT91C_SDRAMC_TXSR_8       EQU (0x8:SHL:28) ;- (SDRAMC) Value :  8
AT91C_SDRAMC_TXSR_9       EQU (0x9:SHL:28) ;- (SDRAMC) Value :  9
AT91C_SDRAMC_TXSR_10      EQU (0xA:SHL:28) ;- (SDRAMC) Value : 10
AT91C_SDRAMC_TXSR_11      EQU (0xB:SHL:28) ;- (SDRAMC) Value : 11
AT91C_SDRAMC_TXSR_12      EQU (0xC:SHL:28) ;- (SDRAMC) Value : 12
AT91C_SDRAMC_TXSR_13      EQU (0xD:SHL:28) ;- (SDRAMC) Value : 13
AT91C_SDRAMC_TXSR_14      EQU (0xE:SHL:28) ;- (SDRAMC) Value : 14
AT91C_SDRAMC_TXSR_15      EQU (0xF:SHL:28) ;- (SDRAMC) Value : 15
;- -------- SDRAMC_HSR : (SDRAMC Offset: 0xc) SDRAM Controller High Speed Register -------- 
AT91C_SDRAMC_DA           EQU (0x1:SHL:0) ;- (SDRAMC) Decode Cycle Enable Bit
AT91C_SDRAMC_DA_DISABLE   EQU (0x0) ;- (SDRAMC) Disable Decode Cycle
AT91C_SDRAMC_DA_ENABLE    EQU (0x1) ;- (SDRAMC) Enable Decode Cycle
;- -------- SDRAMC_LPR : (SDRAMC Offset: 0x10) SDRAM Controller Low-power Register -------- 
AT91C_SDRAMC_LPCB         EQU (0x3:SHL:0) ;- (SDRAMC) Low-power Configurations
AT91C_SDRAMC_LPCB_DISABLE EQU (0x0) ;- (SDRAMC) Disable Low Power Features
AT91C_SDRAMC_LPCB_SELF_REFRESH EQU (0x1) ;- (SDRAMC) Enable SELF_REFRESH
AT91C_SDRAMC_LPCB_POWER_DOWN EQU (0x2) ;- (SDRAMC) Enable POWER_DOWN
AT91C_SDRAMC_LPCB_DEEP_POWER_DOWN EQU (0x3) ;- (SDRAMC) Enable DEEP_POWER_DOWN
AT91C_SDRAMC_PASR         EQU (0x7:SHL:4) ;- (SDRAMC) Partial Array Self Refresh (only for Low Power SDRAM)
AT91C_SDRAMC_TCSR         EQU (0x3:SHL:8) ;- (SDRAMC) Temperature Compensated Self Refresh (only for Low Power SDRAM)
AT91C_SDRAMC_DS           EQU (0x3:SHL:10) ;- (SDRAMC) Drive Strenght (only for Low Power SDRAM)
AT91C_SDRAMC_TIMEOUT      EQU (0x3:SHL:12) ;- (SDRAMC) Time to define when Low Power Mode is enabled
AT91C_SDRAMC_TIMEOUT_0_CLK_CYCLES EQU (0x0:SHL:12) ;- (SDRAMC) Activate SDRAM Low Power Mode Immediately
AT91C_SDRAMC_TIMEOUT_64_CLK_CYCLES EQU (0x1:SHL:12) ;- (SDRAMC) Activate SDRAM Low Power Mode after 64 clock cycles after the end of the last transfer
AT91C_SDRAMC_TIMEOUT_128_CLK_CYCLES EQU (0x2:SHL:12) ;- (SDRAMC) Activate SDRAM Low Power Mode after 64 clock cycles after the end of the last transfer
;- -------- SDRAMC_IER : (SDRAMC Offset: 0x14) SDRAM Controller Interrupt Enable Register -------- 
AT91C_SDRAMC_RES          EQU (0x1:SHL:0) ;- (SDRAMC) Refresh Error Status
;- -------- SDRAMC_IDR : (SDRAMC Offset: 0x18) SDRAM Controller Interrupt Disable Register -------- 
;- -------- SDRAMC_IMR : (SDRAMC Offset: 0x1c) SDRAM Controller Interrupt Mask Register -------- 
;- -------- SDRAMC_ISR : (SDRAMC Offset: 0x20) SDRAM Controller Interrupt Status Register -------- 
;- -------- SDRAMC_MDR : (SDRAMC Offset: 0x24) SDRAM Controller Memory Device Register -------- 
AT91C_SDRAMC_MD           EQU (0x3:SHL:0) ;- (SDRAMC) Memory Device Type
AT91C_SDRAMC_MD_SDRAM     EQU (0x0) ;- (SDRAMC) SDRAM Mode
AT91C_SDRAMC_MD_LOW_POWER_SDRAM EQU (0x1) ;- (SDRAMC) SDRAM Low Power Mode

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Static Memory Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_SMC
SMC_SETUP0      #  4 ;-  Setup Register for CS 0
SMC_PULSE0      #  4 ;-  Pulse Register for CS 0
SMC_CYCLE0      #  4 ;-  Cycle Register for CS 0
SMC_CTRL0       #  4 ;-  Control Register for CS 0
SMC_SETUP1      #  4 ;-  Setup Register for CS 1
SMC_PULSE1      #  4 ;-  Pulse Register for CS 1
SMC_CYCLE1      #  4 ;-  Cycle Register for CS 1
SMC_CTRL1       #  4 ;-  Control Register for CS 1
SMC_SETUP2      #  4 ;-  Setup Register for CS 2
SMC_PULSE2      #  4 ;-  Pulse Register for CS 2
SMC_CYCLE2      #  4 ;-  Cycle Register for CS 2
SMC_CTRL2       #  4 ;-  Control Register for CS 2
SMC_SETUP3      #  4 ;-  Setup Register for CS 3
SMC_PULSE3      #  4 ;-  Pulse Register for CS 3
SMC_CYCLE3      #  4 ;-  Cycle Register for CS 3
SMC_CTRL3       #  4 ;-  Control Register for CS 3
SMC_SETUP4      #  4 ;-  Setup Register for CS 4
SMC_PULSE4      #  4 ;-  Pulse Register for CS 4
SMC_CYCLE4      #  4 ;-  Cycle Register for CS 4
SMC_CTRL4       #  4 ;-  Control Register for CS 4
SMC_SETUP5      #  4 ;-  Setup Register for CS 5
SMC_PULSE5      #  4 ;-  Pulse Register for CS 5
SMC_CYCLE5      #  4 ;-  Cycle Register for CS 5
SMC_CTRL5       #  4 ;-  Control Register for CS 5
SMC_SETUP6      #  4 ;-  Setup Register for CS 6
SMC_PULSE6      #  4 ;-  Pulse Register for CS 6
SMC_CYCLE6      #  4 ;-  Cycle Register for CS 6
SMC_CTRL6       #  4 ;-  Control Register for CS 6
SMC_SETUP7      #  4 ;-  Setup Register for CS 7
SMC_PULSE7      #  4 ;-  Pulse Register for CS 7
SMC_CYCLE7      #  4 ;-  Cycle Register for CS 7
SMC_CTRL7       #  4 ;-  Control Register for CS 7
;- -------- SMC_SETUP : (SMC Offset: 0x0) Setup Register for CS x -------- 
AT91C_SMC_NWESETUP        EQU (0x3F:SHL:0) ;- (SMC) NWE Setup Length
AT91C_SMC_NCSSETUPWR      EQU (0x3F:SHL:8) ;- (SMC) NCS Setup Length in WRite Access
AT91C_SMC_NRDSETUP        EQU (0x3F:SHL:16) ;- (SMC) NRD Setup Length
AT91C_SMC_NCSSETUPRD      EQU (0x3F:SHL:24) ;- (SMC) NCS Setup Length in ReaD Access
;- -------- SMC_PULSE : (SMC Offset: 0x4) Pulse Register for CS x -------- 
AT91C_SMC_NWEPULSE        EQU (0x7F:SHL:0) ;- (SMC) NWE Pulse Length
AT91C_SMC_NCSPULSEWR      EQU (0x7F:SHL:8) ;- (SMC) NCS Pulse Length in WRite Access
AT91C_SMC_NRDPULSE        EQU (0x7F:SHL:16) ;- (SMC) NRD Pulse Length
AT91C_SMC_NCSPULSERD      EQU (0x7F:SHL:24) ;- (SMC) NCS Pulse Length in ReaD Access
;- -------- SMC_CYC : (SMC Offset: 0x8) Cycle Register for CS x -------- 
AT91C_SMC_NWECYCLE        EQU (0x1FF:SHL:0) ;- (SMC) Total Write Cycle Length
AT91C_SMC_NRDCYCLE        EQU (0x1FF:SHL:16) ;- (SMC) Total Read Cycle Length
;- -------- SMC_CTRL : (SMC Offset: 0xc) Control Register for CS x -------- 
AT91C_SMC_READMODE        EQU (0x1:SHL:0) ;- (SMC) Read Mode
AT91C_SMC_WRITEMODE       EQU (0x1:SHL:1) ;- (SMC) Write Mode
AT91C_SMC_NWAITM          EQU (0x3:SHL:5) ;- (SMC) NWAIT Mode
AT91C_SMC_NWAITM_NWAIT_DISABLE EQU (0x0:SHL:5) ;- (SMC) External NWAIT disabled.
AT91C_SMC_NWAITM_NWAIT_ENABLE_FROZEN EQU (0x2:SHL:5) ;- (SMC) External NWAIT enabled in frozen mode.
AT91C_SMC_NWAITM_NWAIT_ENABLE_READY EQU (0x3:SHL:5) ;- (SMC) External NWAIT enabled in ready mode.
AT91C_SMC_BAT             EQU (0x1:SHL:8) ;- (SMC) Byte Access Type
AT91C_SMC_BAT_BYTE_SELECT EQU (0x0:SHL:8) ;- (SMC) Write controled by ncs, nbs0, nbs1, nbs2, nbs3. Read controled by ncs, nrd, nbs0, nbs1, nbs2, nbs3.
AT91C_SMC_BAT_BYTE_WRITE  EQU (0x1:SHL:8) ;- (SMC) Write controled by ncs, nwe0, nwe1, nwe2, nwe3. Read controled by ncs and nrd.
AT91C_SMC_DBW             EQU (0x3:SHL:12) ;- (SMC) Data Bus Width
AT91C_SMC_DBW_WIDTH_EIGTH_BITS EQU (0x0:SHL:12) ;- (SMC) 8 bits.
AT91C_SMC_DBW_WIDTH_SIXTEEN_BITS EQU (0x1:SHL:12) ;- (SMC) 16 bits.
AT91C_SMC_DBW_WIDTH_THIRTY_TWO_BITS EQU (0x2:SHL:12) ;- (SMC) 32 bits.
AT91C_SMC_TDF             EQU (0xF:SHL:16) ;- (SMC) Data Float Time.
AT91C_SMC_TDFEN           EQU (0x1:SHL:20) ;- (SMC) TDF Enabled.
AT91C_SMC_PMEN            EQU (0x1:SHL:24) ;- (SMC) Page Mode Enabled.
AT91C_SMC_PS              EQU (0x3:SHL:28) ;- (SMC) Page Size
AT91C_SMC_PS_SIZE_FOUR_BYTES EQU (0x0:SHL:28) ;- (SMC) 4 bytes.
AT91C_SMC_PS_SIZE_EIGHT_BYTES EQU (0x1:SHL:28) ;- (SMC) 8 bytes.
AT91C_SMC_PS_SIZE_SIXTEEN_BYTES EQU (0x2:SHL:28) ;- (SMC) 16 bytes.
AT91C_SMC_PS_SIZE_THIRTY_TWO_BYTES EQU (0x3:SHL:28) ;- (SMC) 32 bytes.
;- -------- SMC_SETUP : (SMC Offset: 0x10) Setup Register for CS x -------- 
;- -------- SMC_PULSE : (SMC Offset: 0x14) Pulse Register for CS x -------- 
;- -------- SMC_CYC : (SMC Offset: 0x18) Cycle Register for CS x -------- 
;- -------- SMC_CTRL : (SMC Offset: 0x1c) Control Register for CS x -------- 
;- -------- SMC_SETUP : (SMC Offset: 0x20) Setup Register for CS x -------- 
;- -------- SMC_PULSE : (SMC Offset: 0x24) Pulse Register for CS x -------- 
;- -------- SMC_CYC : (SMC Offset: 0x28) Cycle Register for CS x -------- 
;- -------- SMC_CTRL : (SMC Offset: 0x2c) Control Register for CS x -------- 
;- -------- SMC_SETUP : (SMC Offset: 0x30) Setup Register for CS x -------- 
;- -------- SMC_PULSE : (SMC Offset: 0x34) Pulse Register for CS x -------- 
;- -------- SMC_CYC : (SMC Offset: 0x38) Cycle Register for CS x -------- 
;- -------- SMC_CTRL : (SMC Offset: 0x3c) Control Register for CS x -------- 
;- -------- SMC_SETUP : (SMC Offset: 0x40) Setup Register for CS x -------- 
;- -------- SMC_PULSE : (SMC Offset: 0x44) Pulse Register for CS x -------- 
;- -------- SMC_CYC : (SMC Offset: 0x48) Cycle Register for CS x -------- 
;- -------- SMC_CTRL : (SMC Offset: 0x4c) Control Register for CS x -------- 
;- -------- SMC_SETUP : (SMC Offset: 0x50) Setup Register for CS x -------- 
;- -------- SMC_PULSE : (SMC Offset: 0x54) Pulse Register for CS x -------- 
;- -------- SMC_CYC : (SMC Offset: 0x58) Cycle Register for CS x -------- 
;- -------- SMC_CTRL : (SMC Offset: 0x5c) Control Register for CS x -------- 
;- -------- SMC_SETUP : (SMC Offset: 0x60) Setup Register for CS x -------- 
;- -------- SMC_PULSE : (SMC Offset: 0x64) Pulse Register for CS x -------- 
;- -------- SMC_CYC : (SMC Offset: 0x68) Cycle Register for CS x -------- 
;- -------- SMC_CTRL : (SMC Offset: 0x6c) Control Register for CS x -------- 
;- -------- SMC_SETUP : (SMC Offset: 0x70) Setup Register for CS x -------- 
;- -------- SMC_PULSE : (SMC Offset: 0x74) Pulse Register for CS x -------- 
;- -------- SMC_CYC : (SMC Offset: 0x78) Cycle Register for CS x -------- 
;- -------- SMC_CTRL : (SMC Offset: 0x7c) Control Register for CS x -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR AHB Matrix Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_MATRIX
MATRIX_MCFG     #  4 ;-  Master Configuration Register
MATRIX_SCFG0    #  4 ;-  Slave Configuration Register 0
MATRIX_SCFG1    #  4 ;-  Slave Configuration Register 1
MATRIX_SCFG2    #  4 ;-  Slave Configuration Register 2
MATRIX_SCFG3    #  4 ;-  Slave Configuration Register 3
MATRIX_SCFG4    #  4 ;-  Slave Configuration Register 4
                # 12 ;- Reserved
MATRIX_TCMR     #  4 ;-  Slave 0 Special Function Register
                #  8 ;- Reserved
MATRIX_EBICSA   #  4 ;-  Slave 3 Special Function Register
MATRIX_USBPCR   #  4 ;-  Slave 4 Special Function Register
                # 12 ;- Reserved
MATRIX_VERSION  #  4 ;-  Version Register
;- -------- MATRIX_MCFG : (MATRIX Offset: 0x0) Master Configuration Register -------- 
AT91C_MATRIX_RCA926I      EQU (0x1:SHL:0) ;- (MATRIX) Remap Command for ARM926EJ-S Instruction Master
AT91C_MATRIX_RCA926D      EQU (0x1:SHL:1) ;- (MATRIX) Remap Command for ARM926EJ-S Data Master
;- -------- MATRIX_SCFG0 : (MATRIX Offset: 0x4) Slave Configuration Register 0 -------- 
AT91C_MATRIX_SLOT_CYCLE   EQU (0xFF:SHL:0) ;- (MATRIX) Maximum Number of Allowed Cycles for a Burst
AT91C_MATRIX_DEFMSTR_TYPE EQU (0x3:SHL:16) ;- (MATRIX) Default Master Type
AT91C_MATRIX_DEFMSTR_TYPE_NO_DEFMSTR EQU (0x0:SHL:16) ;- (MATRIX) No Default Master. At the end of current slave access, if no other master request is pending, the slave is deconnected from all masters. This results in having a one cycle latency for the first transfer of a burst.
AT91C_MATRIX_DEFMSTR_TYPE_LAST_DEFMSTR EQU (0x1:SHL:16) ;- (MATRIX) Last Default Master. At the end of current slave access, if no other master request is pending, the slave stay connected with the last master having accessed it. This results in not having the one cycle latency when the last master re-trying access on the slave.
AT91C_MATRIX_DEFMSTR_TYPE_FIXED_DEFMSTR EQU (0x2:SHL:16) ;- (MATRIX) Fixed Default Master. At the end of current slave access, if no other master request is pending, the slave connects with fixed which number is in FIXED_DEFMSTR field. This results in not having the one cycle latency when the fixed master re-trying access on the slave.
AT91C_MATRIX_FIXED_DEFMSTR0 EQU (0x7:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR0_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR0_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR0_HPDC3 EQU (0x2:SHL:18) ;- (MATRIX) HPDC3 Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR0_LCDC EQU (0x3:SHL:18) ;- (MATRIX) LCDC Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR0_UHP EQU (0x4:SHL:18) ;- (MATRIX) UHP Master is Default Master
;- -------- MATRIX_SCFG1 : (MATRIX Offset: 0x8) Slave Configuration Register 1 -------- 
AT91C_MATRIX_FIXED_DEFMSTR1 EQU (0x7:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_HPDC3 EQU (0x2:SHL:18) ;- (MATRIX) HPDC3 Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_LCDC EQU (0x3:SHL:18) ;- (MATRIX) LCDC Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_UHP EQU (0x4:SHL:18) ;- (MATRIX) UHP Master is Default Master
;- -------- MATRIX_SCFG2 : (MATRIX Offset: 0xc) Slave Configuration Register 2 -------- 
AT91C_MATRIX_FIXED_DEFMSTR2 EQU (0x1:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR2_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR2_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
;- -------- MATRIX_SCFG3 : (MATRIX Offset: 0x10) Slave Configuration Register 3 -------- 
AT91C_MATRIX_FIXED_DEFMSTR3 EQU (0x7:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_HPDC3 EQU (0x2:SHL:18) ;- (MATRIX) HPDC3 Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_LCDC EQU (0x3:SHL:18) ;- (MATRIX) LCDC Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_UHP EQU (0x4:SHL:18) ;- (MATRIX) UHP Master is Default Master
;- -------- MATRIX_SCFG4 : (MATRIX Offset: 0x14) Slave Configuration Register 4 -------- 
AT91C_MATRIX_FIXED_DEFMSTR4 EQU (0x3:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR4_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR4_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR4_HPDC3 EQU (0x2:SHL:18) ;- (MATRIX) HPDC3 Master is Default Master
;- -------- MATRIX_TCMR : (MATRIX Offset: 0x24) TCM (Slave 0) Special Function Register -------- 
AT91C_MATRIX_ITCM_SIZE    EQU (0xF:SHL:0) ;- (MATRIX) Size of ITCM enabled memory block
AT91C_MATRIX_ITCM_SIZE_0KB EQU (0x0) ;- (MATRIX) 0 KB (No ITCM Memory)
AT91C_MATRIX_ITCM_SIZE_16KB EQU (0x5) ;- (MATRIX) 16 KB
AT91C_MATRIX_ITCM_SIZE_32KB EQU (0x6) ;- (MATRIX) 32 KB
AT91C_MATRIX_ITCM_SIZE_64KB EQU (0x7) ;- (MATRIX) 64 KB
AT91C_MATRIX_DTCM_SIZE    EQU (0xF:SHL:4) ;- (MATRIX) Size of DTCM enabled memory block
AT91C_MATRIX_DTCM_SIZE_0KB EQU (0x0:SHL:4) ;- (MATRIX) 0 KB (No DTCM Memory)
AT91C_MATRIX_DTCM_SIZE_16KB EQU (0x5:SHL:4) ;- (MATRIX) 16 KB
AT91C_MATRIX_DTCM_SIZE_32KB EQU (0x6:SHL:4) ;- (MATRIX) 32 KB
AT91C_MATRIX_DTCM_SIZE_64KB EQU (0x7:SHL:4) ;- (MATRIX) 64 KB
;- -------- MATRIX_EBICSA : (MATRIX Offset: 0x30) EBI (Slave 3) Special Function Register -------- 
AT91C_MATRIX_CS1A         EQU (0x1:SHL:1) ;- (MATRIX) Chip Select 1 Assignment
AT91C_MATRIX_CS1A_SMC     EQU (0x0:SHL:1) ;- (MATRIX) Chip Select 1 is assigned to the Static Memory Controller.
AT91C_MATRIX_CS1A_SDRAMC  EQU (0x1:SHL:1) ;- (MATRIX) Chip Select 1 is assigned to the SDRAM Controller.
AT91C_MATRIX_CS3A         EQU (0x1:SHL:3) ;- (MATRIX) Chip Select 3 Assignment
AT91C_MATRIX_CS3A_SMC     EQU (0x0:SHL:3) ;- (MATRIX) Chip Select 3 is only assigned to the Static Memory Controller and NCS3 behaves as defined by the SMC.
AT91C_MATRIX_CS3A_SM      EQU (0x1:SHL:3) ;- (MATRIX) Chip Select 3 is assigned to the Static Memory Controller and the SmartMedia Logic is activated.
AT91C_MATRIX_CS4A         EQU (0x1:SHL:4) ;- (MATRIX) Chip Select 4 Assignment
AT91C_MATRIX_CS4A_SMC     EQU (0x0:SHL:4) ;- (MATRIX) Chip Select 4 is only assigned to the Static Memory Controller and NCS4 behaves as defined by the SMC.
AT91C_MATRIX_CS4A_CF      EQU (0x1:SHL:4) ;- (MATRIX) Chip Select 4 is assigned to the Static Memory Controller and the CompactFlash Logic (first slot) is activated.
AT91C_MATRIX_CS5A         EQU (0x1:SHL:5) ;- (MATRIX) Chip Select 5 Assignment
AT91C_MATRIX_CS5A_SMC     EQU (0x0:SHL:5) ;- (MATRIX) Chip Select 5 is only assigned to the Static Memory Controller and NCS5 behaves as defined by the SMC
AT91C_MATRIX_CS5A_CF      EQU (0x1:SHL:5) ;- (MATRIX) Chip Select 5 is assigned to the Static Memory Controller and the CompactFlash Logic (second slot) is activated.
AT91C_MATRIX_DBPUC        EQU (0x1:SHL:8) ;- (MATRIX) Data Bus Pull-up Configuration
;- -------- MATRIX_USBPCR : (MATRIX Offset: 0x34) USB Pad Control Register -------- 
AT91C_MATRIX_USBPCR_PUON  EQU (0x1:SHL:30) ;- (MATRIX) PullUp On
AT91C_MATRIX_USBPCR_PUIDLE EQU (0x1:SHL:31) ;- (MATRIX) PullUp Idle

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Advanced Interrupt Controller
;- *****************************************************************************
                ^ 0 ;- AT91S_AIC
AIC_SMR         # 128 ;- Source Mode Register
AIC_SVR         # 128 ;- Source Vector Register
AIC_IVR         #  4 ;- IRQ Vector Register
AIC_FVR         #  4 ;- FIQ Vector Register
AIC_ISR         #  4 ;- Interrupt Status Register
AIC_IPR         #  4 ;- Interrupt Pending Register
AIC_IMR         #  4 ;- Interrupt Mask Register
AIC_CISR        #  4 ;- Core Interrupt Status Register
                #  8 ;- Reserved
AIC_IECR        #  4 ;- Interrupt Enable Command Register
AIC_IDCR        #  4 ;- Interrupt Disable Command Register
AIC_ICCR        #  4 ;- Interrupt Clear Command Register
AIC_ISCR        #  4 ;- Interrupt Set Command Register
AIC_EOICR       #  4 ;- End of Interrupt Command Register
AIC_SPU         #  4 ;- Spurious Vector Register
AIC_DCR         #  4 ;- Debug Control Register (Protect)
                #  4 ;- Reserved
AIC_FFER        #  4 ;- Fast Forcing Enable Register
AIC_FFDR        #  4 ;- Fast Forcing Disable Register
AIC_FFSR        #  4 ;- Fast Forcing Status Register
;- -------- AIC_SMR : (AIC Offset: 0x0) Control Register -------- 
AT91C_AIC_PRIOR           EQU (0x7:SHL:0) ;- (AIC) Priority Level
AT91C_AIC_PRIOR_LOWEST    EQU (0x0) ;- (AIC) Lowest priority level
AT91C_AIC_PRIOR_HIGHEST   EQU (0x7) ;- (AIC) Highest priority level
AT91C_AIC_SRCTYPE         EQU (0x3:SHL:5) ;- (AIC) Interrupt Source Type
AT91C_AIC_SRCTYPE_INT_HIGH_LEVEL EQU (0x0:SHL:5) ;- (AIC) Internal Sources Code Label High-level Sensitive
AT91C_AIC_SRCTYPE_EXT_LOW_LEVEL EQU (0x0:SHL:5) ;- (AIC) External Sources Code Label Low-level Sensitive
AT91C_AIC_SRCTYPE_INT_POSITIVE_EDGE EQU (0x1:SHL:5) ;- (AIC) Internal Sources Code Label Positive Edge triggered
AT91C_AIC_SRCTYPE_EXT_NEGATIVE_EDGE EQU (0x1:SHL:5) ;- (AIC) External Sources Code Label Negative Edge triggered
AT91C_AIC_SRCTYPE_HIGH_LEVEL EQU (0x2:SHL:5) ;- (AIC) Internal Or External Sources Code Label High-level Sensitive
AT91C_AIC_SRCTYPE_POSITIVE_EDGE EQU (0x3:SHL:5) ;- (AIC) Internal Or External Sources Code Label Positive Edge triggered
;- -------- AIC_CISR : (AIC Offset: 0x114) AIC Core Interrupt Status Register -------- 
AT91C_AIC_NFIQ            EQU (0x1:SHL:0) ;- (AIC) NFIQ Status
AT91C_AIC_NIRQ            EQU (0x1:SHL:1) ;- (AIC) NIRQ Status
;- -------- AIC_DCR : (AIC Offset: 0x138) AIC Debug Control Register (Protect) -------- 
AT91C_AIC_DCR_PROT        EQU (0x1:SHL:0) ;- (AIC) Protection Mode
AT91C_AIC_DCR_GMSK        EQU (0x1:SHL:1) ;- (AIC) General Mask

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Peripheral DMA Controller
;- *****************************************************************************
                ^ 0 ;- AT91S_PDC
PDC_RPR         #  4 ;- Receive Pointer Register
PDC_RCR         #  4 ;- Receive Counter Register
PDC_TPR         #  4 ;- Transmit Pointer Register
PDC_TCR         #  4 ;- Transmit Counter Register
PDC_RNPR        #  4 ;- Receive Next Pointer Register
PDC_RNCR        #  4 ;- Receive Next Counter Register
PDC_TNPR        #  4 ;- Transmit Next Pointer Register
PDC_TNCR        #  4 ;- Transmit Next Counter Register
PDC_PTCR        #  4 ;- PDC Transfer Control Register
PDC_PTSR        #  4 ;- PDC Transfer Status Register
;- -------- PDC_PTCR : (PDC Offset: 0x20) PDC Transfer Control Register -------- 
AT91C_PDC_RXTEN           EQU (0x1:SHL:0) ;- (PDC) Receiver Transfer Enable
AT91C_PDC_RXTDIS          EQU (0x1:SHL:1) ;- (PDC) Receiver Transfer Disable
AT91C_PDC_TXTEN           EQU (0x1:SHL:8) ;- (PDC) Transmitter Transfer Enable
AT91C_PDC_TXTDIS          EQU (0x1:SHL:9) ;- (PDC) Transmitter Transfer Disable
;- -------- PDC_PTSR : (PDC Offset: 0x24) PDC Transfer Status Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Debug Unit
;- *****************************************************************************
                ^ 0 ;- AT91S_DBGU
DBGU_CR         #  4 ;- Control Register
DBGU_MR         #  4 ;- Mode Register
DBGU_IER        #  4 ;- Interrupt Enable Register
DBGU_IDR        #  4 ;- Interrupt Disable Register
DBGU_IMR        #  4 ;- Interrupt Mask Register
DBGU_CSR        #  4 ;- Channel Status Register
DBGU_RHR        #  4 ;- Receiver Holding Register
DBGU_THR        #  4 ;- Transmitter Holding Register
DBGU_BRGR       #  4 ;- Baud Rate Generator Register
                # 28 ;- Reserved
DBGU_CIDR       #  4 ;- Chip ID Register
DBGU_EXID       #  4 ;- Chip ID Extension Register
DBGU_FNTR       #  4 ;- Force NTRST Register
                # 180 ;- Reserved
DBGU_RPR        #  4 ;- Receive Pointer Register
DBGU_RCR        #  4 ;- Receive Counter Register
DBGU_TPR        #  4 ;- Transmit Pointer Register
DBGU_TCR        #  4 ;- Transmit Counter Register
DBGU_RNPR       #  4 ;- Receive Next Pointer Register
DBGU_RNCR       #  4 ;- Receive Next Counter Register
DBGU_TNPR       #  4 ;- Transmit Next Pointer Register
DBGU_TNCR       #  4 ;- Transmit Next Counter Register
DBGU_PTCR       #  4 ;- PDC Transfer Control Register
DBGU_PTSR       #  4 ;- PDC Transfer Status Register
;- -------- DBGU_CR : (DBGU Offset: 0x0) Debug Unit Control Register -------- 
AT91C_US_RSTRX            EQU (0x1:SHL:2) ;- (DBGU) Reset Receiver
AT91C_US_RSTTX            EQU (0x1:SHL:3) ;- (DBGU) Reset Transmitter
AT91C_US_RXEN             EQU (0x1:SHL:4) ;- (DBGU) Receiver Enable
AT91C_US_RXDIS            EQU (0x1:SHL:5) ;- (DBGU) Receiver Disable
AT91C_US_TXEN             EQU (0x1:SHL:6) ;- (DBGU) Transmitter Enable
AT91C_US_TXDIS            EQU (0x1:SHL:7) ;- (DBGU) Transmitter Disable
AT91C_US_RSTSTA           EQU (0x1:SHL:8) ;- (DBGU) Reset Status Bits
;- -------- DBGU_MR : (DBGU Offset: 0x4) Debug Unit Mode Register -------- 
AT91C_US_PAR              EQU (0x7:SHL:9) ;- (DBGU) Parity type
AT91C_US_PAR_EVEN         EQU (0x0:SHL:9) ;- (DBGU) Even Parity
AT91C_US_PAR_ODD          EQU (0x1:SHL:9) ;- (DBGU) Odd Parity
AT91C_US_PAR_SPACE        EQU (0x2:SHL:9) ;- (DBGU) Parity forced to 0 (Space)
AT91C_US_PAR_MARK         EQU (0x3:SHL:9) ;- (DBGU) Parity forced to 1 (Mark)
AT91C_US_PAR_NONE         EQU (0x4:SHL:9) ;- (DBGU) No Parity
AT91C_US_PAR_MULTI_DROP   EQU (0x6:SHL:9) ;- (DBGU) Multi-drop mode
AT91C_US_CHMODE           EQU (0x3:SHL:14) ;- (DBGU) Channel Mode
AT91C_US_CHMODE_NORMAL    EQU (0x0:SHL:14) ;- (DBGU) Normal Mode: The USART channel operates as an RX/TX USART.
AT91C_US_CHMODE_AUTO      EQU (0x1:SHL:14) ;- (DBGU) Automatic Echo: Receiver Data Input is connected to the TXD pin.
AT91C_US_CHMODE_LOCAL     EQU (0x2:SHL:14) ;- (DBGU) Local Loopback: Transmitter Output Signal is connected to Receiver Input Signal.
AT91C_US_CHMODE_REMOTE    EQU (0x3:SHL:14) ;- (DBGU) Remote Loopback: RXD pin is internally connected to TXD pin.
;- -------- DBGU_IER : (DBGU Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
AT91C_US_RXRDY            EQU (0x1:SHL:0) ;- (DBGU) RXRDY Interrupt
AT91C_US_TXRDY            EQU (0x1:SHL:1) ;- (DBGU) TXRDY Interrupt
AT91C_US_ENDRX            EQU (0x1:SHL:3) ;- (DBGU) End of Receive Transfer Interrupt
AT91C_US_ENDTX            EQU (0x1:SHL:4) ;- (DBGU) End of Transmit Interrupt
AT91C_US_OVRE             EQU (0x1:SHL:5) ;- (DBGU) Overrun Interrupt
AT91C_US_FRAME            EQU (0x1:SHL:6) ;- (DBGU) Framing Error Interrupt
AT91C_US_PARE             EQU (0x1:SHL:7) ;- (DBGU) Parity Error Interrupt
AT91C_US_TXEMPTY          EQU (0x1:SHL:9) ;- (DBGU) TXEMPTY Interrupt
AT91C_US_TXBUFE           EQU (0x1:SHL:11) ;- (DBGU) TXBUFE Interrupt
AT91C_US_RXBUFF           EQU (0x1:SHL:12) ;- (DBGU) RXBUFF Interrupt
AT91C_US_COMM_TX          EQU (0x1:SHL:30) ;- (DBGU) COMM_TX Interrupt
AT91C_US_COMM_RX          EQU (0x1:SHL:31) ;- (DBGU) COMM_RX Interrupt
;- -------- DBGU_IDR : (DBGU Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
;- -------- DBGU_IMR : (DBGU Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
;- -------- DBGU_CSR : (DBGU Offset: 0x14) Debug Unit Channel Status Register -------- 
;- -------- DBGU_FNTR : (DBGU Offset: 0x48) Debug Unit FORCE_NTRST Register -------- 
AT91C_US_FORCE_NTRST      EQU (0x1:SHL:0) ;- (DBGU) Force NTRST in JTAG

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Parallel Input Output Controler
;- *****************************************************************************
                ^ 0 ;- AT91S_PIO
PIO_PER         #  4 ;- PIO Enable Register
PIO_PDR         #  4 ;- PIO Disable Register
PIO_PSR         #  4 ;- PIO Status Register
                #  4 ;- Reserved
PIO_OER         #  4 ;- Output Enable Register
PIO_ODR         #  4 ;- Output Disable Registerr
PIO_OSR         #  4 ;- Output Status Register
                #  4 ;- Reserved
PIO_IFER        #  4 ;- Input Filter Enable Register
PIO_IFDR        #  4 ;- Input Filter Disable Register
PIO_IFSR        #  4 ;- Input Filter Status Register
                #  4 ;- Reserved
PIO_SODR        #  4 ;- Set Output Data Register
PIO_CODR        #  4 ;- Clear Output Data Register
PIO_ODSR        #  4 ;- Output Data Status Register
PIO_PDSR        #  4 ;- Pin Data Status Register
PIO_IER         #  4 ;- Interrupt Enable Register
PIO_IDR         #  4 ;- Interrupt Disable Register
PIO_IMR         #  4 ;- Interrupt Mask Register
PIO_ISR         #  4 ;- Interrupt Status Register
PIO_MDER        #  4 ;- Multi-driver Enable Register
PIO_MDDR        #  4 ;- Multi-driver Disable Register
PIO_MDSR        #  4 ;- Multi-driver Status Register
                #  4 ;- Reserved
PIO_PPUDR       #  4 ;- Pull-up Disable Register
PIO_PPUER       #  4 ;- Pull-up Enable Register
PIO_PPUSR       #  4 ;- Pull-up Status Register
                #  4 ;- Reserved
PIO_ASR         #  4 ;- Select A Register
PIO_BSR         #  4 ;- Select B Register
PIO_ABSR        #  4 ;- AB Select Status Register
                # 36 ;- Reserved
PIO_OWER        #  4 ;- Output Write Enable Register
PIO_OWDR        #  4 ;- Output Write Disable Register
PIO_OWSR        #  4 ;- Output Write Status Register

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Clock Generator Controler
;- *****************************************************************************
                ^ 0 ;- AT91S_CKGR
CKGR_MOR        #  4 ;- Main Oscillator Register
CKGR_MCFR       #  4 ;- Main Clock  Frequency Register
CKGR_PLLAR      #  4 ;- PLL A Register
CKGR_PLLBR      #  4 ;- PLL B Register
;- -------- CKGR_MOR : (CKGR Offset: 0x0) Main Oscillator Register -------- 
AT91C_CKGR_MOSCEN         EQU (0x1:SHL:0) ;- (CKGR) Main Oscillator Enable
AT91C_CKGR_OSCBYPASS      EQU (0x1:SHL:1) ;- (CKGR) Main Oscillator Bypass
AT91C_CKGR_OSCOUNT        EQU (0xFF:SHL:8) ;- (CKGR) Main Oscillator Start-up Time
;- -------- CKGR_MCFR : (CKGR Offset: 0x4) Main Clock Frequency Register -------- 
AT91C_CKGR_MAINF          EQU (0xFFFF:SHL:0) ;- (CKGR) Main Clock Frequency
AT91C_CKGR_MAINRDY        EQU (0x1:SHL:16) ;- (CKGR) Main Clock Ready
;- -------- CKGR_PLLAR : (CKGR Offset: 0x8) PLL A Register -------- 
AT91C_CKGR_DIVA           EQU (0xFF:SHL:0) ;- (CKGR) Divider A Selected
AT91C_CKGR_DIVA_0         EQU (0x0) ;- (CKGR) Divider A output is 0
AT91C_CKGR_DIVA_BYPASS    EQU (0x1) ;- (CKGR) Divider A is bypassed
AT91C_CKGR_PLLACOUNT      EQU (0x3F:SHL:8) ;- (CKGR) PLL A Counter
AT91C_CKGR_OUTA           EQU (0x3:SHL:14) ;- (CKGR) PLL A Output Frequency Range
AT91C_CKGR_OUTA_0         EQU (0x0:SHL:14) ;- (CKGR) Please refer to the PLLA datasheet
AT91C_CKGR_OUTA_1         EQU (0x1:SHL:14) ;- (CKGR) Please refer to the PLLA datasheet
AT91C_CKGR_OUTA_2         EQU (0x2:SHL:14) ;- (CKGR) Please refer to the PLLA datasheet
AT91C_CKGR_OUTA_3         EQU (0x3:SHL:14) ;- (CKGR) Please refer to the PLLA datasheet
AT91C_CKGR_MULA           EQU (0x7FF:SHL:16) ;- (CKGR) PLL A Multiplier
AT91C_CKGR_SRCA           EQU (0x1:SHL:29) ;- (CKGR) 
;- -------- CKGR_PLLBR : (CKGR Offset: 0xc) PLL B Register -------- 
AT91C_CKGR_DIVB           EQU (0xFF:SHL:0) ;- (CKGR) Divider B Selected
AT91C_CKGR_DIVB_0         EQU (0x0) ;- (CKGR) Divider B output is 0
AT91C_CKGR_DIVB_BYPASS    EQU (0x1) ;- (CKGR) Divider B is bypassed
AT91C_CKGR_PLLBCOUNT      EQU (0x3F:SHL:8) ;- (CKGR) PLL B Counter
AT91C_CKGR_OUTB           EQU (0x3:SHL:14) ;- (CKGR) PLL B Output Frequency Range
AT91C_CKGR_OUTB_0         EQU (0x0:SHL:14) ;- (CKGR) Please refer to the PLLB datasheet
AT91C_CKGR_OUTB_1         EQU (0x1:SHL:14) ;- (CKGR) Please refer to the PLLB datasheet
AT91C_CKGR_OUTB_2         EQU (0x2:SHL:14) ;- (CKGR) Please refer to the PLLB datasheet
AT91C_CKGR_OUTB_3         EQU (0x3:SHL:14) ;- (CKGR) Please refer to the PLLB datasheet
AT91C_CKGR_MULB           EQU (0x7FF:SHL:16) ;- (CKGR) PLL B Multiplier
AT91C_CKGR_USBDIV         EQU (0x3:SHL:28) ;- (CKGR) Divider for USB Clocks
AT91C_CKGR_USBDIV_0       EQU (0x0:SHL:28) ;- (CKGR) Divider output is PLL clock output
AT91C_CKGR_USBDIV_1       EQU (0x1:SHL:28) ;- (CKGR) Divider output is PLL clock output divided by 2
AT91C_CKGR_USBDIV_2       EQU (0x2:SHL:28) ;- (CKGR) Divider output is PLL clock output divided by 4

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Power Management Controler
;- *****************************************************************************
                ^ 0 ;- AT91S_PMC
PMC_SCER        #  4 ;- System Clock Enable Register
PMC_SCDR        #  4 ;- System Clock Disable Register
PMC_SCSR        #  4 ;- System Clock Status Register
                #  4 ;- Reserved
PMC_PCER        #  4 ;- Peripheral Clock Enable Register
PMC_PCDR        #  4 ;- Peripheral Clock Disable Register
PMC_PCSR        #  4 ;- Peripheral Clock Status Register
                #  4 ;- Reserved
PMC_MOR         #  4 ;- Main Oscillator Register
PMC_MCFR        #  4 ;- Main Clock  Frequency Register
PMC_PLLAR       #  4 ;- PLL A Register
PMC_PLLBR       #  4 ;- PLL B Register
PMC_MCKR        #  4 ;- Master Clock Register
                # 12 ;- Reserved
PMC_PCKR        # 32 ;- Programmable Clock Register
PMC_IER         #  4 ;- Interrupt Enable Register
PMC_IDR         #  4 ;- Interrupt Disable Register
PMC_SR          #  4 ;- Status Register
PMC_IMR         #  4 ;- Interrupt Mask Register
;- -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register -------- 
AT91C_PMC_PCK             EQU (0x1:SHL:0) ;- (PMC) Processor Clock
AT91C_PMC_UHP             EQU (0x1:SHL:6) ;- (PMC) USB Host Port Clock
AT91C_PMC_UDP             EQU (0x1:SHL:7) ;- (PMC) USB Device Port Clock
AT91C_PMC_PCK0            EQU (0x1:SHL:8) ;- (PMC) Programmable Clock Output
AT91C_PMC_PCK1            EQU (0x1:SHL:9) ;- (PMC) Programmable Clock Output
AT91C_PMC_PCK2            EQU (0x1:SHL:10) ;- (PMC) Programmable Clock Output
AT91C_PMC_PCK3            EQU (0x1:SHL:11) ;- (PMC) Programmable Clock Output
AT91C_PMC_HCK0            EQU (0x1:SHL:16) ;- (PMC) AHB UHP Clock Output
AT91C_PMC_HCK1            EQU (0x1:SHL:17) ;- (PMC) AHB LCDC Clock Output
;- -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register -------- 
;- -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register -------- 
;- -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register -------- 
;- -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Frequency Register -------- 
;- -------- CKGR_PLLAR : (PMC Offset: 0x28) PLL A Register -------- 
;- -------- CKGR_PLLBR : (PMC Offset: 0x2c) PLL B Register -------- 
;- -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register -------- 
AT91C_PMC_CSS             EQU (0x3:SHL:0) ;- (PMC) Programmable Clock Selection
AT91C_PMC_CSS_SLOW_CLK    EQU (0x0) ;- (PMC) Slow Clock is selected
AT91C_PMC_CSS_MAIN_CLK    EQU (0x1) ;- (PMC) Main Clock is selected
AT91C_PMC_CSS_PLLA_CLK    EQU (0x2) ;- (PMC) Clock from PLL A is selected
AT91C_PMC_CSS_PLLB_CLK    EQU (0x3) ;- (PMC) Clock from PLL B is selected
AT91C_PMC_PRES            EQU (0x7:SHL:2) ;- (PMC) Programmable Clock Prescaler
AT91C_PMC_PRES_CLK        EQU (0x0:SHL:2) ;- (PMC) Selected clock
AT91C_PMC_PRES_CLK_2      EQU (0x1:SHL:2) ;- (PMC) Selected clock divided by 2
AT91C_PMC_PRES_CLK_4      EQU (0x2:SHL:2) ;- (PMC) Selected clock divided by 4
AT91C_PMC_PRES_CLK_8      EQU (0x3:SHL:2) ;- (PMC) Selected clock divided by 8
AT91C_PMC_PRES_CLK_16     EQU (0x4:SHL:2) ;- (PMC) Selected clock divided by 16
AT91C_PMC_PRES_CLK_32     EQU (0x5:SHL:2) ;- (PMC) Selected clock divided by 32
AT91C_PMC_PRES_CLK_64     EQU (0x6:SHL:2) ;- (PMC) Selected clock divided by 64
AT91C_PMC_MDIV            EQU (0x3:SHL:8) ;- (PMC) Master Clock Division
AT91C_PMC_MDIV_1          EQU (0x0:SHL:8) ;- (PMC) The master clock and the processor clock are the same
AT91C_PMC_MDIV_2          EQU (0x1:SHL:8) ;- (PMC) The processor clock is twice as fast as the master clock
AT91C_PMC_MDIV_3          EQU (0x2:SHL:8) ;- (PMC) The processor clock is four times faster than the master clock
;- -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register -------- 
;- -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register -------- 
AT91C_PMC_MOSCS           EQU (0x1:SHL:0) ;- (PMC) MOSC Status/Enable/Disable/Mask
AT91C_PMC_LOCKA           EQU (0x1:SHL:1) ;- (PMC) PLL A Status/Enable/Disable/Mask
AT91C_PMC_LOCKB           EQU (0x1:SHL:2) ;- (PMC) PLL B Status/Enable/Disable/Mask
AT91C_PMC_MCKRDY          EQU (0x1:SHL:3) ;- (PMC) Master Clock Status/Enable/Disable/Mask
AT91C_PMC_PCK0RDY         EQU (0x1:SHL:8) ;- (PMC) PCK0_RDY Status/Enable/Disable/Mask
AT91C_PMC_PCK1RDY         EQU (0x1:SHL:9) ;- (PMC) PCK1_RDY Status/Enable/Disable/Mask
AT91C_PMC_PCK2RDY         EQU (0x1:SHL:10) ;- (PMC) PCK2_RDY Status/Enable/Disable/Mask
AT91C_PMC_PCK3RDY         EQU (0x1:SHL:11) ;- (PMC) PCK3_RDY Status/Enable/Disable/Mask
;- -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register -------- 
;- -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register -------- 
;- -------- PMC_IMR : (PMC Offset: 0x6c) PMC Interrupt Mask Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Reset Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_RSTC
RSTC_RCR        #  4 ;- Reset Control Register
RSTC_RSR        #  4 ;- Reset Status Register
RSTC_RMR        #  4 ;- Reset Mode Register
;- -------- RSTC_RCR : (RSTC Offset: 0x0) Reset Control Register -------- 
AT91C_RSTC_PROCRST        EQU (0x1:SHL:0) ;- (RSTC) Processor Reset
AT91C_RSTC_ICERST         EQU (0x1:SHL:1) ;- (RSTC) ICE Interface Reset
AT91C_RSTC_PERRST         EQU (0x1:SHL:2) ;- (RSTC) Peripheral Reset
AT91C_RSTC_EXTRST         EQU (0x1:SHL:3) ;- (RSTC) External Reset
AT91C_RSTC_KEY            EQU (0xFF:SHL:24) ;- (RSTC) Password
;- -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register -------- 
AT91C_RSTC_URSTS          EQU (0x1:SHL:0) ;- (RSTC) User Reset Status
AT91C_RSTC_RSTTYP         EQU (0x7:SHL:8) ;- (RSTC) Reset Type
AT91C_RSTC_RSTTYP_GENERAL EQU (0x0:SHL:8) ;- (RSTC) General reset. Both VDDCORE and VDDBU rising.
AT91C_RSTC_RSTTYP_WAKEUP  EQU (0x1:SHL:8) ;- (RSTC) WakeUp Reset. VDDCORE rising.
AT91C_RSTC_RSTTYP_WATCHDOG EQU (0x2:SHL:8) ;- (RSTC) Watchdog Reset. Watchdog overflow occured.
AT91C_RSTC_RSTTYP_SOFTWARE EQU (0x3:SHL:8) ;- (RSTC) Software Reset. Processor reset required by the software.
AT91C_RSTC_RSTTYP_USER    EQU (0x4:SHL:8) ;- (RSTC) User Reset. NRST pin detected low.
AT91C_RSTC_NRSTL          EQU (0x1:SHL:16) ;- (RSTC) NRST pin level
AT91C_RSTC_SRCMP          EQU (0x1:SHL:17) ;- (RSTC) Software Reset Command in Progress.
;- -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register -------- 
AT91C_RSTC_URSTEN         EQU (0x1:SHL:0) ;- (RSTC) User Reset Enable
AT91C_RSTC_URSTIEN        EQU (0x1:SHL:4) ;- (RSTC) User Reset Interrupt Enable
AT91C_RSTC_ERSTL          EQU (0xF:SHL:8) ;- (RSTC) User Reset Enable

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Shut Down Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_SHDWC
SHDWC_SHCR      #  4 ;- Shut Down Control Register
SHDWC_SHMR      #  4 ;- Shut Down Mode Register
SHDWC_SHSR      #  4 ;- Shut Down Status Register
;- -------- SHDWC_SHCR : (SHDWC Offset: 0x0) Shut Down Control Register -------- 
AT91C_SHDWC_SHDW          EQU (0x1:SHL:0) ;- (SHDWC) Processor Reset
AT91C_SHDWC_KEY           EQU (0xFF:SHL:24) ;- (SHDWC) Shut down KEY Password
;- -------- SHDWC_SHMR : (SHDWC Offset: 0x4) Shut Down Mode Register -------- 
AT91C_SHDWC_WKMODE0       EQU (0x3:SHL:0) ;- (SHDWC) Wake Up 0 Mode Selection
AT91C_SHDWC_WKMODE0_NONE  EQU (0x0) ;- (SHDWC) None. No detection is performed on the wake up input.
AT91C_SHDWC_WKMODE0_HIGH  EQU (0x1) ;- (SHDWC) High Level.
AT91C_SHDWC_WKMODE0_LOW   EQU (0x2) ;- (SHDWC) Low Level.
AT91C_SHDWC_WKMODE0_ANYLEVEL EQU (0x3) ;- (SHDWC) Any level change.
AT91C_SHDWC_CPTWK0        EQU (0xF:SHL:4) ;- (SHDWC) Counter On Wake Up 0
AT91C_SHDWC_RTTWKEN       EQU (0x1:SHL:16) ;- (SHDWC) Real Time Timer Wake Up Enable
;- -------- SHDWC_SHSR : (SHDWC Offset: 0x8) Shut Down Status Register -------- 
AT91C_SHDWC_WAKEUP0       EQU (0x1:SHL:0) ;- (SHDWC) Wake Up 0 Status
AT91C_SHDWC_RTTWK         EQU (0x1:SHL:16) ;- (SHDWC) Real Time Timer wake Up

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Real Time Timer Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_RTTC
RTTC_RTMR       #  4 ;- Real-time Mode Register
RTTC_RTAR       #  4 ;- Real-time Alarm Register
RTTC_RTVR       #  4 ;- Real-time Value Register
RTTC_RTSR       #  4 ;- Real-time Status Register
;- -------- RTTC_RTMR : (RTTC Offset: 0x0) Real-time Mode Register -------- 
AT91C_RTTC_RTPRES         EQU (0xFFFF:SHL:0) ;- (RTTC) Real-time Timer Prescaler Value
AT91C_RTTC_ALMIEN         EQU (0x1:SHL:16) ;- (RTTC) Alarm Interrupt Enable
AT91C_RTTC_RTTINCIEN      EQU (0x1:SHL:17) ;- (RTTC) Real Time Timer Increment Interrupt Enable
AT91C_RTTC_RTTRST         EQU (0x1:SHL:18) ;- (RTTC) Real Time Timer Restart
;- -------- RTTC_RTAR : (RTTC Offset: 0x4) Real-time Alarm Register -------- 
AT91C_RTTC_ALMV           EQU (0x0:SHL:0) ;- (RTTC) Alarm Value
;- -------- RTTC_RTVR : (RTTC Offset: 0x8) Current Real-time Value Register -------- 
AT91C_RTTC_CRTV           EQU (0x0:SHL:0) ;- (RTTC) Current Real-time Value
;- -------- RTTC_RTSR : (RTTC Offset: 0xc) Real-time Status Register -------- 
AT91C_RTTC_ALMS           EQU (0x1:SHL:0) ;- (RTTC) Real-time Alarm Status
AT91C_RTTC_RTTINC         EQU (0x1:SHL:1) ;- (RTTC) Real-time Timer Increment

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Periodic Interval Timer Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_PITC
PITC_PIMR       #  4 ;- Period Interval Mode Register
PITC_PISR       #  4 ;- Period Interval Status Register
PITC_PIVR       #  4 ;- Period Interval Value Register
PITC_PIIR       #  4 ;- Period Interval Image Register
;- -------- PITC_PIMR : (PITC Offset: 0x0) Periodic Interval Mode Register -------- 
AT91C_PITC_PIV            EQU (0xFFFFF:SHL:0) ;- (PITC) Periodic Interval Value
AT91C_PITC_PITEN          EQU (0x1:SHL:24) ;- (PITC) Periodic Interval Timer Enabled
AT91C_PITC_PITIEN         EQU (0x1:SHL:25) ;- (PITC) Periodic Interval Timer Interrupt Enable
;- -------- PITC_PISR : (PITC Offset: 0x4) Periodic Interval Status Register -------- 
AT91C_PITC_PITS           EQU (0x1:SHL:0) ;- (PITC) Periodic Interval Timer Status
;- -------- PITC_PIVR : (PITC Offset: 0x8) Periodic Interval Value Register -------- 
AT91C_PITC_CPIV           EQU (0xFFFFF:SHL:0) ;- (PITC) Current Periodic Interval Value
AT91C_PITC_PICNT          EQU (0xFFF:SHL:20) ;- (PITC) Periodic Interval Counter
;- -------- PITC_PIIR : (PITC Offset: 0xc) Periodic Interval Image Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Watchdog Timer Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_WDTC
WDTC_WDCR       #  4 ;- Watchdog Control Register
WDTC_WDMR       #  4 ;- Watchdog Mode Register
WDTC_WDSR       #  4 ;- Watchdog Status Register
;- -------- WDTC_WDCR : (WDTC Offset: 0x0) Periodic Interval Image Register -------- 
AT91C_WDTC_WDRSTT         EQU (0x1:SHL:0) ;- (WDTC) Watchdog Restart
AT91C_WDTC_KEY            EQU (0xFF:SHL:24) ;- (WDTC) Watchdog KEY Password
;- -------- WDTC_WDMR : (WDTC Offset: 0x4) Watchdog Mode Register -------- 
AT91C_WDTC_WDV            EQU (0xFFF:SHL:0) ;- (WDTC) Watchdog Timer Restart
AT91C_WDTC_WDFIEN         EQU (0x1:SHL:12) ;- (WDTC) Watchdog Fault Interrupt Enable
AT91C_WDTC_WDRSTEN        EQU (0x1:SHL:13) ;- (WDTC) Watchdog Reset Enable
AT91C_WDTC_WDRPROC        EQU (0x1:SHL:14) ;- (WDTC) Watchdog Timer Restart
AT91C_WDTC_WDDIS          EQU (0x1:SHL:15) ;- (WDTC) Watchdog Disable
AT91C_WDTC_WDD            EQU (0xFFF:SHL:16) ;- (WDTC) Watchdog Delta Value
AT91C_WDTC_WDDBGHLT       EQU (0x1:SHL:28) ;- (WDTC) Watchdog Debug Halt
AT91C_WDTC_WDIDLEHLT      EQU (0x1:SHL:29) ;- (WDTC) Watchdog Idle Halt
;- -------- WDTC_WDSR : (WDTC Offset: 0x8) Watchdog Status Register -------- 
AT91C_WDTC_WDUNF          EQU (0x1:SHL:0) ;- (WDTC) Watchdog Underflow
AT91C_WDTC_WDERR          EQU (0x1:SHL:1) ;- (WDTC) Watchdog Error

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Timer Counter Channel Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_TC
TC_CCR          #  4 ;- Channel Control Register
TC_CMR          #  4 ;- Channel Mode Register (Capture Mode / Waveform Mode)
                #  8 ;- Reserved
TC_CV           #  4 ;- Counter Value
TC_RA           #  4 ;- Register A
TC_RB           #  4 ;- Register B
TC_RC           #  4 ;- Register C
TC_SR           #  4 ;- Status Register
TC_IER          #  4 ;- Interrupt Enable Register
TC_IDR          #  4 ;- Interrupt Disable Register
TC_IMR          #  4 ;- Interrupt Mask Register
;- -------- TC_CCR : (TC Offset: 0x0) TC Channel Control Register -------- 
AT91C_TC_CLKEN            EQU (0x1:SHL:0) ;- (TC) Counter Clock Enable Command
AT91C_TC_CLKDIS           EQU (0x1:SHL:1) ;- (TC) Counter Clock Disable Command
AT91C_TC_SWTRG            EQU (0x1:SHL:2) ;- (TC) Software Trigger Command
;- -------- TC_CMR : (TC Offset: 0x4) TC Channel Mode Register: Capture Mode / Waveform Mode -------- 
AT91C_TC_CLKS             EQU (0x7:SHL:0) ;- (TC) Clock Selection
AT91C_TC_CLKS_TIMER_DIV1_CLOCK EQU (0x0) ;- (TC) Clock selected: TIMER_DIV1_CLOCK
AT91C_TC_CLKS_TIMER_DIV2_CLOCK EQU (0x1) ;- (TC) Clock selected: TIMER_DIV2_CLOCK
AT91C_TC_CLKS_TIMER_DIV3_CLOCK EQU (0x2) ;- (TC) Clock selected: TIMER_DIV3_CLOCK
AT91C_TC_CLKS_TIMER_DIV4_CLOCK EQU (0x3) ;- (TC) Clock selected: TIMER_DIV4_CLOCK
AT91C_TC_CLKS_TIMER_DIV5_CLOCK EQU (0x4) ;- (TC) Clock selected: TIMER_DIV5_CLOCK
AT91C_TC_CLKS_XC0         EQU (0x5) ;- (TC) Clock selected: XC0
AT91C_TC_CLKS_XC1         EQU (0x6) ;- (TC) Clock selected: XC1
AT91C_TC_CLKS_XC2         EQU (0x7) ;- (TC) Clock selected: XC2
AT91C_TC_CLKI             EQU (0x1:SHL:3) ;- (TC) Clock Invert
AT91C_TC_BURST            EQU (0x3:SHL:4) ;- (TC) Burst Signal Selection
AT91C_TC_BURST_NONE       EQU (0x0:SHL:4) ;- (TC) The clock is not gated by an external signal
AT91C_TC_BURST_XC0        EQU (0x1:SHL:4) ;- (TC) XC0 is ANDed with the selected clock
AT91C_TC_BURST_XC1        EQU (0x2:SHL:4) ;- (TC) XC1 is ANDed with the selected clock
AT91C_TC_BURST_XC2        EQU (0x3:SHL:4) ;- (TC) XC2 is ANDed with the selected clock
AT91C_TC_CPCSTOP          EQU (0x1:SHL:6) ;- (TC) Counter Clock Stopped with RC Compare
AT91C_TC_LDBSTOP          EQU (0x1:SHL:6) ;- (TC) Counter Clock Stopped with RB Loading
AT91C_TC_CPCDIS           EQU (0x1:SHL:7) ;- (TC) Counter Clock Disable with RC Compare
AT91C_TC_LDBDIS           EQU (0x1:SHL:7) ;- (TC) Counter Clock Disabled with RB Loading
AT91C_TC_ETRGEDG          EQU (0x3:SHL:8) ;- (TC) External Trigger Edge Selection
AT91C_TC_ETRGEDG_NONE     EQU (0x0:SHL:8) ;- (TC) Edge: None
AT91C_TC_ETRGEDG_RISING   EQU (0x1:SHL:8) ;- (TC) Edge: rising edge
AT91C_TC_ETRGEDG_FALLING  EQU (0x2:SHL:8) ;- (TC) Edge: falling edge
AT91C_TC_ETRGEDG_BOTH     EQU (0x3:SHL:8) ;- (TC) Edge: each edge
AT91C_TC_EEVTEDG          EQU (0x3:SHL:8) ;- (TC) External Event Edge Selection
AT91C_TC_EEVTEDG_NONE     EQU (0x0:SHL:8) ;- (TC) Edge: None
AT91C_TC_EEVTEDG_RISING   EQU (0x1:SHL:8) ;- (TC) Edge: rising edge
AT91C_TC_EEVTEDG_FALLING  EQU (0x2:SHL:8) ;- (TC) Edge: falling edge
AT91C_TC_EEVTEDG_BOTH     EQU (0x3:SHL:8) ;- (TC) Edge: each edge
AT91C_TC_EEVT             EQU (0x3:SHL:10) ;- (TC) External Event  Selection
AT91C_TC_EEVT_TIOB        EQU (0x0:SHL:10) ;- (TC) Signal selected as external event: TIOB TIOB direction: input
AT91C_TC_EEVT_XC0         EQU (0x1:SHL:10) ;- (TC) Signal selected as external event: XC0 TIOB direction: output
AT91C_TC_EEVT_XC1         EQU (0x2:SHL:10) ;- (TC) Signal selected as external event: XC1 TIOB direction: output
AT91C_TC_EEVT_XC2         EQU (0x3:SHL:10) ;- (TC) Signal selected as external event: XC2 TIOB direction: output
AT91C_TC_ABETRG           EQU (0x1:SHL:10) ;- (TC) TIOA or TIOB External Trigger Selection
AT91C_TC_ENETRG           EQU (0x1:SHL:12) ;- (TC) External Event Trigger enable
AT91C_TC_WAVESEL          EQU (0x3:SHL:13) ;- (TC) Waveform  Selection
AT91C_TC_WAVESEL_UP       EQU (0x0:SHL:13) ;- (TC) UP mode without atomatic trigger on RC Compare
AT91C_TC_WAVESEL_UPDOWN   EQU (0x1:SHL:13) ;- (TC) UPDOWN mode without automatic trigger on RC Compare
AT91C_TC_WAVESEL_UP_AUTO  EQU (0x2:SHL:13) ;- (TC) UP mode with automatic trigger on RC Compare
AT91C_TC_WAVESEL_UPDOWN_AUTO EQU (0x3:SHL:13) ;- (TC) UPDOWN mode with automatic trigger on RC Compare
AT91C_TC_CPCTRG           EQU (0x1:SHL:14) ;- (TC) RC Compare Trigger Enable
AT91C_TC_WAVE             EQU (0x1:SHL:15) ;- (TC) 
AT91C_TC_ACPA             EQU (0x3:SHL:16) ;- (TC) RA Compare Effect on TIOA
AT91C_TC_ACPA_NONE        EQU (0x0:SHL:16) ;- (TC) Effect: none
AT91C_TC_ACPA_SET         EQU (0x1:SHL:16) ;- (TC) Effect: set
AT91C_TC_ACPA_CLEAR       EQU (0x2:SHL:16) ;- (TC) Effect: clear
AT91C_TC_ACPA_TOGGLE      EQU (0x3:SHL:16) ;- (TC) Effect: toggle
AT91C_TC_LDRA             EQU (0x3:SHL:16) ;- (TC) RA Loading Selection
AT91C_TC_LDRA_NONE        EQU (0x0:SHL:16) ;- (TC) Edge: None
AT91C_TC_LDRA_RISING      EQU (0x1:SHL:16) ;- (TC) Edge: rising edge of TIOA
AT91C_TC_LDRA_FALLING     EQU (0x2:SHL:16) ;- (TC) Edge: falling edge of TIOA
AT91C_TC_LDRA_BOTH        EQU (0x3:SHL:16) ;- (TC) Edge: each edge of TIOA
AT91C_TC_ACPC             EQU (0x3:SHL:18) ;- (TC) RC Compare Effect on TIOA
AT91C_TC_ACPC_NONE        EQU (0x0:SHL:18) ;- (TC) Effect: none
AT91C_TC_ACPC_SET         EQU (0x1:SHL:18) ;- (TC) Effect: set
AT91C_TC_ACPC_CLEAR       EQU (0x2:SHL:18) ;- (TC) Effect: clear
AT91C_TC_ACPC_TOGGLE      EQU (0x3:SHL:18) ;- (TC) Effect: toggle
AT91C_TC_LDRB             EQU (0x3:SHL:18) ;- (TC) RB Loading Selection
AT91C_TC_LDRB_NONE        EQU (0x0:SHL:18) ;- (TC) Edge: None
AT91C_TC_LDRB_RISING      EQU (0x1:SHL:18) ;- (TC) Edge: rising edge of TIOA
AT91C_TC_LDRB_FALLING     EQU (0x2:SHL:18) ;- (TC) Edge: falling edge of TIOA
AT91C_TC_LDRB_BOTH        EQU (0x3:SHL:18) ;- (TC) Edge: each edge of TIOA
AT91C_TC_AEEVT            EQU (0x3:SHL:20) ;- (TC) External Event Effect on TIOA
AT91C_TC_AEEVT_NONE       EQU (0x0:SHL:20) ;- (TC) Effect: none
AT91C_TC_AEEVT_SET        EQU (0x1:SHL:20) ;- (TC) Effect: set
AT91C_TC_AEEVT_CLEAR      EQU (0x2:SHL:20) ;- (TC) Effect: clear
AT91C_TC_AEEVT_TOGGLE     EQU (0x3:SHL:20) ;- (TC) Effect: toggle
AT91C_TC_ASWTRG           EQU (0x3:SHL:22) ;- (TC) Software Trigger Effect on TIOA
AT91C_TC_ASWTRG_NONE      EQU (0x0:SHL:22) ;- (TC) Effect: none
AT91C_TC_ASWTRG_SET       EQU (0x1:SHL:22) ;- (TC) Effect: set
AT91C_TC_ASWTRG_CLEAR     EQU (0x2:SHL:22) ;- (TC) Effect: clear
AT91C_TC_ASWTRG_TOGGLE    EQU (0x3:SHL:22) ;- (TC) Effect: toggle
AT91C_TC_BCPB             EQU (0x3:SHL:24) ;- (TC) RB Compare Effect on TIOB
AT91C_TC_BCPB_NONE        EQU (0x0:SHL:24) ;- (TC) Effect: none
AT91C_TC_BCPB_SET         EQU (0x1:SHL:24) ;- (TC) Effect: set
AT91C_TC_BCPB_CLEAR       EQU (0x2:SHL:24) ;- (TC) Effect: clear
AT91C_TC_BCPB_TOGGLE      EQU (0x3:SHL:24) ;- (TC) Effect: toggle
AT91C_TC_BCPC             EQU (0x3:SHL:26) ;- (TC) RC Compare Effect on TIOB
AT91C_TC_BCPC_NONE        EQU (0x0:SHL:26) ;- (TC) Effect: none
AT91C_TC_BCPC_SET         EQU (0x1:SHL:26) ;- (TC) Effect: set
AT91C_TC_BCPC_CLEAR       EQU (0x2:SHL:26) ;- (TC) Effect: clear
AT91C_TC_BCPC_TOGGLE      EQU (0x3:SHL:26) ;- (TC) Effect: toggle
AT91C_TC_BEEVT            EQU (0x3:SHL:28) ;- (TC) External Event Effect on TIOB
AT91C_TC_BEEVT_NONE       EQU (0x0:SHL:28) ;- (TC) Effect: none
AT91C_TC_BEEVT_SET        EQU (0x1:SHL:28) ;- (TC) Effect: set
AT91C_TC_BEEVT_CLEAR      EQU (0x2:SHL:28) ;- (TC) Effect: clear
AT91C_TC_BEEVT_TOGGLE     EQU (0x3:SHL:28) ;- (TC) Effect: toggle
AT91C_TC_BSWTRG           EQU (0x3:SHL:30) ;- (TC) Software Trigger Effect on TIOB
AT91C_TC_BSWTRG_NONE      EQU (0x0:SHL:30) ;- (TC) Effect: none
AT91C_TC_BSWTRG_SET       EQU (0x1:SHL:30) ;- (TC) Effect: set
AT91C_TC_BSWTRG_CLEAR     EQU (0x2:SHL:30) ;- (TC) Effect: clear
AT91C_TC_BSWTRG_TOGGLE    EQU (0x3:SHL:30) ;- (TC) Effect: toggle
;- -------- TC_SR : (TC Offset: 0x20) TC Channel Status Register -------- 
AT91C_TC_COVFS            EQU (0x1:SHL:0) ;- (TC) Counter Overflow
AT91C_TC_LOVRS            EQU (0x1:SHL:1) ;- (TC) Load Overrun
AT91C_TC_CPAS             EQU (0x1:SHL:2) ;- (TC) RA Compare
AT91C_TC_CPBS             EQU (0x1:SHL:3) ;- (TC) RB Compare
AT91C_TC_CPCS             EQU (0x1:SHL:4) ;- (TC) RC Compare
AT91C_TC_LDRAS            EQU (0x1:SHL:5) ;- (TC) RA Loading
AT91C_TC_LDRBS            EQU (0x1:SHL:6) ;- (TC) RB Loading
AT91C_TC_ETRGS            EQU (0x1:SHL:7) ;- (TC) External Trigger
AT91C_TC_CLKSTA           EQU (0x1:SHL:16) ;- (TC) Clock Enabling
AT91C_TC_MTIOA            EQU (0x1:SHL:17) ;- (TC) TIOA Mirror
AT91C_TC_MTIOB            EQU (0x1:SHL:18) ;- (TC) TIOA Mirror
;- -------- TC_IER : (TC Offset: 0x24) TC Channel Interrupt Enable Register -------- 
;- -------- TC_IDR : (TC Offset: 0x28) TC Channel Interrupt Disable Register -------- 
;- -------- TC_IMR : (TC Offset: 0x2c) TC Channel Interrupt Mask Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Timer Counter Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_TCB
TCB_TC0         # 48 ;- TC Channel 0
                # 16 ;- Reserved
TCB_TC1         # 48 ;- TC Channel 1
                # 16 ;- Reserved
TCB_TC2         # 48 ;- TC Channel 2
                # 16 ;- Reserved
TCB_BCR         #  4 ;- TC Block Control Register
TCB_BMR         #  4 ;- TC Block Mode Register
;- -------- TCB_BCR : (TCB Offset: 0xc0) TC Block Control Register -------- 
AT91C_TCB_SYNC            EQU (0x1:SHL:0) ;- (TCB) Synchro Command
;- -------- TCB_BMR : (TCB Offset: 0xc4) TC Block Mode Register -------- 
AT91C_TCB_TC0XC0S         EQU (0x3:SHL:0) ;- (TCB) External Clock Signal 0 Selection
AT91C_TCB_TC0XC0S_TCLK0   EQU (0x0) ;- (TCB) TCLK0 connected to XC0
AT91C_TCB_TC0XC0S_NONE    EQU (0x1) ;- (TCB) None signal connected to XC0
AT91C_TCB_TC0XC0S_TIOA1   EQU (0x2) ;- (TCB) TIOA1 connected to XC0
AT91C_TCB_TC0XC0S_TIOA2   EQU (0x3) ;- (TCB) TIOA2 connected to XC0
AT91C_TCB_TC1XC1S         EQU (0x3:SHL:2) ;- (TCB) External Clock Signal 1 Selection
AT91C_TCB_TC1XC1S_TCLK1   EQU (0x0:SHL:2) ;- (TCB) TCLK1 connected to XC1
AT91C_TCB_TC1XC1S_NONE    EQU (0x1:SHL:2) ;- (TCB) None signal connected to XC1
AT91C_TCB_TC1XC1S_TIOA0   EQU (0x2:SHL:2) ;- (TCB) TIOA0 connected to XC1
AT91C_TCB_TC1XC1S_TIOA2   EQU (0x3:SHL:2) ;- (TCB) TIOA2 connected to XC1
AT91C_TCB_TC2XC2S         EQU (0x3:SHL:4) ;- (TCB) External Clock Signal 2 Selection
AT91C_TCB_TC2XC2S_TCLK2   EQU (0x0:SHL:4) ;- (TCB) TCLK2 connected to XC2
AT91C_TCB_TC2XC2S_NONE    EQU (0x1:SHL:4) ;- (TCB) None signal connected to XC2
AT91C_TCB_TC2XC2S_TIOA0   EQU (0x2:SHL:4) ;- (TCB) TIOA0 connected to XC2
AT91C_TCB_TC2XC2S_TIOA1   EQU (0x3:SHL:4) ;- (TCB) TIOA2 connected to XC2

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR USB Device Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_UDP
UDP_NUM         #  4 ;- Frame Number Register
UDP_GLBSTATE    #  4 ;- Global State Register
UDP_FADDR       #  4 ;- Function Address Register
                #  4 ;- Reserved
UDP_IER         #  4 ;- Interrupt Enable Register
UDP_IDR         #  4 ;- Interrupt Disable Register
UDP_IMR         #  4 ;- Interrupt Mask Register
UDP_ISR         #  4 ;- Interrupt Status Register
UDP_ICR         #  4 ;- Interrupt Clear Register
                #  4 ;- Reserved
UDP_RSTEP       #  4 ;- Reset Endpoint Register
                #  4 ;- Reserved
UDP_CSR         # 24 ;- Endpoint Control and Status Register
                #  8 ;- Reserved
UDP_FDR         # 24 ;- Endpoint FIFO Data Register
                # 12 ;- Reserved
UDP_TXVC        #  4 ;- Transceiver Control Register
;- -------- UDP_FRM_NUM : (UDP Offset: 0x0) USB Frame Number Register -------- 
AT91C_UDP_FRM_NUM         EQU (0x7FF:SHL:0) ;- (UDP) Frame Number as Defined in the Packet Field Formats
AT91C_UDP_FRM_ERR         EQU (0x1:SHL:16) ;- (UDP) Frame Error
AT91C_UDP_FRM_OK          EQU (0x1:SHL:17) ;- (UDP) Frame OK
;- -------- UDP_GLB_STATE : (UDP Offset: 0x4) USB Global State Register -------- 
AT91C_UDP_FADDEN          EQU (0x1:SHL:0) ;- (UDP) Function Address Enable
AT91C_UDP_CONFG           EQU (0x1:SHL:1) ;- (UDP) Configured
AT91C_UDP_ESR             EQU (0x1:SHL:2) ;- (UDP) Enable Send Resume
AT91C_UDP_RSMINPR         EQU (0x1:SHL:3) ;- (UDP) A Resume Has Been Sent to the Host
AT91C_UDP_RMWUPE          EQU (0x1:SHL:4) ;- (UDP) Remote Wake Up Enable
;- -------- UDP_FADDR : (UDP Offset: 0x8) USB Function Address Register -------- 
AT91C_UDP_FADD            EQU (0xFF:SHL:0) ;- (UDP) Function Address Value
AT91C_UDP_FEN             EQU (0x1:SHL:8) ;- (UDP) Function Enable
;- -------- UDP_IER : (UDP Offset: 0x10) USB Interrupt Enable Register -------- 
AT91C_UDP_EPINT0          EQU (0x1:SHL:0) ;- (UDP) Endpoint 0 Interrupt
AT91C_UDP_EPINT1          EQU (0x1:SHL:1) ;- (UDP) Endpoint 0 Interrupt
AT91C_UDP_EPINT2          EQU (0x1:SHL:2) ;- (UDP) Endpoint 2 Interrupt
AT91C_UDP_EPINT3          EQU (0x1:SHL:3) ;- (UDP) Endpoint 3 Interrupt
AT91C_UDP_EPINT4          EQU (0x1:SHL:4) ;- (UDP) Endpoint 4 Interrupt
AT91C_UDP_EPINT5          EQU (0x1:SHL:5) ;- (UDP) Endpoint 5 Interrupt
AT91C_UDP_RXSUSP          EQU (0x1:SHL:8) ;- (UDP) USB Suspend Interrupt
AT91C_UDP_RXRSM           EQU (0x1:SHL:9) ;- (UDP) USB Resume Interrupt
AT91C_UDP_EXTRSM          EQU (0x1:SHL:10) ;- (UDP) USB External Resume Interrupt
AT91C_UDP_SOFINT          EQU (0x1:SHL:11) ;- (UDP) USB Start Of frame Interrupt
AT91C_UDP_WAKEUP          EQU (0x1:SHL:13) ;- (UDP) USB Resume Interrupt
;- -------- UDP_IDR : (UDP Offset: 0x14) USB Interrupt Disable Register -------- 
;- -------- UDP_IMR : (UDP Offset: 0x18) USB Interrupt Mask Register -------- 
;- -------- UDP_ISR : (UDP Offset: 0x1c) USB Interrupt Status Register -------- 
AT91C_UDP_ENDBUSRES       EQU (0x1:SHL:12) ;- (UDP) USB End Of Bus Reset Interrupt
;- -------- UDP_ICR : (UDP Offset: 0x20) USB Interrupt Clear Register -------- 
;- -------- UDP_RST_EP : (UDP Offset: 0x28) USB Reset Endpoint Register -------- 
AT91C_UDP_EP0             EQU (0x1:SHL:0) ;- (UDP) Reset Endpoint 0
AT91C_UDP_EP1             EQU (0x1:SHL:1) ;- (UDP) Reset Endpoint 1
AT91C_UDP_EP2             EQU (0x1:SHL:2) ;- (UDP) Reset Endpoint 2
AT91C_UDP_EP3             EQU (0x1:SHL:3) ;- (UDP) Reset Endpoint 3
AT91C_UDP_EP4             EQU (0x1:SHL:4) ;- (UDP) Reset Endpoint 4
AT91C_UDP_EP5             EQU (0x1:SHL:5) ;- (UDP) Reset Endpoint 5
;- -------- UDP_CSR : (UDP Offset: 0x30) USB Endpoint Control and Status Register -------- 
AT91C_UDP_TXCOMP          EQU (0x1:SHL:0) ;- (UDP) Generates an IN packet with data previously written in the DPR
AT91C_UDP_RX_DATA_BK0     EQU (0x1:SHL:1) ;- (UDP) Receive Data Bank 0
AT91C_UDP_RXSETUP         EQU (0x1:SHL:2) ;- (UDP) Sends STALL to the Host (Control endpoints)
AT91C_UDP_ISOERROR        EQU (0x1:SHL:3) ;- (UDP) Isochronous error (Isochronous endpoints)
AT91C_UDP_STALLSENT       EQU (0x1:SHL:3) ;- (UDP) Stall sent (Control, bulk, interrupt endpoints)
AT91C_UDP_TXPKTRDY        EQU (0x1:SHL:4) ;- (UDP) Transmit Packet Ready
AT91C_UDP_FORCESTALL      EQU (0x1:SHL:5) ;- (UDP) Force Stall (used by Control, Bulk and Isochronous endpoints).
AT91C_UDP_RX_DATA_BK1     EQU (0x1:SHL:6) ;- (UDP) Receive Data Bank 1 (only used by endpoints with ping-pong attributes).
AT91C_UDP_DIR             EQU (0x1:SHL:7) ;- (UDP) Transfer Direction
AT91C_UDP_EPTYPE          EQU (0x7:SHL:8) ;- (UDP) Endpoint type
AT91C_UDP_EPTYPE_CTRL     EQU (0x0:SHL:8) ;- (UDP) Control
AT91C_UDP_EPTYPE_ISO_OUT  EQU (0x1:SHL:8) ;- (UDP) Isochronous OUT
AT91C_UDP_EPTYPE_BULK_OUT EQU (0x2:SHL:8) ;- (UDP) Bulk OUT
AT91C_UDP_EPTYPE_INT_OUT  EQU (0x3:SHL:8) ;- (UDP) Interrupt OUT
AT91C_UDP_EPTYPE_ISO_IN   EQU (0x5:SHL:8) ;- (UDP) Isochronous IN
AT91C_UDP_EPTYPE_BULK_IN  EQU (0x6:SHL:8) ;- (UDP) Bulk IN
AT91C_UDP_EPTYPE_INT_IN   EQU (0x7:SHL:8) ;- (UDP) Interrupt IN
AT91C_UDP_DTGLE           EQU (0x1:SHL:11) ;- (UDP) Data Toggle
AT91C_UDP_EPEDS           EQU (0x1:SHL:15) ;- (UDP) Endpoint Enable Disable
AT91C_UDP_RXBYTECNT       EQU (0x7FF:SHL:16) ;- (UDP) Number Of Bytes Available in the FIFO
;- -------- UDP_TXVC : (UDP Offset: 0x74) Transceiver Control Register -------- 
AT91C_UDP_TXVDIS          EQU (0x1:SHL:8) ;- (UDP) 
AT91C_UDP_PUON            EQU (0x1:SHL:9) ;- (UDP) Pull-up ON

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Multimedia Card Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_MCI
MCI_CR          #  4 ;- MCI Control Register
MCI_MR          #  4 ;- MCI Mode Register
MCI_DTOR        #  4 ;- MCI Data Timeout Register
MCI_SDCR        #  4 ;- MCI SD Card Register
MCI_ARGR        #  4 ;- MCI Argument Register
MCI_CMDR        #  4 ;- MCI Command Register
                #  8 ;- Reserved
MCI_RSPR        # 16 ;- MCI Response Register
MCI_RDR         #  4 ;- MCI Receive Data Register
MCI_TDR         #  4 ;- MCI Transmit Data Register
                #  8 ;- Reserved
MCI_SR          #  4 ;- MCI Status Register
MCI_IER         #  4 ;- MCI Interrupt Enable Register
MCI_IDR         #  4 ;- MCI Interrupt Disable Register
MCI_IMR         #  4 ;- MCI Interrupt Mask Register
                # 176 ;- Reserved
MCI_RPR         #  4 ;- Receive Pointer Register
MCI_RCR         #  4 ;- Receive Counter Register
MCI_TPR         #  4 ;- Transmit Pointer Register
MCI_TCR         #  4 ;- Transmit Counter Register
MCI_RNPR        #  4 ;- Receive Next Pointer Register
MCI_RNCR        #  4 ;- Receive Next Counter Register
MCI_TNPR        #  4 ;- Transmit Next Pointer Register
MCI_TNCR        #  4 ;- Transmit Next Counter Register
MCI_PTCR        #  4 ;- PDC Transfer Control Register
MCI_PTSR        #  4 ;- PDC Transfer Status Register
;- -------- MCI_CR : (MCI Offset: 0x0) MCI Control Register -------- 
AT91C_MCI_MCIEN           EQU (0x1:SHL:0) ;- (MCI) Multimedia Interface Enable
AT91C_MCI_MCIDIS          EQU (0x1:SHL:1) ;- (MCI) Multimedia Interface Disable
AT91C_MCI_PWSEN           EQU (0x1:SHL:2) ;- (MCI) Power Save Mode Enable
AT91C_MCI_PWSDIS          EQU (0x1:SHL:3) ;- (MCI) Power Save Mode Disable
AT91C_MCI_SWRST           EQU (0x1:SHL:7) ;- (MCI) MCI Software reset
;- -------- MCI_MR : (MCI Offset: 0x4) MCI Mode Register -------- 
AT91C_MCI_CLKDIV          EQU (0xFF:SHL:0) ;- (MCI) Clock Divider
AT91C_MCI_PWSDIV          EQU (0x7:SHL:8) ;- (MCI) Power Saving Divider
AT91C_MCI_PDCPADV         EQU (0x1:SHL:14) ;- (MCI) PDC Padding Value
AT91C_MCI_PDCMODE         EQU (0x1:SHL:15) ;- (MCI) PDC Oriented Mode
AT91C_MCI_BLKLEN          EQU (0xFFF:SHL:18) ;- (MCI) Data Block Length
;- -------- MCI_DTOR : (MCI Offset: 0x8) MCI Data Timeout Register -------- 
AT91C_MCI_DTOCYC          EQU (0xF:SHL:0) ;- (MCI) Data Timeout Cycle Number
AT91C_MCI_DTOMUL          EQU (0x7:SHL:4) ;- (MCI) Data Timeout Multiplier
AT91C_MCI_DTOMUL_1        EQU (0x0:SHL:4) ;- (MCI) DTOCYC x 1
AT91C_MCI_DTOMUL_16       EQU (0x1:SHL:4) ;- (MCI) DTOCYC x 16
AT91C_MCI_DTOMUL_128      EQU (0x2:SHL:4) ;- (MCI) DTOCYC x 128
AT91C_MCI_DTOMUL_256      EQU (0x3:SHL:4) ;- (MCI) DTOCYC x 256
AT91C_MCI_DTOMUL_1024     EQU (0x4:SHL:4) ;- (MCI) DTOCYC x 1024
AT91C_MCI_DTOMUL_4096     EQU (0x5:SHL:4) ;- (MCI) DTOCYC x 4096
AT91C_MCI_DTOMUL_65536    EQU (0x6:SHL:4) ;- (MCI) DTOCYC x 65536
AT91C_MCI_DTOMUL_1048576  EQU (0x7:SHL:4) ;- (MCI) DTOCYC x 1048576
;- -------- MCI_SDCR : (MCI Offset: 0xc) MCI SD Card Register -------- 
AT91C_MCI_SCDSEL          EQU (0xF:SHL:0) ;- (MCI) SD Card Selector
AT91C_MCI_SCDBUS          EQU (0x1:SHL:7) ;- (MCI) SD Card Bus Width
;- -------- MCI_CMDR : (MCI Offset: 0x14) MCI Command Register -------- 
AT91C_MCI_CMDNB           EQU (0x3F:SHL:0) ;- (MCI) Command Number
AT91C_MCI_RSPTYP          EQU (0x3:SHL:6) ;- (MCI) Response Type
AT91C_MCI_RSPTYP_NO       EQU (0x0:SHL:6) ;- (MCI) No response
AT91C_MCI_RSPTYP_48       EQU (0x1:SHL:6) ;- (MCI) 48-bit response
AT91C_MCI_RSPTYP_136      EQU (0x2:SHL:6) ;- (MCI) 136-bit response
AT91C_MCI_SPCMD           EQU (0x7:SHL:8) ;- (MCI) Special CMD
AT91C_MCI_SPCMD_NONE      EQU (0x0:SHL:8) ;- (MCI) Not a special CMD
AT91C_MCI_SPCMD_INIT      EQU (0x1:SHL:8) ;- (MCI) Initialization CMD
AT91C_MCI_SPCMD_SYNC      EQU (0x2:SHL:8) ;- (MCI) Synchronized CMD
AT91C_MCI_SPCMD_IT_CMD    EQU (0x4:SHL:8) ;- (MCI) Interrupt command
AT91C_MCI_SPCMD_IT_REP    EQU (0x5:SHL:8) ;- (MCI) Interrupt response
AT91C_MCI_OPDCMD          EQU (0x1:SHL:11) ;- (MCI) Open Drain Command
AT91C_MCI_MAXLAT          EQU (0x1:SHL:12) ;- (MCI) Maximum Latency for Command to respond
AT91C_MCI_TRCMD           EQU (0x3:SHL:16) ;- (MCI) Transfer CMD
AT91C_MCI_TRCMD_NO        EQU (0x0:SHL:16) ;- (MCI) No transfer
AT91C_MCI_TRCMD_START     EQU (0x1:SHL:16) ;- (MCI) Start transfer
AT91C_MCI_TRCMD_STOP      EQU (0x2:SHL:16) ;- (MCI) Stop transfer
AT91C_MCI_TRDIR           EQU (0x1:SHL:18) ;- (MCI) Transfer Direction
AT91C_MCI_TRTYP           EQU (0x3:SHL:19) ;- (MCI) Transfer Type
AT91C_MCI_TRTYP_BLOCK     EQU (0x0:SHL:19) ;- (MCI) Block Transfer type
AT91C_MCI_TRTYP_MULTIPLE  EQU (0x1:SHL:19) ;- (MCI) Multiple Block transfer type
AT91C_MCI_TRTYP_STREAM    EQU (0x2:SHL:19) ;- (MCI) Stream transfer type
;- -------- MCI_SR : (MCI Offset: 0x40) MCI Status Register -------- 
AT91C_MCI_CMDRDY          EQU (0x1:SHL:0) ;- (MCI) Command Ready flag
AT91C_MCI_RXRDY           EQU (0x1:SHL:1) ;- (MCI) RX Ready flag
AT91C_MCI_TXRDY           EQU (0x1:SHL:2) ;- (MCI) TX Ready flag
AT91C_MCI_BLKE            EQU (0x1:SHL:3) ;- (MCI) Data Block Transfer Ended flag
AT91C_MCI_DTIP            EQU (0x1:SHL:4) ;- (MCI) Data Transfer in Progress flag
AT91C_MCI_NOTBUSY         EQU (0x1:SHL:5) ;- (MCI) Data Line Not Busy flag
AT91C_MCI_ENDRX           EQU (0x1:SHL:6) ;- (MCI) End of RX Buffer flag
AT91C_MCI_ENDTX           EQU (0x1:SHL:7) ;- (MCI) End of TX Buffer flag
AT91C_MCI_RXBUFF          EQU (0x1:SHL:14) ;- (MCI) RX Buffer Full flag
AT91C_MCI_TXBUFE          EQU (0x1:SHL:15) ;- (MCI) TX Buffer Empty flag
AT91C_MCI_RINDE           EQU (0x1:SHL:16) ;- (MCI) Response Index Error flag
AT91C_MCI_RDIRE           EQU (0x1:SHL:17) ;- (MCI) Response Direction Error flag
AT91C_MCI_RCRCE           EQU (0x1:SHL:18) ;- (MCI) Response CRC Error flag
AT91C_MCI_RENDE           EQU (0x1:SHL:19) ;- (MCI) Response End Bit Error flag
AT91C_MCI_RTOE            EQU (0x1:SHL:20) ;- (MCI) Response Time-out Error flag
AT91C_MCI_DCRCE           EQU (0x1:SHL:21) ;- (MCI) data CRC Error flag
AT91C_MCI_DTOE            EQU (0x1:SHL:22) ;- (MCI) Data timeout Error flag
AT91C_MCI_OVRE            EQU (0x1:SHL:30) ;- (MCI) Overrun flag
AT91C_MCI_UNRE            EQU (0x1:SHL:31) ;- (MCI) Underrun flag
;- -------- MCI_IER : (MCI Offset: 0x44) MCI Interrupt Enable Register -------- 
;- -------- MCI_IDR : (MCI Offset: 0x48) MCI Interrupt Disable Register -------- 
;- -------- MCI_IMR : (MCI Offset: 0x4c) MCI Interrupt Mask Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Two-wire Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_TWI
TWI_CR          #  4 ;- Control Register
TWI_MMR         #  4 ;- Master Mode Register
                #  4 ;- Reserved
TWI_IADR        #  4 ;- Internal Address Register
TWI_CWGR        #  4 ;- Clock Waveform Generator Register
                # 12 ;- Reserved
TWI_SR          #  4 ;- Status Register
TWI_IER         #  4 ;- Interrupt Enable Register
TWI_IDR         #  4 ;- Interrupt Disable Register
TWI_IMR         #  4 ;- Interrupt Mask Register
TWI_RHR         #  4 ;- Receive Holding Register
TWI_THR         #  4 ;- Transmit Holding Register
;- -------- TWI_CR : (TWI Offset: 0x0) TWI Control Register -------- 
AT91C_TWI_START           EQU (0x1:SHL:0) ;- (TWI) Send a START Condition
AT91C_TWI_STOP            EQU (0x1:SHL:1) ;- (TWI) Send a STOP Condition
AT91C_TWI_MSEN            EQU (0x1:SHL:2) ;- (TWI) TWI Master Transfer Enabled
AT91C_TWI_MSDIS           EQU (0x1:SHL:3) ;- (TWI) TWI Master Transfer Disabled
AT91C_TWI_SWRST           EQU (0x1:SHL:7) ;- (TWI) Software Reset
;- -------- TWI_MMR : (TWI Offset: 0x4) TWI Master Mode Register -------- 
AT91C_TWI_IADRSZ          EQU (0x3:SHL:8) ;- (TWI) Internal Device Address Size
AT91C_TWI_IADRSZ_NO       EQU (0x0:SHL:8) ;- (TWI) No internal device address
AT91C_TWI_IADRSZ_1_BYTE   EQU (0x1:SHL:8) ;- (TWI) One-byte internal device address
AT91C_TWI_IADRSZ_2_BYTE   EQU (0x2:SHL:8) ;- (TWI) Two-byte internal device address
AT91C_TWI_IADRSZ_3_BYTE   EQU (0x3:SHL:8) ;- (TWI) Three-byte internal device address
AT91C_TWI_MREAD           EQU (0x1:SHL:12) ;- (TWI) Master Read Direction
AT91C_TWI_DADR            EQU (0x7F:SHL:16) ;- (TWI) Device Address
;- -------- TWI_CWGR : (TWI Offset: 0x10) TWI Clock Waveform Generator Register -------- 
AT91C_TWI_CLDIV           EQU (0xFF:SHL:0) ;- (TWI) Clock Low Divider
AT91C_TWI_CHDIV           EQU (0xFF:SHL:8) ;- (TWI) Clock High Divider
AT91C_TWI_CKDIV           EQU (0x7:SHL:16) ;- (TWI) Clock Divider
;- -------- TWI_SR : (TWI Offset: 0x20) TWI Status Register -------- 
AT91C_TWI_TXCOMP          EQU (0x1:SHL:0) ;- (TWI) Transmission Completed
AT91C_TWI_RXRDY           EQU (0x1:SHL:1) ;- (TWI) Receive holding register ReaDY
AT91C_TWI_TXRDY           EQU (0x1:SHL:2) ;- (TWI) Transmit holding register ReaDY
AT91C_TWI_OVRE            EQU (0x1:SHL:6) ;- (TWI) Overrun Error
AT91C_TWI_UNRE            EQU (0x1:SHL:7) ;- (TWI) Underrun Error
AT91C_TWI_NACK            EQU (0x1:SHL:8) ;- (TWI) Not Acknowledged
;- -------- TWI_IER : (TWI Offset: 0x24) TWI Interrupt Enable Register -------- 
;- -------- TWI_IDR : (TWI Offset: 0x28) TWI Interrupt Disable Register -------- 
;- -------- TWI_IMR : (TWI Offset: 0x2c) TWI Interrupt Mask Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Usart
;- *****************************************************************************
                ^ 0 ;- AT91S_USART
US_CR           #  4 ;- Control Register
US_MR           #  4 ;- Mode Register
US_IER          #  4 ;- Interrupt Enable Register
US_IDR          #  4 ;- Interrupt Disable Register
US_IMR          #  4 ;- Interrupt Mask Register
US_CSR          #  4 ;- Channel Status Register
US_RHR          #  4 ;- Receiver Holding Register
US_THR          #  4 ;- Transmitter Holding Register
US_BRGR         #  4 ;- Baud Rate Generator Register
US_RTOR         #  4 ;- Receiver Time-out Register
US_TTGR         #  4 ;- Transmitter Time-guard Register
                # 20 ;- Reserved
US_FIDI         #  4 ;- FI_DI_Ratio Register
US_NER          #  4 ;- Nb Errors Register
                #  4 ;- Reserved
US_IF           #  4 ;- IRDA_FILTER Register
                # 176 ;- Reserved
US_RPR          #  4 ;- Receive Pointer Register
US_RCR          #  4 ;- Receive Counter Register
US_TPR          #  4 ;- Transmit Pointer Register
US_TCR          #  4 ;- Transmit Counter Register
US_RNPR         #  4 ;- Receive Next Pointer Register
US_RNCR         #  4 ;- Receive Next Counter Register
US_TNPR         #  4 ;- Transmit Next Pointer Register
US_TNCR         #  4 ;- Transmit Next Counter Register
US_PTCR         #  4 ;- PDC Transfer Control Register
US_PTSR         #  4 ;- PDC Transfer Status Register
;- -------- US_CR : (USART Offset: 0x0) Debug Unit Control Register -------- 
AT91C_US_STTBRK           EQU (0x1:SHL:9) ;- (USART) Start Break
AT91C_US_STPBRK           EQU (0x1:SHL:10) ;- (USART) Stop Break
AT91C_US_STTTO            EQU (0x1:SHL:11) ;- (USART) Start Time-out
AT91C_US_SENDA            EQU (0x1:SHL:12) ;- (USART) Send Address
AT91C_US_RSTIT            EQU (0x1:SHL:13) ;- (USART) Reset Iterations
AT91C_US_RSTNACK          EQU (0x1:SHL:14) ;- (USART) Reset Non Acknowledge
AT91C_US_RETTO            EQU (0x1:SHL:15) ;- (USART) Rearm Time-out
AT91C_US_DTREN            EQU (0x1:SHL:16) ;- (USART) Data Terminal ready Enable
AT91C_US_DTRDIS           EQU (0x1:SHL:17) ;- (USART) Data Terminal ready Disable
AT91C_US_RTSEN            EQU (0x1:SHL:18) ;- (USART) Request to Send enable
AT91C_US_RTSDIS           EQU (0x1:SHL:19) ;- (USART) Request to Send Disable
;- -------- US_MR : (USART Offset: 0x4) Debug Unit Mode Register -------- 
AT91C_US_USMODE           EQU (0xF:SHL:0) ;- (USART) Usart mode
AT91C_US_USMODE_NORMAL    EQU (0x0) ;- (USART) Normal
AT91C_US_USMODE_RS485     EQU (0x1) ;- (USART) RS485
AT91C_US_USMODE_HWHSH     EQU (0x2) ;- (USART) Hardware Handshaking
AT91C_US_USMODE_MODEM     EQU (0x3) ;- (USART) Modem
AT91C_US_USMODE_ISO7816_0 EQU (0x4) ;- (USART) ISO7816 protocol: T = 0
AT91C_US_USMODE_ISO7816_1 EQU (0x6) ;- (USART) ISO7816 protocol: T = 1
AT91C_US_USMODE_IRDA      EQU (0x8) ;- (USART) IrDA
AT91C_US_USMODE_SWHSH     EQU (0xC) ;- (USART) Software Handshaking
AT91C_US_CLKS             EQU (0x3:SHL:4) ;- (USART) Clock Selection (Baud Rate generator Input Clock
AT91C_US_CLKS_CLOCK       EQU (0x0:SHL:4) ;- (USART) Clock
AT91C_US_CLKS_FDIV1       EQU (0x1:SHL:4) ;- (USART) fdiv1
AT91C_US_CLKS_SLOW        EQU (0x2:SHL:4) ;- (USART) slow_clock (ARM)
AT91C_US_CLKS_EXT         EQU (0x3:SHL:4) ;- (USART) External (SCK)
AT91C_US_CHRL             EQU (0x3:SHL:6) ;- (USART) Clock Selection (Baud Rate generator Input Clock
AT91C_US_CHRL_5_BITS      EQU (0x0:SHL:6) ;- (USART) Character Length: 5 bits
AT91C_US_CHRL_6_BITS      EQU (0x1:SHL:6) ;- (USART) Character Length: 6 bits
AT91C_US_CHRL_7_BITS      EQU (0x2:SHL:6) ;- (USART) Character Length: 7 bits
AT91C_US_CHRL_8_BITS      EQU (0x3:SHL:6) ;- (USART) Character Length: 8 bits
AT91C_US_SYNC             EQU (0x1:SHL:8) ;- (USART) Synchronous Mode Select
AT91C_US_NBSTOP           EQU (0x3:SHL:12) ;- (USART) Number of Stop bits
AT91C_US_NBSTOP_1_BIT     EQU (0x0:SHL:12) ;- (USART) 1 stop bit
AT91C_US_NBSTOP_15_BIT    EQU (0x1:SHL:12) ;- (USART) Asynchronous (SYNC=0) 2 stop bits Synchronous (SYNC=1) 2 stop bits
AT91C_US_NBSTOP_2_BIT     EQU (0x2:SHL:12) ;- (USART) 2 stop bits
AT91C_US_MSBF             EQU (0x1:SHL:16) ;- (USART) Bit Order
AT91C_US_MODE9            EQU (0x1:SHL:17) ;- (USART) 9-bit Character length
AT91C_US_CKLO             EQU (0x1:SHL:18) ;- (USART) Clock Output Select
AT91C_US_OVER             EQU (0x1:SHL:19) ;- (USART) Over Sampling Mode
AT91C_US_INACK            EQU (0x1:SHL:20) ;- (USART) Inhibit Non Acknowledge
AT91C_US_DSNACK           EQU (0x1:SHL:21) ;- (USART) Disable Successive NACK
AT91C_US_MAX_ITER         EQU (0x1:SHL:24) ;- (USART) Number of Repetitions
AT91C_US_FILTER           EQU (0x1:SHL:28) ;- (USART) Receive Line Filter
;- -------- US_IER : (USART Offset: 0x8) Debug Unit Interrupt Enable Register -------- 
AT91C_US_RXBRK            EQU (0x1:SHL:2) ;- (USART) Break Received/End of Break
AT91C_US_TIMEOUT          EQU (0x1:SHL:8) ;- (USART) Receiver Time-out
AT91C_US_ITERATION        EQU (0x1:SHL:10) ;- (USART) Max number of Repetitions Reached
AT91C_US_NACK             EQU (0x1:SHL:13) ;- (USART) Non Acknowledge
AT91C_US_RIIC             EQU (0x1:SHL:16) ;- (USART) Ring INdicator Input Change Flag
AT91C_US_DSRIC            EQU (0x1:SHL:17) ;- (USART) Data Set Ready Input Change Flag
AT91C_US_DCDIC            EQU (0x1:SHL:18) ;- (USART) Data Carrier Flag
AT91C_US_CTSIC            EQU (0x1:SHL:19) ;- (USART) Clear To Send Input Change Flag
;- -------- US_IDR : (USART Offset: 0xc) Debug Unit Interrupt Disable Register -------- 
;- -------- US_IMR : (USART Offset: 0x10) Debug Unit Interrupt Mask Register -------- 
;- -------- US_CSR : (USART Offset: 0x14) Debug Unit Channel Status Register -------- 
AT91C_US_RI               EQU (0x1:SHL:20) ;- (USART) Image of RI Input
AT91C_US_DSR              EQU (0x1:SHL:21) ;- (USART) Image of DSR Input
AT91C_US_DCD              EQU (0x1:SHL:22) ;- (USART) Image of DCD Input
AT91C_US_CTS              EQU (0x1:SHL:23) ;- (USART) Image of CTS Input

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Synchronous Serial Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_SSC
SSC_CR          #  4 ;- Control Register
SSC_CMR         #  4 ;- Clock Mode Register
                #  8 ;- Reserved
SSC_RCMR        #  4 ;- Receive Clock ModeRegister
SSC_RFMR        #  4 ;- Receive Frame Mode Register
SSC_TCMR        #  4 ;- Transmit Clock Mode Register
SSC_TFMR        #  4 ;- Transmit Frame Mode Register
SSC_RHR         #  4 ;- Receive Holding Register
SSC_THR         #  4 ;- Transmit Holding Register
                #  8 ;- Reserved
SSC_RSHR        #  4 ;- Receive Sync Holding Register
SSC_TSHR        #  4 ;- Transmit Sync Holding Register
                #  8 ;- Reserved
SSC_SR          #  4 ;- Status Register
SSC_IER         #  4 ;- Interrupt Enable Register
SSC_IDR         #  4 ;- Interrupt Disable Register
SSC_IMR         #  4 ;- Interrupt Mask Register
                # 176 ;- Reserved
SSC_RPR         #  4 ;- Receive Pointer Register
SSC_RCR         #  4 ;- Receive Counter Register
SSC_TPR         #  4 ;- Transmit Pointer Register
SSC_TCR         #  4 ;- Transmit Counter Register
SSC_RNPR        #  4 ;- Receive Next Pointer Register
SSC_RNCR        #  4 ;- Receive Next Counter Register
SSC_TNPR        #  4 ;- Transmit Next Pointer Register
SSC_TNCR        #  4 ;- Transmit Next Counter Register
SSC_PTCR        #  4 ;- PDC Transfer Control Register
SSC_PTSR        #  4 ;- PDC Transfer Status Register
;- -------- SSC_CR : (SSC Offset: 0x0) SSC Control Register -------- 
AT91C_SSC_RXEN            EQU (0x1:SHL:0) ;- (SSC) Receive Enable
AT91C_SSC_RXDIS           EQU (0x1:SHL:1) ;- (SSC) Receive Disable
AT91C_SSC_TXEN            EQU (0x1:SHL:8) ;- (SSC) Transmit Enable
AT91C_SSC_TXDIS           EQU (0x1:SHL:9) ;- (SSC) Transmit Disable
AT91C_SSC_SWRST           EQU (0x1:SHL:15) ;- (SSC) Software Reset
;- -------- SSC_RCMR : (SSC Offset: 0x10) SSC Receive Clock Mode Register -------- 
AT91C_SSC_CKS             EQU (0x3:SHL:0) ;- (SSC) Receive/Transmit Clock Selection
AT91C_SSC_CKS_DIV         EQU (0x0) ;- (SSC) Divided Clock
AT91C_SSC_CKS_TK          EQU (0x1) ;- (SSC) TK Clock signal
AT91C_SSC_CKS_RK          EQU (0x2) ;- (SSC) RK pin
AT91C_SSC_CKO             EQU (0x7:SHL:2) ;- (SSC) Receive/Transmit Clock Output Mode Selection
AT91C_SSC_CKO_NONE        EQU (0x0:SHL:2) ;- (SSC) Receive/Transmit Clock Output Mode: None RK pin: Input-only
AT91C_SSC_CKO_CONTINOUS   EQU (0x1:SHL:2) ;- (SSC) Continuous Receive/Transmit Clock RK pin: Output
AT91C_SSC_CKO_DATA_TX     EQU (0x2:SHL:2) ;- (SSC) Receive/Transmit Clock only during data transfers RK pin: Output
AT91C_SSC_CKI             EQU (0x1:SHL:5) ;- (SSC) Receive/Transmit Clock Inversion
AT91C_SSC_CKG             EQU (0x3:SHL:6) ;- (SSC) Receive/Transmit Clock Gating Selection
AT91C_SSC_CKG_NONE        EQU (0x0:SHL:6) ;- (SSC) Receive/Transmit Clock Gating: None, continuous clock
AT91C_SSC_CKG_LOW         EQU (0x1:SHL:6) ;- (SSC) Receive/Transmit Clock enabled only if RF Low
AT91C_SSC_CKG_HIGH        EQU (0x2:SHL:6) ;- (SSC) Receive/Transmit Clock enabled only if RF High
AT91C_SSC_START           EQU (0xF:SHL:8) ;- (SSC) Receive/Transmit Start Selection
AT91C_SSC_START_CONTINOUS EQU (0x0:SHL:8) ;- (SSC) Continuous, as soon as the receiver is enabled, and immediately after the end of transfer of the previous data.
AT91C_SSC_START_TX        EQU (0x1:SHL:8) ;- (SSC) Transmit/Receive start
AT91C_SSC_START_LOW_RF    EQU (0x2:SHL:8) ;- (SSC) Detection of a low level on RF input
AT91C_SSC_START_HIGH_RF   EQU (0x3:SHL:8) ;- (SSC) Detection of a high level on RF input
AT91C_SSC_START_FALL_RF   EQU (0x4:SHL:8) ;- (SSC) Detection of a falling edge on RF input
AT91C_SSC_START_RISE_RF   EQU (0x5:SHL:8) ;- (SSC) Detection of a rising edge on RF input
AT91C_SSC_START_LEVEL_RF  EQU (0x6:SHL:8) ;- (SSC) Detection of any level change on RF input
AT91C_SSC_START_EDGE_RF   EQU (0x7:SHL:8) ;- (SSC) Detection of any edge on RF input
AT91C_SSC_START_0         EQU (0x8:SHL:8) ;- (SSC) Compare 0
AT91C_SSC_STOP            EQU (0x1:SHL:12) ;- (SSC) Receive Stop Selection
AT91C_SSC_STTDLY          EQU (0xFF:SHL:16) ;- (SSC) Receive/Transmit Start Delay
AT91C_SSC_PERIOD          EQU (0xFF:SHL:24) ;- (SSC) Receive/Transmit Period Divider Selection
;- -------- SSC_RFMR : (SSC Offset: 0x14) SSC Receive Frame Mode Register -------- 
AT91C_SSC_DATLEN          EQU (0x1F:SHL:0) ;- (SSC) Data Length
AT91C_SSC_LOOP            EQU (0x1:SHL:5) ;- (SSC) Loop Mode
AT91C_SSC_MSBF            EQU (0x1:SHL:7) ;- (SSC) Most Significant Bit First
AT91C_SSC_DATNB           EQU (0xF:SHL:8) ;- (SSC) Data Number per Frame
AT91C_SSC_FSLEN           EQU (0xF:SHL:16) ;- (SSC) Receive/Transmit Frame Sync length
AT91C_SSC_FSOS            EQU (0x7:SHL:20) ;- (SSC) Receive/Transmit Frame Sync Output Selection
AT91C_SSC_FSOS_NONE       EQU (0x0:SHL:20) ;- (SSC) Selected Receive/Transmit Frame Sync Signal: None RK pin Input-only
AT91C_SSC_FSOS_NEGATIVE   EQU (0x1:SHL:20) ;- (SSC) Selected Receive/Transmit Frame Sync Signal: Negative Pulse
AT91C_SSC_FSOS_POSITIVE   EQU (0x2:SHL:20) ;- (SSC) Selected Receive/Transmit Frame Sync Signal: Positive Pulse
AT91C_SSC_FSOS_LOW        EQU (0x3:SHL:20) ;- (SSC) Selected Receive/Transmit Frame Sync Signal: Driver Low during data transfer
AT91C_SSC_FSOS_HIGH       EQU (0x4:SHL:20) ;- (SSC) Selected Receive/Transmit Frame Sync Signal: Driver High during data transfer
AT91C_SSC_FSOS_TOGGLE     EQU (0x5:SHL:20) ;- (SSC) Selected Receive/Transmit Frame Sync Signal: Toggling at each start of data transfer
AT91C_SSC_FSEDGE          EQU (0x1:SHL:24) ;- (SSC) Frame Sync Edge Detection
;- -------- SSC_TCMR : (SSC Offset: 0x18) SSC Transmit Clock Mode Register -------- 
;- -------- SSC_TFMR : (SSC Offset: 0x1c) SSC Transmit Frame Mode Register -------- 
AT91C_SSC_DATDEF          EQU (0x1:SHL:5) ;- (SSC) Data Default Value
AT91C_SSC_FSDEN           EQU (0x1:SHL:23) ;- (SSC) Frame Sync Data Enable
;- -------- SSC_SR : (SSC Offset: 0x40) SSC Status Register -------- 
AT91C_SSC_TXRDY           EQU (0x1:SHL:0) ;- (SSC) Transmit Ready
AT91C_SSC_TXEMPTY         EQU (0x1:SHL:1) ;- (SSC) Transmit Empty
AT91C_SSC_ENDTX           EQU (0x1:SHL:2) ;- (SSC) End Of Transmission
AT91C_SSC_TXBUFE          EQU (0x1:SHL:3) ;- (SSC) Transmit Buffer Empty
AT91C_SSC_RXRDY           EQU (0x1:SHL:4) ;- (SSC) Receive Ready
AT91C_SSC_OVRUN           EQU (0x1:SHL:5) ;- (SSC) Receive Overrun
AT91C_SSC_ENDRX           EQU (0x1:SHL:6) ;- (SSC) End of Reception
AT91C_SSC_RXBUFF          EQU (0x1:SHL:7) ;- (SSC) Receive Buffer Full
AT91C_SSC_CP0             EQU (0x1:SHL:8) ;- (SSC) Compare 0
AT91C_SSC_CP1             EQU (0x1:SHL:9) ;- (SSC) Compare 1
AT91C_SSC_TXSYN           EQU (0x1:SHL:10) ;- (SSC) Transmit Sync
AT91C_SSC_RXSYN           EQU (0x1:SHL:11) ;- (SSC) Receive Sync
AT91C_SSC_TXENA           EQU (0x1:SHL:16) ;- (SSC) Transmit Enable
AT91C_SSC_RXENA           EQU (0x1:SHL:17) ;- (SSC) Receive Enable
;- -------- SSC_IER : (SSC Offset: 0x44) SSC Interrupt Enable Register -------- 
;- -------- SSC_IDR : (SSC Offset: 0x48) SSC Interrupt Disable Register -------- 
;- -------- SSC_IMR : (SSC Offset: 0x4c) SSC Interrupt Mask Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Serial Parallel Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_SPI
SPI_CR          #  4 ;- Control Register
SPI_MR          #  4 ;- Mode Register
SPI_RDR         #  4 ;- Receive Data Register
SPI_TDR         #  4 ;- Transmit Data Register
SPI_SR          #  4 ;- Status Register
SPI_IER         #  4 ;- Interrupt Enable Register
SPI_IDR         #  4 ;- Interrupt Disable Register
SPI_IMR         #  4 ;- Interrupt Mask Register
                # 16 ;- Reserved
SPI_CSR         # 16 ;- Chip Select Register
                # 192 ;- Reserved
SPI_RPR         #  4 ;- Receive Pointer Register
SPI_RCR         #  4 ;- Receive Counter Register
SPI_TPR         #  4 ;- Transmit Pointer Register
SPI_TCR         #  4 ;- Transmit Counter Register
SPI_RNPR        #  4 ;- Receive Next Pointer Register
SPI_RNCR        #  4 ;- Receive Next Counter Register
SPI_TNPR        #  4 ;- Transmit Next Pointer Register
SPI_TNCR        #  4 ;- Transmit Next Counter Register
SPI_PTCR        #  4 ;- PDC Transfer Control Register
SPI_PTSR        #  4 ;- PDC Transfer Status Register
;- -------- SPI_CR : (SPI Offset: 0x0) SPI Control Register -------- 
AT91C_SPI_SPIEN           EQU (0x1:SHL:0) ;- (SPI) SPI Enable
AT91C_SPI_SPIDIS          EQU (0x1:SHL:1) ;- (SPI) SPI Disable
AT91C_SPI_SWRST           EQU (0x1:SHL:7) ;- (SPI) SPI Software reset
AT91C_SPI_LASTXFER        EQU (0x1:SHL:24) ;- (SPI) SPI Last Transfer
;- -------- SPI_MR : (SPI Offset: 0x4) SPI Mode Register -------- 
AT91C_SPI_MSTR            EQU (0x1:SHL:0) ;- (SPI) Master/Slave Mode
AT91C_SPI_PS              EQU (0x1:SHL:1) ;- (SPI) Peripheral Select
AT91C_SPI_PS_FIXED        EQU (0x0:SHL:1) ;- (SPI) Fixed Peripheral Select
AT91C_SPI_PS_VARIABLE     EQU (0x1:SHL:1) ;- (SPI) Variable Peripheral Select
AT91C_SPI_PCSDEC          EQU (0x1:SHL:2) ;- (SPI) Chip Select Decode
AT91C_SPI_FDIV            EQU (0x1:SHL:3) ;- (SPI) Clock Selection
AT91C_SPI_MODFDIS         EQU (0x1:SHL:4) ;- (SPI) Mode Fault Detection
AT91C_SPI_LLB             EQU (0x1:SHL:7) ;- (SPI) Clock Selection
AT91C_SPI_PCS             EQU (0xF:SHL:16) ;- (SPI) Peripheral Chip Select
AT91C_SPI_DLYBCS          EQU (0xFF:SHL:24) ;- (SPI) Delay Between Chip Selects
;- -------- SPI_RDR : (SPI Offset: 0x8) Receive Data Register -------- 
AT91C_SPI_RD              EQU (0xFFFF:SHL:0) ;- (SPI) Receive Data
AT91C_SPI_RPCS            EQU (0xF:SHL:16) ;- (SPI) Peripheral Chip Select Status
;- -------- SPI_TDR : (SPI Offset: 0xc) Transmit Data Register -------- 
AT91C_SPI_TD              EQU (0xFFFF:SHL:0) ;- (SPI) Transmit Data
AT91C_SPI_TPCS            EQU (0xF:SHL:16) ;- (SPI) Peripheral Chip Select Status
;- -------- SPI_SR : (SPI Offset: 0x10) Status Register -------- 
AT91C_SPI_RDRF            EQU (0x1:SHL:0) ;- (SPI) Receive Data Register Full
AT91C_SPI_TDRE            EQU (0x1:SHL:1) ;- (SPI) Transmit Data Register Empty
AT91C_SPI_MODF            EQU (0x1:SHL:2) ;- (SPI) Mode Fault Error
AT91C_SPI_OVRES           EQU (0x1:SHL:3) ;- (SPI) Overrun Error Status
AT91C_SPI_ENDRX           EQU (0x1:SHL:4) ;- (SPI) End of Receiver Transfer
AT91C_SPI_ENDTX           EQU (0x1:SHL:5) ;- (SPI) End of Receiver Transfer
AT91C_SPI_RXBUFF          EQU (0x1:SHL:6) ;- (SPI) RXBUFF Interrupt
AT91C_SPI_TXBUFE          EQU (0x1:SHL:7) ;- (SPI) TXBUFE Interrupt
AT91C_SPI_NSSR            EQU (0x1:SHL:8) ;- (SPI) NSSR Interrupt
AT91C_SPI_TXEMPTY         EQU (0x1:SHL:9) ;- (SPI) TXEMPTY Interrupt
AT91C_SPI_SPIENS          EQU (0x1:SHL:16) ;- (SPI) Enable Status
;- -------- SPI_IER : (SPI Offset: 0x14) Interrupt Enable Register -------- 
;- -------- SPI_IDR : (SPI Offset: 0x18) Interrupt Disable Register -------- 
;- -------- SPI_IMR : (SPI Offset: 0x1c) Interrupt Mask Register -------- 
;- -------- SPI_CSR : (SPI Offset: 0x30) Chip Select Register -------- 
AT91C_SPI_CPOL            EQU (0x1:SHL:0) ;- (SPI) Clock Polarity
AT91C_SPI_NCPHA           EQU (0x1:SHL:1) ;- (SPI) Clock Phase
AT91C_SPI_CSAAT           EQU (0x1:SHL:3) ;- (SPI) Chip Select Active After Transfer
AT91C_SPI_BITS            EQU (0xF:SHL:4) ;- (SPI) Bits Per Transfer
AT91C_SPI_BITS_8          EQU (0x0:SHL:4) ;- (SPI) 8 Bits Per transfer
AT91C_SPI_BITS_9          EQU (0x1:SHL:4) ;- (SPI) 9 Bits Per transfer
AT91C_SPI_BITS_10         EQU (0x2:SHL:4) ;- (SPI) 10 Bits Per transfer
AT91C_SPI_BITS_11         EQU (0x3:SHL:4) ;- (SPI) 11 Bits Per transfer
AT91C_SPI_BITS_12         EQU (0x4:SHL:4) ;- (SPI) 12 Bits Per transfer
AT91C_SPI_BITS_13         EQU (0x5:SHL:4) ;- (SPI) 13 Bits Per transfer
AT91C_SPI_BITS_14         EQU (0x6:SHL:4) ;- (SPI) 14 Bits Per transfer
AT91C_SPI_BITS_15         EQU (0x7:SHL:4) ;- (SPI) 15 Bits Per transfer
AT91C_SPI_BITS_16         EQU (0x8:SHL:4) ;- (SPI) 16 Bits Per transfer
AT91C_SPI_SCBR            EQU (0xFF:SHL:8) ;- (SPI) Serial Clock Baud Rate
AT91C_SPI_DLYBS           EQU (0xFF:SHL:16) ;- (SPI) Delay Before SPCK
AT91C_SPI_DLYBCT          EQU (0xFF:SHL:24) ;- (SPI) Delay Between Consecutive Transfers

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR USB Host Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_UHP
UHP_HcRevision  #  4 ;- Revision
UHP_HcControl   #  4 ;- Operating modes for the Host Controller
UHP_HcCommandStatus #  4 ;- Command & status Register
UHP_HcInterruptStatus #  4 ;- Interrupt Status Register
UHP_HcInterruptEnable #  4 ;- Interrupt Enable Register
UHP_HcInterruptDisable #  4 ;- Interrupt Disable Register
UHP_HcHCCA      #  4 ;- Pointer to the Host Controller Communication Area
UHP_HcPeriodCurrentED #  4 ;- Current Isochronous or Interrupt Endpoint Descriptor
UHP_HcControlHeadED #  4 ;- First Endpoint Descriptor of the Control list
UHP_HcControlCurrentED #  4 ;- Endpoint Control and Status Register
UHP_HcBulkHeadED #  4 ;- First endpoint register of the Bulk list
UHP_HcBulkCurrentED #  4 ;- Current endpoint of the Bulk list
UHP_HcBulkDoneHead #  4 ;- Last completed transfer descriptor
UHP_HcFmInterval #  4 ;- Bit time between 2 consecutive SOFs
UHP_HcFmRemaining #  4 ;- Bit time remaining in the current Frame
UHP_HcFmNumber  #  4 ;- Frame number
UHP_HcPeriodicStart #  4 ;- Periodic Start
UHP_HcLSThreshold #  4 ;- LS Threshold
UHP_HcRhDescriptorA #  4 ;- Root Hub characteristics A
UHP_HcRhDescriptorB #  4 ;- Root Hub characteristics B
UHP_HcRhStatus  #  4 ;- Root Hub Status register
UHP_HcRhPortStatus #  8 ;- Root Hub Port Status Register

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR LCD Controller
;- *****************************************************************************
                ^ 0 ;- AT91S_LCDC
LCDC_BA1        #  4 ;- DMA Base Address Register 1
LCDC_BA2        #  4 ;- DMA Base Address Register 2
LCDC_FRMP1      #  4 ;- DMA Frame Pointer Register 1
LCDC_FRMP2      #  4 ;- DMA Frame Pointer Register 2
LCDC_FRMA1      #  4 ;- DMA Frame Address Register 1
LCDC_FRMA2      #  4 ;- DMA Frame Address Register 2
LCDC_FRMCFG     #  4 ;- DMA Frame Configuration Register
LCDC_DMACON     #  4 ;- DMA Control Register
LCDC_DMA2DCFG   #  4 ;- DMA 2D addressing configuration
                # 2012 ;- Reserved
LCDC_LCDCON1    #  4 ;- LCD Control 1 Register
LCDC_LCDCON2    #  4 ;- LCD Control 2 Register
LCDC_TIM1       #  4 ;- LCD Timing Config 1 Register
LCDC_TIM2       #  4 ;- LCD Timing Config 2 Register
LCDC_LCDFRCFG   #  4 ;- LCD Frame Config Register
LCDC_FIFO       #  4 ;- LCD FIFO Register
LCDC_MVAL       #  4 ;- LCD Mode Toggle Rate Value Register
LCDC_DP1_2      #  4 ;- Dithering Pattern DP1_2 Register
LCDC_DP4_7      #  4 ;- Dithering Pattern DP4_7 Register
LCDC_DP3_5      #  4 ;- Dithering Pattern DP3_5 Register
LCDC_DP2_3      #  4 ;- Dithering Pattern DP2_3 Register
LCDC_DP5_7      #  4 ;- Dithering Pattern DP5_7 Register
LCDC_DP3_4      #  4 ;- Dithering Pattern DP3_4 Register
LCDC_DP4_5      #  4 ;- Dithering Pattern DP4_5 Register
LCDC_DP6_7      #  4 ;- Dithering Pattern DP6_7 Register
LCDC_PWRCON     #  4 ;- Power Control Register
LCDC_CTRSTCON   #  4 ;- Contrast Control Register
LCDC_CTRSTVAL   #  4 ;- Contrast Value Register
LCDC_IER        #  4 ;- Interrupt Enable Register
LCDC_IDR        #  4 ;- Interrupt Disable Register
LCDC_IMR        #  4 ;- Interrupt Mask Register
LCDC_ISR        #  4 ;- Interrupt Enable Register
LCDC_ICR        #  4 ;- Interrupt Clear Register
LCDC_GPR        #  4 ;- General Purpose Register
LCDC_ITR        #  4 ;- Interrupts Test Register
LCDC_IRR        #  4 ;- Interrupts Raw Status Register
                # 920 ;- Reserved
LCDC_LUT_ENTRY  # 1024 ;- LUT Entries Register
;- -------- LCDC_FRMP1 : (LCDC Offset: 0x8) DMA Frame Pointer 1 Register -------- 
AT91C_LCDC_FRMPT1         EQU (0x3FFFFF:SHL:0) ;- (LCDC) Frame Pointer Address 1
;- -------- LCDC_FRMP2 : (LCDC Offset: 0xc) DMA Frame Pointer 2 Register -------- 
AT91C_LCDC_FRMPT2         EQU (0x1FFFFF:SHL:0) ;- (LCDC) Frame Pointer Address 2
;- -------- LCDC_FRMCFG : (LCDC Offset: 0x18) DMA Frame Config Register -------- 
AT91C_LCDC_FRSIZE         EQU (0x3FFFFF:SHL:0) ;- (LCDC) FRAME SIZE
AT91C_LCDC_BLENGTH        EQU (0xF:SHL:24) ;- (LCDC) BURST LENGTH
;- -------- LCDC_DMACON : (LCDC Offset: 0x1c) DMA Control Register -------- 
AT91C_LCDC_DMAEN          EQU (0x1:SHL:0) ;- (LCDC) DAM Enable
AT91C_LCDC_DMARST         EQU (0x1:SHL:1) ;- (LCDC) DMA Reset (WO)
AT91C_LCDC_DMABUSY        EQU (0x1:SHL:2) ;- (LCDC) DMA Reset (WO)
AT91C_LCDC_DMAUPDT        EQU (0x1:SHL:3) ;- (LCDC) DMA Configuration Update
AT91C_LCDC_DMA2DEN        EQU (0x1:SHL:4) ;- (LCDC) 2D Addressing Enable
;- -------- LCDC_DMA2DCFG : (LCDC Offset: 0x20) DMA 2D addressing configuration Register -------- 
AT91C_LCDC_ADDRINC        EQU (0xFFFF:SHL:0) ;- (LCDC) Number of 32b words that the DMA must jump when going to the next line
AT91C_LCDC_PIXELOFF       EQU (0x1F:SHL:24) ;- (LCDC) Offset (in bits) of the first pixel of the screen in the memory word which contain it
;- -------- LCDC_LCDCON1 : (LCDC Offset: 0x800) LCD Control 1 Register -------- 
AT91C_LCDC_BYPASS         EQU (0x1:SHL:0) ;- (LCDC) Bypass lcd_pccklk divider
AT91C_LCDC_CLKVAL         EQU (0x1FF:SHL:12) ;- (LCDC) 9-bit Divider for pixel clock frequency
AT91C_LCDC_LINCNT         EQU (0x7FF:SHL:21) ;- (LCDC) Line Counter (RO)
;- -------- LCDC_LCDCON2 : (LCDC Offset: 0x804) LCD Control 2 Register -------- 
AT91C_LCDC_DISTYPE        EQU (0x3:SHL:0) ;- (LCDC) Display Type
AT91C_LCDC_DISTYPE_STNMONO EQU (0x0) ;- (LCDC) STN Mono
AT91C_LCDC_DISTYPE_STNCOLOR EQU (0x1) ;- (LCDC) STN Color
AT91C_LCDC_DISTYPE_TFT    EQU (0x2) ;- (LCDC) TFT
AT91C_LCDC_SCANMOD        EQU (0x1:SHL:2) ;- (LCDC) Scan Mode
AT91C_LCDC_SCANMOD_SINGLESCAN EQU (0x0:SHL:2) ;- (LCDC) Single Scan
AT91C_LCDC_SCANMOD_DUALSCAN EQU (0x1:SHL:2) ;- (LCDC) Dual Scan
AT91C_LCDC_IFWIDTH        EQU (0x3:SHL:3) ;- (LCDC) Interface Width
AT91C_LCDC_IFWIDTH_FOURBITSWIDTH EQU (0x0:SHL:3) ;- (LCDC) 4 Bits
AT91C_LCDC_IFWIDTH_EIGTHBITSWIDTH EQU (0x1:SHL:3) ;- (LCDC) 8 Bits
AT91C_LCDC_IFWIDTH_SIXTEENBITSWIDTH EQU (0x2:SHL:3) ;- (LCDC) 16 Bits
AT91C_LCDC_PIXELSIZE      EQU (0x7:SHL:5) ;- (LCDC) Bits per pixel
AT91C_LCDC_PIXELSIZE_ONEBITSPERPIXEL EQU (0x0:SHL:5) ;- (LCDC) 1 Bits
AT91C_LCDC_PIXELSIZE_TWOBITSPERPIXEL EQU (0x1:SHL:5) ;- (LCDC) 2 Bits
AT91C_LCDC_PIXELSIZE_FOURBITSPERPIXEL EQU (0x2:SHL:5) ;- (LCDC) 4 Bits
AT91C_LCDC_PIXELSIZE_EIGTHBITSPERPIXEL EQU (0x3:SHL:5) ;- (LCDC) 8 Bits
AT91C_LCDC_PIXELSIZE_SIXTEENBITSPERPIXEL EQU (0x4:SHL:5) ;- (LCDC) 16 Bits
AT91C_LCDC_PIXELSIZE_TWENTYFOURBITSPERPIXEL EQU (0x5:SHL:5) ;- (LCDC) 24 Bits
AT91C_LCDC_INVVD          EQU (0x1:SHL:8) ;- (LCDC) lcd datas polarity
AT91C_LCDC_INVVD_NORMALPOL EQU (0x0:SHL:8) ;- (LCDC) Normal Polarity
AT91C_LCDC_INVVD_INVERTEDPOL EQU (0x1:SHL:8) ;- (LCDC) Inverted Polarity
AT91C_LCDC_INVFRAME       EQU (0x1:SHL:9) ;- (LCDC) lcd vsync polarity
AT91C_LCDC_INVFRAME_NORMALPOL EQU (0x0:SHL:9) ;- (LCDC) Normal Polarity
AT91C_LCDC_INVFRAME_INVERTEDPOL EQU (0x1:SHL:9) ;- (LCDC) Inverted Polarity
AT91C_LCDC_INVLINE        EQU (0x1:SHL:10) ;- (LCDC) lcd hsync polarity
AT91C_LCDC_INVLINE_NORMALPOL EQU (0x0:SHL:10) ;- (LCDC) Normal Polarity
AT91C_LCDC_INVLINE_INVERTEDPOL EQU (0x1:SHL:10) ;- (LCDC) Inverted Polarity
AT91C_LCDC_INVCLK         EQU (0x1:SHL:11) ;- (LCDC) lcd pclk polarity
AT91C_LCDC_INVCLK_NORMALPOL EQU (0x0:SHL:11) ;- (LCDC) Normal Polarity
AT91C_LCDC_INVCLK_INVERTEDPOL EQU (0x1:SHL:11) ;- (LCDC) Inverted Polarity
AT91C_LCDC_INVDVAL        EQU (0x1:SHL:12) ;- (LCDC) lcd dval polarity
AT91C_LCDC_INVDVAL_NORMALPOL EQU (0x0:SHL:12) ;- (LCDC) Normal Polarity
AT91C_LCDC_INVDVAL_INVERTEDPOL EQU (0x1:SHL:12) ;- (LCDC) Inverted Polarity
AT91C_LCDC_CLKMOD         EQU (0x1:SHL:15) ;- (LCDC) lcd pclk Mode
AT91C_LCDC_CLKMOD_ACTIVEONLYDISP EQU (0x0:SHL:15) ;- (LCDC) Active during display period
AT91C_LCDC_CLKMOD_ALWAYSACTIVE EQU (0x1:SHL:15) ;- (LCDC) Always Active
AT91C_LCDC_MEMOR          EQU (0x1:SHL:31) ;- (LCDC) lcd pclk Mode
AT91C_LCDC_MEMOR_BIGIND   EQU (0x0:SHL:31) ;- (LCDC) Big Endian
AT91C_LCDC_MEMOR_LITTLEIND EQU (0x1:SHL:31) ;- (LCDC) Little Endian
;- -------- LCDC_TIM1 : (LCDC Offset: 0x808) LCDC Timing Config 1 Register -------- 
AT91C_LCDC_VFP            EQU (0xFF:SHL:0) ;- (LCDC) Vertical Front Porch
AT91C_LCDC_VBP            EQU (0xFF:SHL:8) ;- (LCDC) Vertical Back Porch
AT91C_LCDC_VPW            EQU (0x3F:SHL:16) ;- (LCDC) Vertical Synchronization Pulse Width
AT91C_LCDC_VHDLY          EQU (0xF:SHL:24) ;- (LCDC) Vertical to Horizontal Delay
;- -------- LCDC_TIM2 : (LCDC Offset: 0x80c) LCDC Timing Config 2 Register -------- 
AT91C_LCDC_HBP            EQU (0xFF:SHL:0) ;- (LCDC) Horizontal Back Porch
AT91C_LCDC_HPW            EQU (0x3F:SHL:8) ;- (LCDC) Horizontal Synchronization Pulse Width
AT91C_LCDC_HFP            EQU (0x3FF:SHL:22) ;- (LCDC) Horizontal Front Porch
;- -------- LCDC_LCDFRCFG : (LCDC Offset: 0x810) LCD Frame Config Register -------- 
AT91C_LCDC_LINEVAL        EQU (0x7FF:SHL:0) ;- (LCDC) Vertical Size of LCD Module
AT91C_LCDC_HOZVAL         EQU (0x7FF:SHL:21) ;- (LCDC) Horizontal Size of LCD Module
;- -------- LCDC_FIFO : (LCDC Offset: 0x814) LCD FIFO Register -------- 
AT91C_LCDC_FIFOTH         EQU (0xFFFF:SHL:0) ;- (LCDC) FIFO Threshold
;- -------- LCDC_MVAL : (LCDC Offset: 0x818) LCD Mode Toggle Rate Value Register -------- 
AT91C_LCDC_MVALUE         EQU (0xFF:SHL:0) ;- (LCDC) Toggle Rate Value
AT91C_LCDC_MMODE          EQU (0x1:SHL:31) ;- (LCDC) Toggle Rate Sel
AT91C_LCDC_MMODE_EACHFRAME EQU (0x0:SHL:31) ;- (LCDC) Each Frame
AT91C_LCDC_MMODE_MVALDEFINED EQU (0x1:SHL:31) ;- (LCDC) Defined by MVAL
;- -------- LCDC_DP1_2 : (LCDC Offset: 0x81c) Dithering Pattern 1/2 -------- 
AT91C_LCDC_DP1_2_FIELD    EQU (0xFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_DP4_7 : (LCDC Offset: 0x820) Dithering Pattern 4/7 -------- 
AT91C_LCDC_DP4_7_FIELD    EQU (0xFFFFFFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_DP3_5 : (LCDC Offset: 0x824) Dithering Pattern 3/5 -------- 
AT91C_LCDC_DP3_5_FIELD    EQU (0xFFFFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_DP2_3 : (LCDC Offset: 0x828) Dithering Pattern 2/3 -------- 
AT91C_LCDC_DP2_3_FIELD    EQU (0xFFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_DP5_7 : (LCDC Offset: 0x82c) Dithering Pattern 5/7 -------- 
AT91C_LCDC_DP5_7_FIELD    EQU (0xFFFFFFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_DP3_4 : (LCDC Offset: 0x830) Dithering Pattern 3/4 -------- 
AT91C_LCDC_DP3_4_FIELD    EQU (0xFFFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_DP4_5 : (LCDC Offset: 0x834) Dithering Pattern 4/5 -------- 
AT91C_LCDC_DP4_5_FIELD    EQU (0xFFFFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_DP6_7 : (LCDC Offset: 0x838) Dithering Pattern 6/7 -------- 
AT91C_LCDC_DP6_7_FIELD    EQU (0xFFFFFFF:SHL:0) ;- (LCDC) Ratio
;- -------- LCDC_PWRCON : (LCDC Offset: 0x83c) LCDC Power Control Register -------- 
AT91C_LCDC_PWR            EQU (0x1:SHL:0) ;- (LCDC) LCD Module Power Control
AT91C_LCDC_GUARDT         EQU (0x7F:SHL:1) ;- (LCDC) Delay in Frame Period
AT91C_LCDC_BUSY           EQU (0x1:SHL:31) ;- (LCDC) Read Only : 1 indicates that LCDC is busy
AT91C_LCDC_BUSY_LCDNOTBUSY EQU (0x0:SHL:31) ;- (LCDC) LCD is Not Busy
AT91C_LCDC_BUSY_LCDBUSY   EQU (0x1:SHL:31) ;- (LCDC) LCD is Busy
;- -------- LCDC_CTRSTCON : (LCDC Offset: 0x840) LCDC Contrast Control Register -------- 
AT91C_LCDC_PS             EQU (0x3:SHL:0) ;- (LCDC) LCD Contrast Counter Prescaler
AT91C_LCDC_PS_NOTDIVIDED  EQU (0x0) ;- (LCDC) Counter Freq is System Freq.
AT91C_LCDC_PS_DIVIDEDBYTWO EQU (0x1) ;- (LCDC) Counter Freq is System Freq divided by 2.
AT91C_LCDC_PS_DIVIDEDBYFOUR EQU (0x2) ;- (LCDC) Counter Freq is System Freq divided by 4.
AT91C_LCDC_PS_DIVIDEDBYEIGHT EQU (0x3) ;- (LCDC) Counter Freq is System Freq divided by 8.
AT91C_LCDC_POL            EQU (0x1:SHL:2) ;- (LCDC) Polarity of output Pulse
AT91C_LCDC_POL_NEGATIVEPULSE EQU (0x0:SHL:2) ;- (LCDC) Negative Pulse
AT91C_LCDC_POL_POSITIVEPULSE EQU (0x1:SHL:2) ;- (LCDC) Positive Pulse
AT91C_LCDC_ENA            EQU (0x1:SHL:3) ;- (LCDC) PWM generator Control
AT91C_LCDC_ENA_PWMGEMDISABLED EQU (0x0:SHL:3) ;- (LCDC) PWM Generator Disabled
AT91C_LCDC_ENA_PWMGEMENABLED EQU (0x1:SHL:3) ;- (LCDC) PWM Generator Disabled
;- -------- LCDC_CTRSTVAL : (LCDC Offset: 0x844) Contrast Value Register -------- 
AT91C_LCDC_CVAL           EQU (0xFF:SHL:0) ;- (LCDC) PWM Compare Value
;- -------- LCDC_IER : (LCDC Offset: 0x848) LCDC Interrupt Enable Register -------- 
AT91C_LCDC_LNI            EQU (0x1:SHL:0) ;- (LCDC) Line Interrupt
AT91C_LCDC_LSTLNI         EQU (0x1:SHL:1) ;- (LCDC) Last Line Interrupt
AT91C_LCDC_EOFI           EQU (0x1:SHL:2) ;- (LCDC) End Of Frame Interrupt
AT91C_LCDC_UFLWI          EQU (0x1:SHL:4) ;- (LCDC) FIFO Underflow Interrupt
AT91C_LCDC_OWRI           EQU (0x1:SHL:5) ;- (LCDC) Over Write Interrupt
AT91C_LCDC_MERI           EQU (0x1:SHL:6) ;- (LCDC) Memory Error  Interrupt
;- -------- LCDC_IDR : (LCDC Offset: 0x84c) LCDC Interrupt Disable Register -------- 
;- -------- LCDC_IMR : (LCDC Offset: 0x850) LCDC Interrupt Mask Register -------- 
;- -------- LCDC_ISR : (LCDC Offset: 0x854) LCDC Interrupt Status Register -------- 
;- -------- LCDC_ICR : (LCDC Offset: 0x858) LCDC Interrupt Clear Register -------- 
;- -------- LCDC_GPR : (LCDC Offset: 0x85c) LCDC General Purpose Register -------- 
AT91C_LCDC_GPRBUS         EQU (0xFF:SHL:0) ;- (LCDC) 8 bits available
;- -------- LCDC_ITR : (LCDC Offset: 0x860) Interrupts Test Register -------- 
;- -------- LCDC_IRR : (LCDC Offset: 0x864) Interrupts Raw Status Register -------- 

;- *****************************************************************************
;-               REGISTER ADDRESS DEFINITION FOR AT91SAM9261
;- *****************************************************************************
;- ========== Register definition for SYS peripheral ========== 
AT91C_SYS_GPBR1           EQU (0xFFFFFD54) ;- (SYS) General Purpose Register 1
AT91C_SYS_GPBR3           EQU (0xFFFFFD5C) ;- (SYS) General Purpose Register 3
AT91C_SYS_GPBR2           EQU (0xFFFFFD58) ;- (SYS) General Purpose Register 2
AT91C_SYS_GPBR0           EQU (0xFFFFFD50) ;- (SYS) General Purpose Register 0
;- ========== Register definition for SDRAMC peripheral ========== 
AT91C_SDRAMC_MR           EQU (0xFFFFEA00) ;- (SDRAMC) SDRAM Controller Mode Register
AT91C_SDRAMC_IMR          EQU (0xFFFFEA1C) ;- (SDRAMC) SDRAM Controller Interrupt Mask Register
AT91C_SDRAMC_LPR          EQU (0xFFFFEA10) ;- (SDRAMC) SDRAM Controller Low Power Register
AT91C_SDRAMC_ISR          EQU (0xFFFFEA20) ;- (SDRAMC) SDRAM Controller Interrupt Mask Register
AT91C_SDRAMC_IDR          EQU (0xFFFFEA18) ;- (SDRAMC) SDRAM Controller Interrupt Disable Register
AT91C_SDRAMC_CR           EQU (0xFFFFEA08) ;- (SDRAMC) SDRAM Controller Configuration Register
AT91C_SDRAMC_TR           EQU (0xFFFFEA04) ;- (SDRAMC) SDRAM Controller Refresh Timer Register
AT91C_SDRAMC_MDR          EQU (0xFFFFEA24) ;- (SDRAMC) SDRAM Memory Device Register
AT91C_SDRAMC_HSR          EQU (0xFFFFEA0C) ;- (SDRAMC) SDRAM Controller High Speed Register
AT91C_SDRAMC_IER          EQU (0xFFFFEA14) ;- (SDRAMC) SDRAM Controller Interrupt Enable Register
;- ========== Register definition for SMC peripheral ========== 
AT91C_SMC_CTRL1           EQU (0xFFFFEC1C) ;- (SMC)  Control Register for CS 1
AT91C_SMC_PULSE7          EQU (0xFFFFEC74) ;- (SMC)  Pulse Register for CS 7
AT91C_SMC_PULSE6          EQU (0xFFFFEC64) ;- (SMC)  Pulse Register for CS 6
AT91C_SMC_SETUP4          EQU (0xFFFFEC40) ;- (SMC)  Setup Register for CS 4
AT91C_SMC_PULSE3          EQU (0xFFFFEC34) ;- (SMC)  Pulse Register for CS 3
AT91C_SMC_CYCLE5          EQU (0xFFFFEC58) ;- (SMC)  Cycle Register for CS 5
AT91C_SMC_CYCLE2          EQU (0xFFFFEC28) ;- (SMC)  Cycle Register for CS 2
AT91C_SMC_CTRL2           EQU (0xFFFFEC2C) ;- (SMC)  Control Register for CS 2
AT91C_SMC_CTRL0           EQU (0xFFFFEC0C) ;- (SMC)  Control Register for CS 0
AT91C_SMC_PULSE5          EQU (0xFFFFEC54) ;- (SMC)  Pulse Register for CS 5
AT91C_SMC_PULSE1          EQU (0xFFFFEC14) ;- (SMC)  Pulse Register for CS 1
AT91C_SMC_PULSE0          EQU (0xFFFFEC04) ;- (SMC)  Pulse Register for CS 0
AT91C_SMC_CYCLE7          EQU (0xFFFFEC78) ;- (SMC)  Cycle Register for CS 7
AT91C_SMC_CTRL4           EQU (0xFFFFEC4C) ;- (SMC)  Control Register for CS 4
AT91C_SMC_CTRL3           EQU (0xFFFFEC3C) ;- (SMC)  Control Register for CS 3
AT91C_SMC_SETUP7          EQU (0xFFFFEC70) ;- (SMC)  Setup Register for CS 7
AT91C_SMC_CTRL7           EQU (0xFFFFEC7C) ;- (SMC)  Control Register for CS 7
AT91C_SMC_SETUP1          EQU (0xFFFFEC10) ;- (SMC)  Setup Register for CS 1
AT91C_SMC_CYCLE0          EQU (0xFFFFEC08) ;- (SMC)  Cycle Register for CS 0
AT91C_SMC_CTRL5           EQU (0xFFFFEC5C) ;- (SMC)  Control Register for CS 5
AT91C_SMC_CYCLE1          EQU (0xFFFFEC18) ;- (SMC)  Cycle Register for CS 1
AT91C_SMC_CTRL6           EQU (0xFFFFEC6C) ;- (SMC)  Control Register for CS 6
AT91C_SMC_SETUP0          EQU (0xFFFFEC00) ;- (SMC)  Setup Register for CS 0
AT91C_SMC_PULSE4          EQU (0xFFFFEC44) ;- (SMC)  Pulse Register for CS 4
AT91C_SMC_SETUP5          EQU (0xFFFFEC50) ;- (SMC)  Setup Register for CS 5
AT91C_SMC_SETUP2          EQU (0xFFFFEC20) ;- (SMC)  Setup Register for CS 2
AT91C_SMC_CYCLE3          EQU (0xFFFFEC38) ;- (SMC)  Cycle Register for CS 3
AT91C_SMC_CYCLE6          EQU (0xFFFFEC68) ;- (SMC)  Cycle Register for CS 6
AT91C_SMC_SETUP6          EQU (0xFFFFEC60) ;- (SMC)  Setup Register for CS 6
AT91C_SMC_CYCLE4          EQU (0xFFFFEC48) ;- (SMC)  Cycle Register for CS 4
AT91C_SMC_PULSE2          EQU (0xFFFFEC24) ;- (SMC)  Pulse Register for CS 2
AT91C_SMC_SETUP3          EQU (0xFFFFEC30) ;- (SMC)  Setup Register for CS 3
;- ========== Register definition for MATRIX peripheral ========== 
AT91C_MATRIX_USBPCR       EQU (0xFFFFEE34) ;- (MATRIX)  Slave 4 Special Function Register
AT91C_MATRIX_MCFG         EQU (0xFFFFEE00) ;- (MATRIX)  Master Configuration Register
AT91C_MATRIX_EBICSA       EQU (0xFFFFEE30) ;- (MATRIX)  Slave 3 Special Function Register
AT91C_MATRIX_SCFG2        EQU (0xFFFFEE0C) ;- (MATRIX)  Slave Configuration Register 2
AT91C_MATRIX_VERSION      EQU (0xFFFFEE44) ;- (MATRIX)  Version Register
AT91C_MATRIX_SCFG3        EQU (0xFFFFEE10) ;- (MATRIX)  Slave Configuration Register 3
AT91C_MATRIX_TCMR         EQU (0xFFFFEE24) ;- (MATRIX)  Slave 0 Special Function Register
AT91C_MATRIX_SCFG1        EQU (0xFFFFEE08) ;- (MATRIX)  Slave Configuration Register 1
AT91C_MATRIX_SCFG4        EQU (0xFFFFEE14) ;- (MATRIX)  Slave Configuration Register 4
AT91C_MATRIX_SCFG0        EQU (0xFFFFEE04) ;- (MATRIX)  Slave Configuration Register 0
;- ========== Register definition for AIC peripheral ========== 
AT91C_AIC_IVR             EQU (0xFFFFF100) ;- (AIC) IRQ Vector Register
AT91C_AIC_SMR             EQU (0xFFFFF000) ;- (AIC) Source Mode Register
AT91C_AIC_FVR             EQU (0xFFFFF104) ;- (AIC) FIQ Vector Register
AT91C_AIC_DCR             EQU (0xFFFFF138) ;- (AIC) Debug Control Register (Protect)
AT91C_AIC_EOICR           EQU (0xFFFFF130) ;- (AIC) End of Interrupt Command Register
AT91C_AIC_SVR             EQU (0xFFFFF080) ;- (AIC) Source Vector Register
AT91C_AIC_FFSR            EQU (0xFFFFF148) ;- (AIC) Fast Forcing Status Register
AT91C_AIC_ICCR            EQU (0xFFFFF128) ;- (AIC) Interrupt Clear Command Register
AT91C_AIC_ISR             EQU (0xFFFFF108) ;- (AIC) Interrupt Status Register
AT91C_AIC_IMR             EQU (0xFFFFF110) ;- (AIC) Interrupt Mask Register
AT91C_AIC_IPR             EQU (0xFFFFF10C) ;- (AIC) Interrupt Pending Register
AT91C_AIC_FFER            EQU (0xFFFFF140) ;- (AIC) Fast Forcing Enable Register
AT91C_AIC_IECR            EQU (0xFFFFF120) ;- (AIC) Interrupt Enable Command Register
AT91C_AIC_ISCR            EQU (0xFFFFF12C) ;- (AIC) Interrupt Set Command Register
AT91C_AIC_FFDR            EQU (0xFFFFF144) ;- (AIC) Fast Forcing Disable Register
AT91C_AIC_CISR            EQU (0xFFFFF114) ;- (AIC) Core Interrupt Status Register
AT91C_AIC_IDCR            EQU (0xFFFFF124) ;- (AIC) Interrupt Disable Command Register
AT91C_AIC_SPU             EQU (0xFFFFF134) ;- (AIC) Spurious Vector Register
;- ========== Register definition for PDC_DBGU peripheral ========== 
AT91C_DBGU_TCR            EQU (0xFFFFF30C) ;- (PDC_DBGU) Transmit Counter Register
AT91C_DBGU_RNPR           EQU (0xFFFFF310) ;- (PDC_DBGU) Receive Next Pointer Register
AT91C_DBGU_TNPR           EQU (0xFFFFF318) ;- (PDC_DBGU) Transmit Next Pointer Register
AT91C_DBGU_TPR            EQU (0xFFFFF308) ;- (PDC_DBGU) Transmit Pointer Register
AT91C_DBGU_RPR            EQU (0xFFFFF300) ;- (PDC_DBGU) Receive Pointer Register
AT91C_DBGU_RCR            EQU (0xFFFFF304) ;- (PDC_DBGU) Receive Counter Register
AT91C_DBGU_RNCR           EQU (0xFFFFF314) ;- (PDC_DBGU) Receive Next Counter Register
AT91C_DBGU_PTCR           EQU (0xFFFFF320) ;- (PDC_DBGU) PDC Transfer Control Register
AT91C_DBGU_PTSR           EQU (0xFFFFF324) ;- (PDC_DBGU) PDC Transfer Status Register
AT91C_DBGU_TNCR           EQU (0xFFFFF31C) ;- (PDC_DBGU) Transmit Next Counter Register
;- ========== Register definition for DBGU peripheral ========== 
AT91C_DBGU_EXID           EQU (0xFFFFF244) ;- (DBGU) Chip ID Extension Register
AT91C_DBGU_BRGR           EQU (0xFFFFF220) ;- (DBGU) Baud Rate Generator Register
AT91C_DBGU_IDR            EQU (0xFFFFF20C) ;- (DBGU) Interrupt Disable Register
AT91C_DBGU_CSR            EQU (0xFFFFF214) ;- (DBGU) Channel Status Register
AT91C_DBGU_CIDR           EQU (0xFFFFF240) ;- (DBGU) Chip ID Register
AT91C_DBGU_MR             EQU (0xFFFFF204) ;- (DBGU) Mode Register
AT91C_DBGU_IMR            EQU (0xFFFFF210) ;- (DBGU) Interrupt Mask Register
AT91C_DBGU_CR             EQU (0xFFFFF200) ;- (DBGU) Control Register
AT91C_DBGU_FNTR           EQU (0xFFFFF248) ;- (DBGU) Force NTRST Register
AT91C_DBGU_THR            EQU (0xFFFFF21C) ;- (DBGU) Transmitter Holding Register
AT91C_DBGU_RHR            EQU (0xFFFFF218) ;- (DBGU) Receiver Holding Register
AT91C_DBGU_IER            EQU (0xFFFFF208) ;- (DBGU) Interrupt Enable Register
;- ========== Register definition for PIOA peripheral ========== 
AT91C_PIOA_ODR            EQU (0xFFFFF414) ;- (PIOA) Output Disable Registerr
AT91C_PIOA_SODR           EQU (0xFFFFF430) ;- (PIOA) Set Output Data Register
AT91C_PIOA_ISR            EQU (0xFFFFF44C) ;- (PIOA) Interrupt Status Register
AT91C_PIOA_ABSR           EQU (0xFFFFF478) ;- (PIOA) AB Select Status Register
AT91C_PIOA_IER            EQU (0xFFFFF440) ;- (PIOA) Interrupt Enable Register
AT91C_PIOA_PPUDR          EQU (0xFFFFF460) ;- (PIOA) Pull-up Disable Register
AT91C_PIOA_IMR            EQU (0xFFFFF448) ;- (PIOA) Interrupt Mask Register
AT91C_PIOA_PER            EQU (0xFFFFF400) ;- (PIOA) PIO Enable Register
AT91C_PIOA_IFDR           EQU (0xFFFFF424) ;- (PIOA) Input Filter Disable Register
AT91C_PIOA_OWDR           EQU (0xFFFFF4A4) ;- (PIOA) Output Write Disable Register
AT91C_PIOA_MDSR           EQU (0xFFFFF458) ;- (PIOA) Multi-driver Status Register
AT91C_PIOA_IDR            EQU (0xFFFFF444) ;- (PIOA) Interrupt Disable Register
AT91C_PIOA_ODSR           EQU (0xFFFFF438) ;- (PIOA) Output Data Status Register
AT91C_PIOA_PPUSR          EQU (0xFFFFF468) ;- (PIOA) Pull-up Status Register
AT91C_PIOA_OWSR           EQU (0xFFFFF4A8) ;- (PIOA) Output Write Status Register
AT91C_PIOA_BSR            EQU (0xFFFFF474) ;- (PIOA) Select B Register
AT91C_PIOA_OWER           EQU (0xFFFFF4A0) ;- (PIOA) Output Write Enable Register
AT91C_PIOA_IFER           EQU (0xFFFFF420) ;- (PIOA) Input Filter Enable Register
AT91C_PIOA_PDSR           EQU (0xFFFFF43C) ;- (PIOA) Pin Data Status Register
AT91C_PIOA_PPUER          EQU (0xFFFFF464) ;- (PIOA) Pull-up Enable Register
AT91C_PIOA_OSR            EQU (0xFFFFF418) ;- (PIOA) Output Status Register
AT91C_PIOA_ASR            EQU (0xFFFFF470) ;- (PIOA) Select A Register
AT91C_PIOA_MDDR           EQU (0xFFFFF454) ;- (PIOA) Multi-driver Disable Register
AT91C_PIOA_CODR           EQU (0xFFFFF434) ;- (PIOA) Clear Output Data Register
AT91C_PIOA_MDER           EQU (0xFFFFF450) ;- (PIOA) Multi-driver Enable Register
AT91C_PIOA_PDR            EQU (0xFFFFF404) ;- (PIOA) PIO Disable Register
AT91C_PIOA_IFSR           EQU (0xFFFFF428) ;- (PIOA) Input Filter Status Register
AT91C_PIOA_OER            EQU (0xFFFFF410) ;- (PIOA) Output Enable Register
AT91C_PIOA_PSR            EQU (0xFFFFF408) ;- (PIOA) PIO Status Register
;- ========== Register definition for PIOB peripheral ========== 
AT91C_PIOB_OWDR           EQU (0xFFFFF6A4) ;- (PIOB) Output Write Disable Register
AT91C_PIOB_MDER           EQU (0xFFFFF650) ;- (PIOB) Multi-driver Enable Register
AT91C_PIOB_PPUSR          EQU (0xFFFFF668) ;- (PIOB) Pull-up Status Register
AT91C_PIOB_IMR            EQU (0xFFFFF648) ;- (PIOB) Interrupt Mask Register
AT91C_PIOB_ASR            EQU (0xFFFFF670) ;- (PIOB) Select A Register
AT91C_PIOB_PPUDR          EQU (0xFFFFF660) ;- (PIOB) Pull-up Disable Register
AT91C_PIOB_PSR            EQU (0xFFFFF608) ;- (PIOB) PIO Status Register
AT91C_PIOB_IER            EQU (0xFFFFF640) ;- (PIOB) Interrupt Enable Register
AT91C_PIOB_CODR           EQU (0xFFFFF634) ;- (PIOB) Clear Output Data Register
AT91C_PIOB_OWER           EQU (0xFFFFF6A0) ;- (PIOB) Output Write Enable Register
AT91C_PIOB_ABSR           EQU (0xFFFFF678) ;- (PIOB) AB Select Status Register
AT91C_PIOB_IFDR           EQU (0xFFFFF624) ;- (PIOB) Input Filter Disable Register
AT91C_PIOB_PDSR           EQU (0xFFFFF63C) ;- (PIOB) Pin Data Status Register
AT91C_PIOB_IDR            EQU (0xFFFFF644) ;- (PIOB) Interrupt Disable Register
AT91C_PIOB_OWSR           EQU (0xFFFFF6A8) ;- (PIOB) Output Write Status Register
AT91C_PIOB_PDR            EQU (0xFFFFF604) ;- (PIOB) PIO Disable Register
AT91C_PIOB_ODR            EQU (0xFFFFF614) ;- (PIOB) Output Disable Registerr
AT91C_PIOB_IFSR           EQU (0xFFFFF628) ;- (PIOB) Input Filter Status Register
AT91C_PIOB_PPUER          EQU (0xFFFFF664) ;- (PIOB) Pull-up Enable Register
AT91C_PIOB_SODR           EQU (0xFFFFF630) ;- (PIOB) Set Output Data Register
AT91C_PIOB_ISR            EQU (0xFFFFF64C) ;- (PIOB) Interrupt Status Register
AT91C_PIOB_ODSR           EQU (0xFFFFF638) ;- (PIOB) Output Data Status Register
AT91C_PIOB_OSR            EQU (0xFFFFF618) ;- (PIOB) Output Status Register
AT91C_PIOB_MDSR           EQU (0xFFFFF658) ;- (PIOB) Multi-driver Status Register
AT91C_PIOB_IFER           EQU (0xFFFFF620) ;- (PIOB) Input Filter Enable Register
AT91C_PIOB_BSR            EQU (0xFFFFF674) ;- (PIOB) Select B Register
AT91C_PIOB_MDDR           EQU (0xFFFFF654) ;- (PIOB) Multi-driver Disable Register
AT91C_PIOB_OER            EQU (0xFFFFF610) ;- (PIOB) Output Enable Register
AT91C_PIOB_PER            EQU (0xFFFFF600) ;- (PIOB) PIO Enable Register
;- ========== Register definition for PIOC peripheral ========== 
AT91C_PIOC_OWDR           EQU (0xFFFFF8A4) ;- (PIOC) Output Write Disable Register
AT91C_PIOC_SODR           EQU (0xFFFFF830) ;- (PIOC) Set Output Data Register
AT91C_PIOC_PPUER          EQU (0xFFFFF864) ;- (PIOC) Pull-up Enable Register
AT91C_PIOC_CODR           EQU (0xFFFFF834) ;- (PIOC) Clear Output Data Register
AT91C_PIOC_PSR            EQU (0xFFFFF808) ;- (PIOC) PIO Status Register
AT91C_PIOC_PDR            EQU (0xFFFFF804) ;- (PIOC) PIO Disable Register
AT91C_PIOC_ODR            EQU (0xFFFFF814) ;- (PIOC) Output Disable Registerr
AT91C_PIOC_PPUSR          EQU (0xFFFFF868) ;- (PIOC) Pull-up Status Register
AT91C_PIOC_ABSR           EQU (0xFFFFF878) ;- (PIOC) AB Select Status Register
AT91C_PIOC_IFSR           EQU (0xFFFFF828) ;- (PIOC) Input Filter Status Register
AT91C_PIOC_OER            EQU (0xFFFFF810) ;- (PIOC) Output Enable Register
AT91C_PIOC_IMR            EQU (0xFFFFF848) ;- (PIOC) Interrupt Mask Register
AT91C_PIOC_ASR            EQU (0xFFFFF870) ;- (PIOC) Select A Register
AT91C_PIOC_MDDR           EQU (0xFFFFF854) ;- (PIOC) Multi-driver Disable Register
AT91C_PIOC_OWSR           EQU (0xFFFFF8A8) ;- (PIOC) Output Write Status Register
AT91C_PIOC_PER            EQU (0xFFFFF800) ;- (PIOC) PIO Enable Register
AT91C_PIOC_IDR            EQU (0xFFFFF844) ;- (PIOC) Interrupt Disable Register
AT91C_PIOC_MDER           EQU (0xFFFFF850) ;- (PIOC) Multi-driver Enable Register
AT91C_PIOC_PDSR           EQU (0xFFFFF83C) ;- (PIOC) Pin Data Status Register
AT91C_PIOC_MDSR           EQU (0xFFFFF858) ;- (PIOC) Multi-driver Status Register
AT91C_PIOC_OWER           EQU (0xFFFFF8A0) ;- (PIOC) Output Write Enable Register
AT91C_PIOC_BSR            EQU (0xFFFFF874) ;- (PIOC) Select B Register
AT91C_PIOC_PPUDR          EQU (0xFFFFF860) ;- (PIOC) Pull-up Disable Register
AT91C_PIOC_IFDR           EQU (0xFFFFF824) ;- (PIOC) Input Filter Disable Register
AT91C_PIOC_IER            EQU (0xFFFFF840) ;- (PIOC) Interrupt Enable Register
AT91C_PIOC_OSR            EQU (0xFFFFF818) ;- (PIOC) Output Status Register
AT91C_PIOC_ODSR           EQU (0xFFFFF838) ;- (PIOC) Output Data Status Register
AT91C_PIOC_ISR            EQU (0xFFFFF84C) ;- (PIOC) Interrupt Status Register
AT91C_PIOC_IFER           EQU (0xFFFFF820) ;- (PIOC) Input Filter Enable Register
;- ========== Register definition for CKGR peripheral ========== 
AT91C_CKGR_MOR            EQU (0xFFFFFC20) ;- (CKGR) Main Oscillator Register
AT91C_CKGR_PLLBR          EQU (0xFFFFFC2C) ;- (CKGR) PLL B Register
AT91C_CKGR_MCFR           EQU (0xFFFFFC24) ;- (CKGR) Main Clock  Frequency Register
AT91C_CKGR_PLLAR          EQU (0xFFFFFC28) ;- (CKGR) PLL A Register
;- ========== Register definition for PMC peripheral ========== 
AT91C_PMC_PCER            EQU (0xFFFFFC10) ;- (PMC) Peripheral Clock Enable Register
AT91C_PMC_PCKR            EQU (0xFFFFFC40) ;- (PMC) Programmable Clock Register
AT91C_PMC_MCKR            EQU (0xFFFFFC30) ;- (PMC) Master Clock Register
AT91C_PMC_PLLAR           EQU (0xFFFFFC28) ;- (PMC) PLL A Register
AT91C_PMC_PCDR            EQU (0xFFFFFC14) ;- (PMC) Peripheral Clock Disable Register
AT91C_PMC_SCSR            EQU (0xFFFFFC08) ;- (PMC) System Clock Status Register
AT91C_PMC_MCFR            EQU (0xFFFFFC24) ;- (PMC) Main Clock  Frequency Register
AT91C_PMC_IMR             EQU (0xFFFFFC6C) ;- (PMC) Interrupt Mask Register
AT91C_PMC_IER             EQU (0xFFFFFC60) ;- (PMC) Interrupt Enable Register
AT91C_PMC_MOR             EQU (0xFFFFFC20) ;- (PMC) Main Oscillator Register
AT91C_PMC_IDR             EQU (0xFFFFFC64) ;- (PMC) Interrupt Disable Register
AT91C_PMC_PLLBR           EQU (0xFFFFFC2C) ;- (PMC) PLL B Register
AT91C_PMC_SCDR            EQU (0xFFFFFC04) ;- (PMC) System Clock Disable Register
AT91C_PMC_PCSR            EQU (0xFFFFFC18) ;- (PMC) Peripheral Clock Status Register
AT91C_PMC_SCER            EQU (0xFFFFFC00) ;- (PMC) System Clock Enable Register
AT91C_PMC_SR              EQU (0xFFFFFC68) ;- (PMC) Status Register
;- ========== Register definition for RSTC peripheral ========== 
AT91C_RSTC_RCR            EQU (0xFFFFFD00) ;- (RSTC) Reset Control Register
AT91C_RSTC_RMR            EQU (0xFFFFFD08) ;- (RSTC) Reset Mode Register
AT91C_RSTC_RSR            EQU (0xFFFFFD04) ;- (RSTC) Reset Status Register
;- ========== Register definition for SHDWC peripheral ========== 
AT91C_SHDWC_SHSR          EQU (0xFFFFFD18) ;- (SHDWC) Shut Down Status Register
AT91C_SHDWC_SHMR          EQU (0xFFFFFD14) ;- (SHDWC) Shut Down Mode Register
AT91C_SHDWC_SHCR          EQU (0xFFFFFD10) ;- (SHDWC) Shut Down Control Register
;- ========== Register definition for RTTC peripheral ========== 
AT91C_RTTC_RTSR           EQU (0xFFFFFD2C) ;- (RTTC) Real-time Status Register
AT91C_RTTC_RTMR           EQU (0xFFFFFD20) ;- (RTTC) Real-time Mode Register
AT91C_RTTC_RTVR           EQU (0xFFFFFD28) ;- (RTTC) Real-time Value Register
AT91C_RTTC_RTAR           EQU (0xFFFFFD24) ;- (RTTC) Real-time Alarm Register
;- ========== Register definition for PITC peripheral ========== 
AT91C_PITC_PIVR           EQU (0xFFFFFD38) ;- (PITC) Period Interval Value Register
AT91C_PITC_PISR           EQU (0xFFFFFD34) ;- (PITC) Period Interval Status Register
AT91C_PITC_PIIR           EQU (0xFFFFFD3C) ;- (PITC) Period Interval Image Register
AT91C_PITC_PIMR           EQU (0xFFFFFD30) ;- (PITC) Period Interval Mode Register
;- ========== Register definition for WDTC peripheral ========== 
AT91C_WDTC_WDCR           EQU (0xFFFFFD40) ;- (WDTC) Watchdog Control Register
AT91C_WDTC_WDSR           EQU (0xFFFFFD48) ;- (WDTC) Watchdog Status Register
AT91C_WDTC_WDMR           EQU (0xFFFFFD44) ;- (WDTC) Watchdog Mode Register
;- ========== Register definition for TC0 peripheral ========== 
AT91C_TC0_SR              EQU (0xFFFA0020) ;- (TC0) Status Register
AT91C_TC0_RC              EQU (0xFFFA001C) ;- (TC0) Register C
AT91C_TC0_RB              EQU (0xFFFA0018) ;- (TC0) Register B
AT91C_TC0_CCR             EQU (0xFFFA0000) ;- (TC0) Channel Control Register
AT91C_TC0_CMR             EQU (0xFFFA0004) ;- (TC0) Channel Mode Register (Capture Mode / Waveform Mode)
AT91C_TC0_IER             EQU (0xFFFA0024) ;- (TC0) Interrupt Enable Register
AT91C_TC0_RA              EQU (0xFFFA0014) ;- (TC0) Register A
AT91C_TC0_IDR             EQU (0xFFFA0028) ;- (TC0) Interrupt Disable Register
AT91C_TC0_CV              EQU (0xFFFA0010) ;- (TC0) Counter Value
AT91C_TC0_IMR             EQU (0xFFFA002C) ;- (TC0) Interrupt Mask Register
;- ========== Register definition for TC1 peripheral ========== 
AT91C_TC1_RB              EQU (0xFFFA0058) ;- (TC1) Register B
AT91C_TC1_CCR             EQU (0xFFFA0040) ;- (TC1) Channel Control Register
AT91C_TC1_IER             EQU (0xFFFA0064) ;- (TC1) Interrupt Enable Register
AT91C_TC1_IDR             EQU (0xFFFA0068) ;- (TC1) Interrupt Disable Register
AT91C_TC1_SR              EQU (0xFFFA0060) ;- (TC1) Status Register
AT91C_TC1_CMR             EQU (0xFFFA0044) ;- (TC1) Channel Mode Register (Capture Mode / Waveform Mode)
AT91C_TC1_RA              EQU (0xFFFA0054) ;- (TC1) Register A
AT91C_TC1_RC              EQU (0xFFFA005C) ;- (TC1) Register C
AT91C_TC1_IMR             EQU (0xFFFA006C) ;- (TC1) Interrupt Mask Register
AT91C_TC1_CV              EQU (0xFFFA0050) ;- (TC1) Counter Value
;- ========== Register definition for TC2 peripheral ========== 
AT91C_TC2_CMR             EQU (0xFFFA0084) ;- (TC2) Channel Mode Register (Capture Mode / Waveform Mode)
AT91C_TC2_CCR             EQU (0xFFFA0080) ;- (TC2) Channel Control Register
AT91C_TC2_CV              EQU (0xFFFA0090) ;- (TC2) Counter Value
AT91C_TC2_RA              EQU (0xFFFA0094) ;- (TC2) Register A
AT91C_TC2_RB              EQU (0xFFFA0098) ;- (TC2) Register B
AT91C_TC2_IDR             EQU (0xFFFA00A8) ;- (TC2) Interrupt Disable Register
AT91C_TC2_IMR             EQU (0xFFFA00AC) ;- (TC2) Interrupt Mask Register
AT91C_TC2_RC              EQU (0xFFFA009C) ;- (TC2) Register C
AT91C_TC2_IER             EQU (0xFFFA00A4) ;- (TC2) Interrupt Enable Register
AT91C_TC2_SR              EQU (0xFFFA00A0) ;- (TC2) Status Register
;- ========== Register definition for TCB0 peripheral ========== 
AT91C_TCB0_BMR            EQU (0xFFFA00C4) ;- (TCB0) TC Block Mode Register
AT91C_TCB0_BCR            EQU (0xFFFA00C0) ;- (TCB0) TC Block Control Register
;- ========== Register definition for UDP peripheral ========== 
AT91C_UDP_GLBSTATE        EQU (0xFFFA4004) ;- (UDP) Global State Register
AT91C_UDP_FDR             EQU (0xFFFA4050) ;- (UDP) Endpoint FIFO Data Register
AT91C_UDP_RSTEP           EQU (0xFFFA4028) ;- (UDP) Reset Endpoint Register
AT91C_UDP_FADDR           EQU (0xFFFA4008) ;- (UDP) Function Address Register
AT91C_UDP_NUM             EQU (0xFFFA4000) ;- (UDP) Frame Number Register
AT91C_UDP_IDR             EQU (0xFFFA4014) ;- (UDP) Interrupt Disable Register
AT91C_UDP_IMR             EQU (0xFFFA4018) ;- (UDP) Interrupt Mask Register
AT91C_UDP_CSR             EQU (0xFFFA4030) ;- (UDP) Endpoint Control and Status Register
AT91C_UDP_IER             EQU (0xFFFA4010) ;- (UDP) Interrupt Enable Register
AT91C_UDP_ICR             EQU (0xFFFA4020) ;- (UDP) Interrupt Clear Register
AT91C_UDP_TXVC            EQU (0xFFFA4074) ;- (UDP) Transceiver Control Register
AT91C_UDP_ISR             EQU (0xFFFA401C) ;- (UDP) Interrupt Status Register
;- ========== Register definition for PDC_MCI peripheral ========== 
AT91C_MCI_RNCR            EQU (0xFFFA8114) ;- (PDC_MCI) Receive Next Counter Register
AT91C_MCI_TCR             EQU (0xFFFA810C) ;- (PDC_MCI) Transmit Counter Register
AT91C_MCI_RCR             EQU (0xFFFA8104) ;- (PDC_MCI) Receive Counter Register
AT91C_MCI_TNPR            EQU (0xFFFA8118) ;- (PDC_MCI) Transmit Next Pointer Register
AT91C_MCI_RNPR            EQU (0xFFFA8110) ;- (PDC_MCI) Receive Next Pointer Register
AT91C_MCI_RPR             EQU (0xFFFA8100) ;- (PDC_MCI) Receive Pointer Register
AT91C_MCI_TNCR            EQU (0xFFFA811C) ;- (PDC_MCI) Transmit Next Counter Register
AT91C_MCI_TPR             EQU (0xFFFA8108) ;- (PDC_MCI) Transmit Pointer Register
AT91C_MCI_PTSR            EQU (0xFFFA8124) ;- (PDC_MCI) PDC Transfer Status Register
AT91C_MCI_PTCR            EQU (0xFFFA8120) ;- (PDC_MCI) PDC Transfer Control Register
;- ========== Register definition for MCI peripheral ========== 
AT91C_MCI_RDR             EQU (0xFFFA8030) ;- (MCI) MCI Receive Data Register
AT91C_MCI_CMDR            EQU (0xFFFA8014) ;- (MCI) MCI Command Register
AT91C_MCI_IDR             EQU (0xFFFA8048) ;- (MCI) MCI Interrupt Disable Register
AT91C_MCI_DTOR            EQU (0xFFFA8008) ;- (MCI) MCI Data Timeout Register
AT91C_MCI_TDR             EQU (0xFFFA8034) ;- (MCI) MCI Transmit Data Register
AT91C_MCI_IER             EQU (0xFFFA8044) ;- (MCI) MCI Interrupt Enable Register
AT91C_MCI_MR              EQU (0xFFFA8004) ;- (MCI) MCI Mode Register
AT91C_MCI_IMR             EQU (0xFFFA804C) ;- (MCI) MCI Interrupt Mask Register
AT91C_MCI_CR              EQU (0xFFFA8000) ;- (MCI) MCI Control Register
AT91C_MCI_ARGR            EQU (0xFFFA8010) ;- (MCI) MCI Argument Register
AT91C_MCI_SDCR            EQU (0xFFFA800C) ;- (MCI) MCI SD Card Register
AT91C_MCI_SR              EQU (0xFFFA8040) ;- (MCI) MCI Status Register
AT91C_MCI_RSPR            EQU (0xFFFA8020) ;- (MCI) MCI Response Register
;- ========== Register definition for TWI peripheral ========== 
AT91C_TWI_THR             EQU (0xFFFAC034) ;- (TWI) Transmit Holding Register
AT91C_TWI_IDR             EQU (0xFFFAC028) ;- (TWI) Interrupt Disable Register
AT91C_TWI_CWGR            EQU (0xFFFAC010) ;- (TWI) Clock Waveform Generator Register
AT91C_TWI_IADR            EQU (0xFFFAC00C) ;- (TWI) Internal Address Register
AT91C_TWI_RHR             EQU (0xFFFAC030) ;- (TWI) Receive Holding Register
AT91C_TWI_IER             EQU (0xFFFAC024) ;- (TWI) Interrupt Enable Register
AT91C_TWI_MMR             EQU (0xFFFAC004) ;- (TWI) Master Mode Register
AT91C_TWI_SR              EQU (0xFFFAC020) ;- (TWI) Status Register
AT91C_TWI_CR              EQU (0xFFFAC000) ;- (TWI) Control Register
AT91C_TWI_IMR             EQU (0xFFFAC02C) ;- (TWI) Interrupt Mask Register
;- ========== Register definition for PDC_US0 peripheral ========== 
AT91C_US0_TCR             EQU (0xFFFB010C) ;- (PDC_US0) Transmit Counter Register
AT91C_US0_PTCR            EQU (0xFFFB0120) ;- (PDC_US0) PDC Transfer Control Register
AT91C_US0_RNCR            EQU (0xFFFB0114) ;- (PDC_US0) Receive Next Counter Register
AT91C_US0_PTSR            EQU (0xFFFB0124) ;- (PDC_US0) PDC Transfer Status Register
AT91C_US0_TNCR            EQU (0xFFFB011C) ;- (PDC_US0) Transmit Next Counter Register
AT91C_US0_RNPR            EQU (0xFFFB0110) ;- (PDC_US0) Receive Next Pointer Register
AT91C_US0_RCR             EQU (0xFFFB0104) ;- (PDC_US0) Receive Counter Register
AT91C_US0_TPR             EQU (0xFFFB0108) ;- (PDC_US0) Transmit Pointer Register
AT91C_US0_TNPR            EQU (0xFFFB0118) ;- (PDC_US0) Transmit Next Pointer Register
AT91C_US0_RPR             EQU (0xFFFB0100) ;- (PDC_US0) Receive Pointer Register
;- ========== Register definition for US0 peripheral ========== 
AT91C_US0_RHR             EQU (0xFFFB0018) ;- (US0) Receiver Holding Register
AT91C_US0_NER             EQU (0xFFFB0044) ;- (US0) Nb Errors Register
AT91C_US0_IER             EQU (0xFFFB0008) ;- (US0) Interrupt Enable Register
AT91C_US0_CR              EQU (0xFFFB0000) ;- (US0) Control Register
AT91C_US0_THR             EQU (0xFFFB001C) ;- (US0) Transmitter Holding Register
AT91C_US0_CSR             EQU (0xFFFB0014) ;- (US0) Channel Status Register
AT91C_US0_BRGR            EQU (0xFFFB0020) ;- (US0) Baud Rate Generator Register
AT91C_US0_RTOR            EQU (0xFFFB0024) ;- (US0) Receiver Time-out Register
AT91C_US0_TTGR            EQU (0xFFFB0028) ;- (US0) Transmitter Time-guard Register
AT91C_US0_IDR             EQU (0xFFFB000C) ;- (US0) Interrupt Disable Register
AT91C_US0_MR              EQU (0xFFFB0004) ;- (US0) Mode Register
AT91C_US0_IF              EQU (0xFFFB004C) ;- (US0) IRDA_FILTER Register
AT91C_US0_FIDI            EQU (0xFFFB0040) ;- (US0) FI_DI_Ratio Register
AT91C_US0_IMR             EQU (0xFFFB0010) ;- (US0) Interrupt Mask Register
;- ========== Register definition for PDC_US1 peripheral ========== 
AT91C_US1_PTCR            EQU (0xFFFB4120) ;- (PDC_US1) PDC Transfer Control Register
AT91C_US1_RCR             EQU (0xFFFB4104) ;- (PDC_US1) Receive Counter Register
AT91C_US1_RPR             EQU (0xFFFB4100) ;- (PDC_US1) Receive Pointer Register
AT91C_US1_PTSR            EQU (0xFFFB4124) ;- (PDC_US1) PDC Transfer Status Register
AT91C_US1_TPR             EQU (0xFFFB4108) ;- (PDC_US1) Transmit Pointer Register
AT91C_US1_TCR             EQU (0xFFFB410C) ;- (PDC_US1) Transmit Counter Register
AT91C_US1_RNPR            EQU (0xFFFB4110) ;- (PDC_US1) Receive Next Pointer Register
AT91C_US1_TNCR            EQU (0xFFFB411C) ;- (PDC_US1) Transmit Next Counter Register
AT91C_US1_RNCR            EQU (0xFFFB4114) ;- (PDC_US1) Receive Next Counter Register
AT91C_US1_TNPR            EQU (0xFFFB4118) ;- (PDC_US1) Transmit Next Pointer Register
;- ========== Register definition for US1 peripheral ========== 
AT91C_US1_THR             EQU (0xFFFB401C) ;- (US1) Transmitter Holding Register
AT91C_US1_TTGR            EQU (0xFFFB4028) ;- (US1) Transmitter Time-guard Register
AT91C_US1_BRGR            EQU (0xFFFB4020) ;- (US1) Baud Rate Generator Register
AT91C_US1_IDR             EQU (0xFFFB400C) ;- (US1) Interrupt Disable Register
AT91C_US1_MR              EQU (0xFFFB4004) ;- (US1) Mode Register
AT91C_US1_RTOR            EQU (0xFFFB4024) ;- (US1) Receiver Time-out Register
AT91C_US1_CR              EQU (0xFFFB4000) ;- (US1) Control Register
AT91C_US1_IMR             EQU (0xFFFB4010) ;- (US1) Interrupt Mask Register
AT91C_US1_FIDI            EQU (0xFFFB4040) ;- (US1) FI_DI_Ratio Register
AT91C_US1_RHR             EQU (0xFFFB4018) ;- (US1) Receiver Holding Register
AT91C_US1_IER             EQU (0xFFFB4008) ;- (US1) Interrupt Enable Register
AT91C_US1_CSR             EQU (0xFFFB4014) ;- (US1) Channel Status Register
AT91C_US1_IF              EQU (0xFFFB404C) ;- (US1) IRDA_FILTER Register
AT91C_US1_NER             EQU (0xFFFB4044) ;- (US1) Nb Errors Register
;- ========== Register definition for PDC_US2 peripheral ========== 
AT91C_US2_TNCR            EQU (0xFFFB811C) ;- (PDC_US2) Transmit Next Counter Register
AT91C_US2_RNCR            EQU (0xFFFB8114) ;- (PDC_US2) Receive Next Counter Register
AT91C_US2_TNPR            EQU (0xFFFB8118) ;- (PDC_US2) Transmit Next Pointer Register
AT91C_US2_PTCR            EQU (0xFFFB8120) ;- (PDC_US2) PDC Transfer Control Register
AT91C_US2_TCR             EQU (0xFFFB810C) ;- (PDC_US2) Transmit Counter Register
AT91C_US2_RPR             EQU (0xFFFB8100) ;- (PDC_US2) Receive Pointer Register
AT91C_US2_TPR             EQU (0xFFFB8108) ;- (PDC_US2) Transmit Pointer Register
AT91C_US2_RCR             EQU (0xFFFB8104) ;- (PDC_US2) Receive Counter Register
AT91C_US2_PTSR            EQU (0xFFFB8124) ;- (PDC_US2) PDC Transfer Status Register
AT91C_US2_RNPR            EQU (0xFFFB8110) ;- (PDC_US2) Receive Next Pointer Register
;- ========== Register definition for US2 peripheral ========== 
AT91C_US2_RTOR            EQU (0xFFFB8024) ;- (US2) Receiver Time-out Register
AT91C_US2_CSR             EQU (0xFFFB8014) ;- (US2) Channel Status Register
AT91C_US2_CR              EQU (0xFFFB8000) ;- (US2) Control Register
AT91C_US2_BRGR            EQU (0xFFFB8020) ;- (US2) Baud Rate Generator Register
AT91C_US2_NER             EQU (0xFFFB8044) ;- (US2) Nb Errors Register
AT91C_US2_FIDI            EQU (0xFFFB8040) ;- (US2) FI_DI_Ratio Register
AT91C_US2_TTGR            EQU (0xFFFB8028) ;- (US2) Transmitter Time-guard Register
AT91C_US2_RHR             EQU (0xFFFB8018) ;- (US2) Receiver Holding Register
AT91C_US2_IDR             EQU (0xFFFB800C) ;- (US2) Interrupt Disable Register
AT91C_US2_THR             EQU (0xFFFB801C) ;- (US2) Transmitter Holding Register
AT91C_US2_MR              EQU (0xFFFB8004) ;- (US2) Mode Register
AT91C_US2_IMR             EQU (0xFFFB8010) ;- (US2) Interrupt Mask Register
AT91C_US2_IF              EQU (0xFFFB804C) ;- (US2) IRDA_FILTER Register
AT91C_US2_IER             EQU (0xFFFB8008) ;- (US2) Interrupt Enable Register
;- ========== Register definition for PDC_SSC0 peripheral ========== 
AT91C_SSC0_TNPR           EQU (0xFFFBC118) ;- (PDC_SSC0) Transmit Next Pointer Register
AT91C_SSC0_TCR            EQU (0xFFFBC10C) ;- (PDC_SSC0) Transmit Counter Register
AT91C_SSC0_RNCR           EQU (0xFFFBC114) ;- (PDC_SSC0) Receive Next Counter Register
AT91C_SSC0_RPR            EQU (0xFFFBC100) ;- (PDC_SSC0) Receive Pointer Register
AT91C_SSC0_TPR            EQU (0xFFFBC108) ;- (PDC_SSC0) Transmit Pointer Register
AT91C_SSC0_RCR            EQU (0xFFFBC104) ;- (PDC_SSC0) Receive Counter Register
AT91C_SSC0_RNPR           EQU (0xFFFBC110) ;- (PDC_SSC0) Receive Next Pointer Register
AT91C_SSC0_PTCR           EQU (0xFFFBC120) ;- (PDC_SSC0) PDC Transfer Control Register
AT91C_SSC0_TNCR           EQU (0xFFFBC11C) ;- (PDC_SSC0) Transmit Next Counter Register
AT91C_SSC0_PTSR           EQU (0xFFFBC124) ;- (PDC_SSC0) PDC Transfer Status Register
;- ========== Register definition for SSC0 peripheral ========== 
AT91C_SSC0_IMR            EQU (0xFFFBC04C) ;- (SSC0) Interrupt Mask Register
AT91C_SSC0_RFMR           EQU (0xFFFBC014) ;- (SSC0) Receive Frame Mode Register
AT91C_SSC0_CR             EQU (0xFFFBC000) ;- (SSC0) Control Register
AT91C_SSC0_TFMR           EQU (0xFFFBC01C) ;- (SSC0) Transmit Frame Mode Register
AT91C_SSC0_CMR            EQU (0xFFFBC004) ;- (SSC0) Clock Mode Register
AT91C_SSC0_IER            EQU (0xFFFBC044) ;- (SSC0) Interrupt Enable Register
AT91C_SSC0_RHR            EQU (0xFFFBC020) ;- (SSC0) Receive Holding Register
AT91C_SSC0_RCMR           EQU (0xFFFBC010) ;- (SSC0) Receive Clock ModeRegister
AT91C_SSC0_SR             EQU (0xFFFBC040) ;- (SSC0) Status Register
AT91C_SSC0_RSHR           EQU (0xFFFBC030) ;- (SSC0) Receive Sync Holding Register
AT91C_SSC0_THR            EQU (0xFFFBC024) ;- (SSC0) Transmit Holding Register
AT91C_SSC0_TCMR           EQU (0xFFFBC018) ;- (SSC0) Transmit Clock Mode Register
AT91C_SSC0_IDR            EQU (0xFFFBC048) ;- (SSC0) Interrupt Disable Register
AT91C_SSC0_TSHR           EQU (0xFFFBC034) ;- (SSC0) Transmit Sync Holding Register
;- ========== Register definition for PDC_SSC1 peripheral ========== 
AT91C_SSC1_TNPR           EQU (0xFFFC0118) ;- (PDC_SSC1) Transmit Next Pointer Register
AT91C_SSC1_RNPR           EQU (0xFFFC0110) ;- (PDC_SSC1) Receive Next Pointer Register
AT91C_SSC1_TCR            EQU (0xFFFC010C) ;- (PDC_SSC1) Transmit Counter Register
AT91C_SSC1_PTCR           EQU (0xFFFC0120) ;- (PDC_SSC1) PDC Transfer Control Register
AT91C_SSC1_PTSR           EQU (0xFFFC0124) ;- (PDC_SSC1) PDC Transfer Status Register
AT91C_SSC1_TNCR           EQU (0xFFFC011C) ;- (PDC_SSC1) Transmit Next Counter Register
AT91C_SSC1_TPR            EQU (0xFFFC0108) ;- (PDC_SSC1) Transmit Pointer Register
AT91C_SSC1_RCR            EQU (0xFFFC0104) ;- (PDC_SSC1) Receive Counter Register
AT91C_SSC1_RPR            EQU (0xFFFC0100) ;- (PDC_SSC1) Receive Pointer Register
AT91C_SSC1_RNCR           EQU (0xFFFC0114) ;- (PDC_SSC1) Receive Next Counter Register
;- ========== Register definition for SSC1 peripheral ========== 
AT91C_SSC1_IDR            EQU (0xFFFC0048) ;- (SSC1) Interrupt Disable Register
AT91C_SSC1_RHR            EQU (0xFFFC0020) ;- (SSC1) Receive Holding Register
AT91C_SSC1_IER            EQU (0xFFFC0044) ;- (SSC1) Interrupt Enable Register
AT91C_SSC1_CR             EQU (0xFFFC0000) ;- (SSC1) Control Register
AT91C_SSC1_RCMR           EQU (0xFFFC0010) ;- (SSC1) Receive Clock ModeRegister
AT91C_SSC1_SR             EQU (0xFFFC0040) ;- (SSC1) Status Register
AT91C_SSC1_TSHR           EQU (0xFFFC0034) ;- (SSC1) Transmit Sync Holding Register
AT91C_SSC1_CMR            EQU (0xFFFC0004) ;- (SSC1) Clock Mode Register
AT91C_SSC1_RSHR           EQU (0xFFFC0030) ;- (SSC1) Receive Sync Holding Register
AT91C_SSC1_THR            EQU (0xFFFC0024) ;- (SSC1) Transmit Holding Register
AT91C_SSC1_RFMR           EQU (0xFFFC0014) ;- (SSC1) Receive Frame Mode Register
AT91C_SSC1_TCMR           EQU (0xFFFC0018) ;- (SSC1) Transmit Clock Mode Register
AT91C_SSC1_TFMR           EQU (0xFFFC001C) ;- (SSC1) Transmit Frame Mode Register
AT91C_SSC1_IMR            EQU (0xFFFC004C) ;- (SSC1) Interrupt Mask Register
;- ========== Register definition for PDC_SSC2 peripheral ========== 
AT91C_SSC2_RNCR           EQU (0xFFFC4114) ;- (PDC_SSC2) Receive Next Counter Register
AT91C_SSC2_PTCR           EQU (0xFFFC4120) ;- (PDC_SSC2) PDC Transfer Control Register
AT91C_SSC2_TCR            EQU (0xFFFC410C) ;- (PDC_SSC2) Transmit Counter Register
AT91C_SSC2_PTSR           EQU (0xFFFC4124) ;- (PDC_SSC2) PDC Transfer Status Register
AT91C_SSC2_TNPR           EQU (0xFFFC4118) ;- (PDC_SSC2) Transmit Next Pointer Register
AT91C_SSC2_RCR            EQU (0xFFFC4104) ;- (PDC_SSC2) Receive Counter Register
AT91C_SSC2_RNPR           EQU (0xFFFC4110) ;- (PDC_SSC2) Receive Next Pointer Register
AT91C_SSC2_RPR            EQU (0xFFFC4100) ;- (PDC_SSC2) Receive Pointer Register
AT91C_SSC2_TNCR           EQU (0xFFFC411C) ;- (PDC_SSC2) Transmit Next Counter Register
AT91C_SSC2_TPR            EQU (0xFFFC4108) ;- (PDC_SSC2) Transmit Pointer Register
;- ========== Register definition for SSC2 peripheral ========== 
AT91C_SSC2_IMR            EQU (0xFFFC404C) ;- (SSC2) Interrupt Mask Register
AT91C_SSC2_IER            EQU (0xFFFC4044) ;- (SSC2) Interrupt Enable Register
AT91C_SSC2_THR            EQU (0xFFFC4024) ;- (SSC2) Transmit Holding Register
AT91C_SSC2_RFMR           EQU (0xFFFC4014) ;- (SSC2) Receive Frame Mode Register
AT91C_SSC2_TFMR           EQU (0xFFFC401C) ;- (SSC2) Transmit Frame Mode Register
AT91C_SSC2_IDR            EQU (0xFFFC4048) ;- (SSC2) Interrupt Disable Register
AT91C_SSC2_RSHR           EQU (0xFFFC4030) ;- (SSC2) Receive Sync Holding Register
AT91C_SSC2_TCMR           EQU (0xFFFC4018) ;- (SSC2) Transmit Clock Mode Register
AT91C_SSC2_RHR            EQU (0xFFFC4020) ;- (SSC2) Receive Holding Register
AT91C_SSC2_RCMR           EQU (0xFFFC4010) ;- (SSC2) Receive Clock ModeRegister
AT91C_SSC2_CR             EQU (0xFFFC4000) ;- (SSC2) Control Register
AT91C_SSC2_SR             EQU (0xFFFC4040) ;- (SSC2) Status Register
AT91C_SSC2_CMR            EQU (0xFFFC4004) ;- (SSC2) Clock Mode Register
AT91C_SSC2_TSHR           EQU (0xFFFC4034) ;- (SSC2) Transmit Sync Holding Register
;- ========== Register definition for PDC_SPI0 peripheral ========== 
AT91C_SPI0_PTCR           EQU (0xFFFC8120) ;- (PDC_SPI0) PDC Transfer Control Register
AT91C_SPI0_TCR            EQU (0xFFFC810C) ;- (PDC_SPI0) Transmit Counter Register
AT91C_SPI0_RPR            EQU (0xFFFC8100) ;- (PDC_SPI0) Receive Pointer Register
AT91C_SPI0_TPR            EQU (0xFFFC8108) ;- (PDC_SPI0) Transmit Pointer Register
AT91C_SPI0_PTSR           EQU (0xFFFC8124) ;- (PDC_SPI0) PDC Transfer Status Register
AT91C_SPI0_RNCR           EQU (0xFFFC8114) ;- (PDC_SPI0) Receive Next Counter Register
AT91C_SPI0_TNPR           EQU (0xFFFC8118) ;- (PDC_SPI0) Transmit Next Pointer Register
AT91C_SPI0_RCR            EQU (0xFFFC8104) ;- (PDC_SPI0) Receive Counter Register
AT91C_SPI0_RNPR           EQU (0xFFFC8110) ;- (PDC_SPI0) Receive Next Pointer Register
AT91C_SPI0_TNCR           EQU (0xFFFC811C) ;- (PDC_SPI0) Transmit Next Counter Register
;- ========== Register definition for SPI0 peripheral ========== 
AT91C_SPI0_IDR            EQU (0xFFFC8018) ;- (SPI0) Interrupt Disable Register
AT91C_SPI0_TDR            EQU (0xFFFC800C) ;- (SPI0) Transmit Data Register
AT91C_SPI0_SR             EQU (0xFFFC8010) ;- (SPI0) Status Register
AT91C_SPI0_CR             EQU (0xFFFC8000) ;- (SPI0) Control Register
AT91C_SPI0_CSR            EQU (0xFFFC8030) ;- (SPI0) Chip Select Register
AT91C_SPI0_RDR            EQU (0xFFFC8008) ;- (SPI0) Receive Data Register
AT91C_SPI0_MR             EQU (0xFFFC8004) ;- (SPI0) Mode Register
AT91C_SPI0_IER            EQU (0xFFFC8014) ;- (SPI0) Interrupt Enable Register
AT91C_SPI0_IMR            EQU (0xFFFC801C) ;- (SPI0) Interrupt Mask Register
;- ========== Register definition for PDC_SPI1 peripheral ========== 
AT91C_SPI1_PTCR           EQU (0xFFFCC120) ;- (PDC_SPI1) PDC Transfer Control Register
AT91C_SPI1_RNPR           EQU (0xFFFCC110) ;- (PDC_SPI1) Receive Next Pointer Register
AT91C_SPI1_RCR            EQU (0xFFFCC104) ;- (PDC_SPI1) Receive Counter Register
AT91C_SPI1_TPR            EQU (0xFFFCC108) ;- (PDC_SPI1) Transmit Pointer Register
AT91C_SPI1_PTSR           EQU (0xFFFCC124) ;- (PDC_SPI1) PDC Transfer Status Register
AT91C_SPI1_TNCR           EQU (0xFFFCC11C) ;- (PDC_SPI1) Transmit Next Counter Register
AT91C_SPI1_RPR            EQU (0xFFFCC100) ;- (PDC_SPI1) Receive Pointer Register
AT91C_SPI1_TCR            EQU (0xFFFCC10C) ;- (PDC_SPI1) Transmit Counter Register
AT91C_SPI1_RNCR           EQU (0xFFFCC114) ;- (PDC_SPI1) Receive Next Counter Register
AT91C_SPI1_TNPR           EQU (0xFFFCC118) ;- (PDC_SPI1) Transmit Next Pointer Register
;- ========== Register definition for SPI1 peripheral ========== 
AT91C_SPI1_IER            EQU (0xFFFCC014) ;- (SPI1) Interrupt Enable Register
AT91C_SPI1_RDR            EQU (0xFFFCC008) ;- (SPI1) Receive Data Register
AT91C_SPI1_SR             EQU (0xFFFCC010) ;- (SPI1) Status Register
AT91C_SPI1_IMR            EQU (0xFFFCC01C) ;- (SPI1) Interrupt Mask Register
AT91C_SPI1_TDR            EQU (0xFFFCC00C) ;- (SPI1) Transmit Data Register
AT91C_SPI1_IDR            EQU (0xFFFCC018) ;- (SPI1) Interrupt Disable Register
AT91C_SPI1_CSR            EQU (0xFFFCC030) ;- (SPI1) Chip Select Register
AT91C_SPI1_CR             EQU (0xFFFCC000) ;- (SPI1) Control Register
AT91C_SPI1_MR             EQU (0xFFFCC004) ;- (SPI1) Mode Register
;- ========== Register definition for UHP peripheral ========== 
AT91C_UHP_HcInterruptStatus EQU (0x0050000C) ;- (UHP) Interrupt Status Register
AT91C_UHP_HcCommandStatus EQU (0x00500008) ;- (UHP) Command & status Register
AT91C_UHP_HcRhStatus      EQU (0x00500050) ;- (UHP) Root Hub Status register
AT91C_UHP_HcInterruptDisable EQU (0x00500014) ;- (UHP) Interrupt Disable Register
AT91C_UHP_HcPeriodicStart EQU (0x00500040) ;- (UHP) Periodic Start
AT91C_UHP_HcControlCurrentED EQU (0x00500024) ;- (UHP) Endpoint Control and Status Register
AT91C_UHP_HcPeriodCurrentED EQU (0x0050001C) ;- (UHP) Current Isochronous or Interrupt Endpoint Descriptor
AT91C_UHP_HcBulkHeadED    EQU (0x00500028) ;- (UHP) First endpoint register of the Bulk list
AT91C_UHP_HcRevision      EQU (0x00500000) ;- (UHP) Revision
AT91C_UHP_HcBulkCurrentED EQU (0x0050002C) ;- (UHP) Current endpoint of the Bulk list
AT91C_UHP_HcRhDescriptorB EQU (0x0050004C) ;- (UHP) Root Hub characteristics B
AT91C_UHP_HcControlHeadED EQU (0x00500020) ;- (UHP) First Endpoint Descriptor of the Control list
AT91C_UHP_HcFmRemaining   EQU (0x00500038) ;- (UHP) Bit time remaining in the current Frame
AT91C_UHP_HcHCCA          EQU (0x00500018) ;- (UHP) Pointer to the Host Controller Communication Area
AT91C_UHP_HcLSThreshold   EQU (0x00500044) ;- (UHP) LS Threshold
AT91C_UHP_HcRhPortStatus  EQU (0x00500054) ;- (UHP) Root Hub Port Status Register
AT91C_UHP_HcInterruptEnable EQU (0x00500010) ;- (UHP) Interrupt Enable Register
AT91C_UHP_HcFmNumber      EQU (0x0050003C) ;- (UHP) Frame number
AT91C_UHP_HcFmInterval    EQU (0x00500034) ;- (UHP) Bit time between 2 consecutive SOFs
AT91C_UHP_HcControl       EQU (0x00500004) ;- (UHP) Operating modes for the Host Controller
AT91C_UHP_HcBulkDoneHead  EQU (0x00500030) ;- (UHP) Last completed transfer descriptor
AT91C_UHP_HcRhDescriptorA EQU (0x00500048) ;- (UHP) Root Hub characteristics A
;- ========== Register definition for LCDC peripheral ========== 
AT91C_LCDC_DP4_7          EQU (0x00600820) ;- (LCDC) Dithering Pattern DP4_7 Register
AT91C_LCDC_PWRCON         EQU (0x0060083C) ;- (LCDC) Power Control Register
AT91C_LCDC_LUT_ENTRY      EQU (0x00600C00) ;- (LCDC) LUT Entries Register
AT91C_LCDC_TIM1           EQU (0x00600808) ;- (LCDC) LCD Timing Config 1 Register
AT91C_LCDC_CTRSTVAL       EQU (0x00600844) ;- (LCDC) Contrast Value Register
AT91C_LCDC_ISR            EQU (0x00600854) ;- (LCDC) Interrupt Enable Register
AT91C_LCDC_IDR            EQU (0x0060084C) ;- (LCDC) Interrupt Disable Register
AT91C_LCDC_DP2_3          EQU (0x00600828) ;- (LCDC) Dithering Pattern DP2_3 Register
AT91C_LCDC_DP1_2          EQU (0x0060081C) ;- (LCDC) Dithering Pattern DP1_2 Register
AT91C_LCDC_FRMP1          EQU (0x00600008) ;- (LCDC) DMA Frame Pointer Register 1
AT91C_LCDC_LCDCON2        EQU (0x00600804) ;- (LCDC) LCD Control 2 Register
AT91C_LCDC_DP4_5          EQU (0x00600834) ;- (LCDC) Dithering Pattern DP4_5 Register
AT91C_LCDC_IRR            EQU (0x00600864) ;- (LCDC) Interrupts Raw Status Register
AT91C_LCDC_IER            EQU (0x00600848) ;- (LCDC) Interrupt Enable Register
AT91C_LCDC_MVAL           EQU (0x00600818) ;- (LCDC) LCD Mode Toggle Rate Value Register
AT91C_LCDC_BA2            EQU (0x00600004) ;- (LCDC) DMA Base Address Register 2
AT91C_LCDC_DMA2DCFG       EQU (0x00600020) ;- (LCDC) DMA 2D addressing configuration
AT91C_LCDC_ICR            EQU (0x00600858) ;- (LCDC) Interrupt Clear Register
AT91C_LCDC_FRMA2          EQU (0x00600014) ;- (LCDC) DMA Frame Address Register 2
AT91C_LCDC_LCDFRCFG       EQU (0x00600810) ;- (LCDC) LCD Frame Config Register
AT91C_LCDC_FRMP2          EQU (0x0060000C) ;- (LCDC) DMA Frame Pointer Register 2
AT91C_LCDC_LCDCON1        EQU (0x00600800) ;- (LCDC) LCD Control 1 Register
AT91C_LCDC_FRMCFG         EQU (0x00600018) ;- (LCDC) DMA Frame Configuration Register
AT91C_LCDC_DP5_7          EQU (0x0060082C) ;- (LCDC) Dithering Pattern DP5_7 Register
AT91C_LCDC_GPR            EQU (0x0060085C) ;- (LCDC) General Purpose Register
AT91C_LCDC_FIFO           EQU (0x00600814) ;- (LCDC) LCD FIFO Register
AT91C_LCDC_CTRSTCON       EQU (0x00600840) ;- (LCDC) Contrast Control Register
AT91C_LCDC_DP3_4          EQU (0x00600830) ;- (LCDC) Dithering Pattern DP3_4 Register
AT91C_LCDC_FRMA1          EQU (0x00600010) ;- (LCDC) DMA Frame Address Register 1
AT91C_LCDC_TIM2           EQU (0x0060080C) ;- (LCDC) LCD Timing Config 2 Register
AT91C_LCDC_BA1            EQU (0x00600000) ;- (LCDC) DMA Base Address Register 1
AT91C_LCDC_DP3_5          EQU (0x00600824) ;- (LCDC) Dithering Pattern DP3_5 Register
AT91C_LCDC_DP6_7          EQU (0x00600838) ;- (LCDC) Dithering Pattern DP6_7 Register
AT91C_LCDC_DMACON         EQU (0x0060001C) ;- (LCDC) DMA Control Register
AT91C_LCDC_IMR            EQU (0x00600850) ;- (LCDC) Interrupt Mask Register
AT91C_LCDC_ITR            EQU (0x00600860) ;- (LCDC) Interrupts Test Register
;- ========== Register definition for LCDC_16B_TFT peripheral ========== 
AT91C_TFT_DP4_7           EQU (0x00600820) ;- (LCDC_16B_TFT) Dithering Pattern DP4_7 Register
AT91C_TFT_PWRCON          EQU (0x0060083C) ;- (LCDC_16B_TFT) Power Control Register
AT91C_TFT_LUT_ENTRY       EQU (0x00600C00) ;- (LCDC_16B_TFT) LUT Entries Register
AT91C_TFT_TIM1            EQU (0x00600808) ;- (LCDC_16B_TFT) LCD Timing Config 1 Register
AT91C_TFT_CTRSTVAL        EQU (0x00600844) ;- (LCDC_16B_TFT) Contrast Value Register
AT91C_TFT_ISR             EQU (0x00600854) ;- (LCDC_16B_TFT) Interrupt Enable Register
AT91C_TFT_IDR             EQU (0x0060084C) ;- (LCDC_16B_TFT) Interrupt Disable Register
AT91C_TFT_DP2_3           EQU (0x00600828) ;- (LCDC_16B_TFT) Dithering Pattern DP2_3 Register
AT91C_TFT_DP1_2           EQU (0x0060081C) ;- (LCDC_16B_TFT) Dithering Pattern DP1_2 Register
AT91C_TFT_FRMP1           EQU (0x00600008) ;- (LCDC_16B_TFT) DMA Frame Pointer Register 1
AT91C_TFT_LCDCON2         EQU (0x00600804) ;- (LCDC_16B_TFT) LCD Control 2 Register
AT91C_TFT_DP4_5           EQU (0x00600834) ;- (LCDC_16B_TFT) Dithering Pattern DP4_5 Register
AT91C_TFT_IRR             EQU (0x00600864) ;- (LCDC_16B_TFT) Interrupts Raw Status Register
AT91C_TFT_IER             EQU (0x00600848) ;- (LCDC_16B_TFT) Interrupt Enable Register
AT91C_TFT_MVAL            EQU (0x00600818) ;- (LCDC_16B_TFT) LCD Mode Toggle Rate Value Register
AT91C_TFT_BA2             EQU (0x00600004) ;- (LCDC_16B_TFT) DMA Base Address Register 2
AT91C_TFT_DMA2DCFG        EQU (0x00600020) ;- (LCDC_16B_TFT) DMA 2D addressing configuration
AT91C_TFT_ICR             EQU (0x00600858) ;- (LCDC_16B_TFT) Interrupt Clear Register
AT91C_TFT_FRMA2           EQU (0x00600014) ;- (LCDC_16B_TFT) DMA Frame Address Register 2
AT91C_TFT_LCDFRCFG        EQU (0x00600810) ;- (LCDC_16B_TFT) LCD Frame Config Register
AT91C_TFT_FRMP2           EQU (0x0060000C) ;- (LCDC_16B_TFT) DMA Frame Pointer Register 2
AT91C_TFT_LCDCON1         EQU (0x00600800) ;- (LCDC_16B_TFT) LCD Control 1 Register
AT91C_TFT_FRMCFG          EQU (0x00600018) ;- (LCDC_16B_TFT) DMA Frame Configuration Register
AT91C_TFT_DP5_7           EQU (0x0060082C) ;- (LCDC_16B_TFT) Dithering Pattern DP5_7 Register
AT91C_TFT_GPR             EQU (0x0060085C) ;- (LCDC_16B_TFT) General Purpose Register
AT91C_TFT_FIFO            EQU (0x00600814) ;- (LCDC_16B_TFT) LCD FIFO Register
AT91C_TFT_CTRSTCON        EQU (0x00600840) ;- (LCDC_16B_TFT) Contrast Control Register
AT91C_TFT_DP3_4           EQU (0x00600830) ;- (LCDC_16B_TFT) Dithering Pattern DP3_4 Register
AT91C_TFT_FRMA1           EQU (0x00600010) ;- (LCDC_16B_TFT) DMA Frame Address Register 1
AT91C_TFT_TIM2            EQU (0x0060080C) ;- (LCDC_16B_TFT) LCD Timing Config 2 Register
AT91C_TFT_BA1             EQU (0x00600000) ;- (LCDC_16B_TFT) DMA Base Address Register 1
AT91C_TFT_DP3_5           EQU (0x00600824) ;- (LCDC_16B_TFT) Dithering Pattern DP3_5 Register
AT91C_TFT_DP6_7           EQU (0x00600838) ;- (LCDC_16B_TFT) Dithering Pattern DP6_7 Register
AT91C_TFT_DMACON          EQU (0x0060001C) ;- (LCDC_16B_TFT) DMA Control Register
AT91C_TFT_IMR             EQU (0x00600850) ;- (LCDC_16B_TFT) Interrupt Mask Register
AT91C_TFT_ITR             EQU (0x00600860) ;- (LCDC_16B_TFT) Interrupts Test Register

;- *****************************************************************************
;-               PIO DEFINITIONS FOR AT91SAM9261
;- *****************************************************************************
AT91C_PIO_PA0             EQU (1:SHL:0) ;- Pin Controlled by PA0
AT91C_PA0_SPI0_MISO       EQU (AT91C_PIO_PA0) ;-  SPI0 Master In Slave
AT91C_PA0_MCDA0           EQU (AT91C_PIO_PA0) ;-  Multimedia Card A Data 0
AT91C_PIO_PA1             EQU (1:SHL:1) ;- Pin Controlled by PA1
AT91C_PA1_SPI0_MOSI       EQU (AT91C_PIO_PA1) ;-  SPI0 Master Out Slave
AT91C_PA1_MCCDA           EQU (AT91C_PIO_PA1) ;-  Multimedia Card A Command
AT91C_PIO_PA10            EQU (1:SHL:10) ;- Pin Controlled by PA10
AT91C_PA10_DTXD           EQU (AT91C_PIO_PA10) ;-  DBGU Debug Transmit Data
AT91C_PA10_PCK3           EQU (AT91C_PIO_PA10) ;-  PMC Programmable clock Output 3
AT91C_PIO_PA11            EQU (1:SHL:11) ;- Pin Controlled by PA11
AT91C_PA11_TSYNC          EQU (AT91C_PIO_PA11) ;-  Trace Synchronization Signal
AT91C_PA11_SCK1           EQU (AT91C_PIO_PA11) ;-  USART1 Serial Clock
AT91C_PIO_PA12            EQU (1:SHL:12) ;- Pin Controlled by PA12
AT91C_PA12_TCLK           EQU (AT91C_PIO_PA12) ;-  Trace Clock
AT91C_PA12_RTS1           EQU (AT91C_PIO_PA12) ;-  USART1 Ready To Send
AT91C_PIO_PA13            EQU (1:SHL:13) ;- Pin Controlled by PA13
AT91C_PA13_TPS0           EQU (AT91C_PIO_PA13) ;-  Trace ARM Pipeline Status 0
AT91C_PA13_CTS1           EQU (AT91C_PIO_PA13) ;-  USART1 Clear To Send
AT91C_PIO_PA14            EQU (1:SHL:14) ;- Pin Controlled by PA14
AT91C_PA14_TPS1           EQU (AT91C_PIO_PA14) ;-  Trace ARM Pipeline Status 1
AT91C_PA14_SCK2           EQU (AT91C_PIO_PA14) ;-  USART2 Serial Clock
AT91C_PIO_PA15            EQU (1:SHL:15) ;- Pin Controlled by PA15
AT91C_PA15_TPS2           EQU (AT91C_PIO_PA15) ;-  Trace ARM Pipeline Status 2
AT91C_PA15_RTS2           EQU (AT91C_PIO_PA15) ;-  USART2 Ready To Send
AT91C_PIO_PA16            EQU (1:SHL:16) ;- Pin Controlled by PA16
AT91C_PA16_TPK0           EQU (AT91C_PIO_PA16) ;-  Trace Packet Port 0
AT91C_PA16_CTS2           EQU (AT91C_PIO_PA16) ;-  USART2 Clear To Send
AT91C_PIO_PA17            EQU (1:SHL:17) ;- Pin Controlled by PA17
AT91C_PA17_TPK1           EQU (AT91C_PIO_PA17) ;-  Trace Packet Port 1
AT91C_PA17_TF1            EQU (AT91C_PIO_PA17) ;-  SSC1 Transmit Frame Sync
AT91C_PIO_PA18            EQU (1:SHL:18) ;- Pin Controlled by PA18
AT91C_PA18_TPK2           EQU (AT91C_PIO_PA18) ;-  Trace Packet Port 2
AT91C_PA18_TK1            EQU (AT91C_PIO_PA18) ;-  SSC1 Transmit Clock
AT91C_PIO_PA19            EQU (1:SHL:19) ;- Pin Controlled by PA19
AT91C_PA19_TPK3           EQU (AT91C_PIO_PA19) ;-  Trace Packet Port 3
AT91C_PA19_TD1            EQU (AT91C_PIO_PA19) ;-  SSC1 Transmit Data
AT91C_PIO_PA2             EQU (1:SHL:2) ;- Pin Controlled by PA2
AT91C_PA2_SPI0_SPCK       EQU (AT91C_PIO_PA2) ;-  SPI0 Serial Clock
AT91C_PA2_MCCK            EQU (AT91C_PIO_PA2) ;-  Multimedia Card Clock
AT91C_PIO_PA20            EQU (1:SHL:20) ;- Pin Controlled by PA20
AT91C_PA20_TPK4           EQU (AT91C_PIO_PA20) ;-  Trace Packet Port 4
AT91C_PA20_RD1            EQU (AT91C_PIO_PA20) ;-  SSC1 Receive Data
AT91C_PIO_PA21            EQU (1:SHL:21) ;- Pin Controlled by PA21
AT91C_PA21_TPK5           EQU (AT91C_PIO_PA21) ;-  Trace Packet Port 5
AT91C_PA21_RK1            EQU (AT91C_PIO_PA21) ;-  SSC1 Receive Clock
AT91C_PIO_PA22            EQU (1:SHL:22) ;- Pin Controlled by PA22
AT91C_PA22_TPK6           EQU (AT91C_PIO_PA22) ;-  Trace Packet Port 6
AT91C_PA22_RF1            EQU (AT91C_PIO_PA22) ;-  SSC1 Receive Frame Sync
AT91C_PIO_PA23            EQU (1:SHL:23) ;- Pin Controlled by PA23
AT91C_PA23_TPK7           EQU (AT91C_PIO_PA23) ;-  Trace Packet Port 7
AT91C_PA23_RTS0           EQU (AT91C_PIO_PA23) ;-  USART0 Ready To Send
AT91C_PIO_PA24            EQU (1:SHL:24) ;- Pin Controlled by PA24
AT91C_PA24_TPK8           EQU (AT91C_PIO_PA24) ;-  Trace Packet Port 8
AT91C_PA24_SPI1_NPCS1     EQU (AT91C_PIO_PA24) ;-  SPI1 Peripheral Chip Select 1
AT91C_PIO_PA25            EQU (1:SHL:25) ;- Pin Controlled by PA25
AT91C_PA25_TPK9           EQU (AT91C_PIO_PA25) ;-  Trace Packet Port 9
AT91C_PA25_SPI1_NPCS2     EQU (AT91C_PIO_PA25) ;-  SPI1 Peripheral Chip Select 2
AT91C_PIO_PA26            EQU (1:SHL:26) ;- Pin Controlled by PA26
AT91C_PA26_TPK10          EQU (AT91C_PIO_PA26) ;-  Trace Packet Port 10
AT91C_PA26_SPI1_NPCS3     EQU (AT91C_PIO_PA26) ;-  SPI1 Peripheral Chip Select 3
AT91C_PIO_PA27            EQU (1:SHL:27) ;- Pin Controlled by PA27
AT91C_PA27_TPK11          EQU (AT91C_PIO_PA27) ;-  Trace Packet Port 11
AT91C_PA27_SPI0_NPCS1     EQU (AT91C_PIO_PA27) ;-  SPI0 Peripheral Chip Select 1
AT91C_PIO_PA28            EQU (1:SHL:28) ;- Pin Controlled by PA28
AT91C_PA28_TPK12          EQU (AT91C_PIO_PA28) ;-  Trace Packet Port 12
AT91C_PA28_SPI0_NPCS2     EQU (AT91C_PIO_PA28) ;-  SPI0 Peripheral Chip Select 2
AT91C_PIO_PA29            EQU (1:SHL:29) ;- Pin Controlled by PA29
AT91C_PA29_TPK13          EQU (AT91C_PIO_PA29) ;-  Trace Packet Port 13
AT91C_PA29_SPI0_NPCS3     EQU (AT91C_PIO_PA29) ;-  SPI0 Peripheral Chip Select 3
AT91C_PIO_PA3             EQU (1:SHL:3) ;- Pin Controlled by PA3
AT91C_PA3_SPI0_NPCS0      EQU (AT91C_PIO_PA3) ;-  SPI0 Peripheral Chip Select 0
AT91C_PIO_PA30            EQU (1:SHL:30) ;- Pin Controlled by PA30
AT91C_PA30_TPK14          EQU (AT91C_PIO_PA30) ;-  Trace Packet Port 14
AT91C_PA30_A23            EQU (AT91C_PIO_PA30) ;-  Address Bus bit 23
AT91C_PIO_PA31            EQU (1:SHL:31) ;- Pin Controlled by PA31
AT91C_PA31_TPK15          EQU (AT91C_PIO_PA31) ;-  Trace Packet Port 15
AT91C_PA31_A24            EQU (AT91C_PIO_PA31) ;-  Address Bus bit 24
AT91C_PIO_PA4             EQU (1:SHL:4) ;- Pin Controlled by PA4
AT91C_PA4_SPI0_NPCS1      EQU (AT91C_PIO_PA4) ;-  SPI0 Peripheral Chip Select 1
AT91C_PA4_MCDA1           EQU (AT91C_PIO_PA4) ;-  Multimedia Card A Data 1
AT91C_PIO_PA5             EQU (1:SHL:5) ;- Pin Controlled by PA5
AT91C_PA5_SPI0_NPCS2      EQU (AT91C_PIO_PA5) ;-  SPI0 Peripheral Chip Select 2
AT91C_PA5_MCDA2           EQU (AT91C_PIO_PA5) ;-  Multimedia Card A Data 2
AT91C_PIO_PA6             EQU (1:SHL:6) ;- Pin Controlled by PA6
AT91C_PA6_SPI0_NPCS3      EQU (AT91C_PIO_PA6) ;-  SPI0 Peripheral Chip Select 3
AT91C_PA6_MCDA3           EQU (AT91C_PIO_PA6) ;-  Multimedia Card A Data 3
AT91C_PIO_PA7             EQU (1:SHL:7) ;- Pin Controlled by PA7
AT91C_PA7_TWD             EQU (AT91C_PIO_PA7) ;-  TWI Two-wire Serial Data
AT91C_PA7_PCK0            EQU (AT91C_PIO_PA7) ;-  PMC Programmable clock Output 0
AT91C_PIO_PA8             EQU (1:SHL:8) ;- Pin Controlled by PA8
AT91C_PA8_TWCK            EQU (AT91C_PIO_PA8) ;-  TWI Two-wire Serial Clock
AT91C_PA8_PCK1            EQU (AT91C_PIO_PA8) ;-  PMC Programmable clock Output 1
AT91C_PIO_PA9             EQU (1:SHL:9) ;- Pin Controlled by PA9
AT91C_PA9_DRXD            EQU (AT91C_PIO_PA9) ;-  DBGU Debug Receive Data
AT91C_PA9_PCK2            EQU (AT91C_PIO_PA9) ;-  PMC Programmable clock Output 2
AT91C_PIO_PB0             EQU (1:SHL:0) ;- Pin Controlled by PB0
AT91C_PB0_LCDVSYNC        EQU (AT91C_PIO_PB0) ;-  LCD Vertical Synchronization
AT91C_PIO_PB1             EQU (1:SHL:1) ;- Pin Controlled by PB1
AT91C_PB1_LCDHSYNC        EQU (AT91C_PIO_PB1) ;-  LCD Horizontal Synchronization
AT91C_PIO_PB10            EQU (1:SHL:10) ;- Pin Controlled by PB10
AT91C_PB10_LCDD5          EQU (AT91C_PIO_PB10) ;-  LCD Data Bus Bit 5
AT91C_PB10_LCDD10         EQU (AT91C_PIO_PB10) ;-  LCD Data Bus Bit 10
AT91C_PIO_PB11            EQU (1:SHL:11) ;- Pin Controlled by PB11
AT91C_PB11_LCDD6          EQU (AT91C_PIO_PB11) ;-  LCD Data Bus Bit 6
AT91C_PB11_LCDD11         EQU (AT91C_PIO_PB11) ;-  LCD Data Bus Bit 11
AT91C_PIO_PB12            EQU (1:SHL:12) ;- Pin Controlled by PB12
AT91C_PB12_LCDD7          EQU (AT91C_PIO_PB12) ;-  LCD Data Bus Bit 7
AT91C_PB12_LCDD12         EQU (AT91C_PIO_PB12) ;-  LCD Data Bus Bit 12
AT91C_PIO_PB13            EQU (1:SHL:13) ;- Pin Controlled by PB13
AT91C_PB13_LCDD8          EQU (AT91C_PIO_PB13) ;-  LCD Data Bus Bit 8
AT91C_PB13_LCDD13         EQU (AT91C_PIO_PB13) ;-  LCD Data Bus Bit 13
AT91C_PIO_PB14            EQU (1:SHL:14) ;- Pin Controlled by PB14
AT91C_PB14_LCDD9          EQU (AT91C_PIO_PB14) ;-  LCD Data Bus Bit 9
AT91C_PB14_LCDD14         EQU (AT91C_PIO_PB14) ;-  LCD Data Bus Bit 14
AT91C_PIO_PB15            EQU (1:SHL:15) ;- Pin Controlled by PB15
AT91C_PB15_LCDD10         EQU (AT91C_PIO_PB15) ;-  LCD Data Bus Bit 10
AT91C_PB15_LCDD15         EQU (AT91C_PIO_PB15) ;-  LCD Data Bus Bit 15
AT91C_PIO_PB16            EQU (1:SHL:16) ;- Pin Controlled by PB16
AT91C_PB16_LCDD11         EQU (AT91C_PIO_PB16) ;-  LCD Data Bus Bit 11
AT91C_PB16_LCDD19         EQU (AT91C_PIO_PB16) ;-  LCD Data Bus Bit 19
AT91C_PIO_PB17            EQU (1:SHL:17) ;- Pin Controlled by PB17
AT91C_PB17_LCDD12         EQU (AT91C_PIO_PB17) ;-  LCD Data Bus Bit 12
AT91C_PB17_LCDD20         EQU (AT91C_PIO_PB17) ;-  LCD Data Bus Bit 20
AT91C_PIO_PB18            EQU (1:SHL:18) ;- Pin Controlled by PB18
AT91C_PB18_LCDD13         EQU (AT91C_PIO_PB18) ;-  LCD Data Bus Bit 13
AT91C_PB18_LCDD21         EQU (AT91C_PIO_PB18) ;-  LCD Data Bus Bit 21
AT91C_PIO_PB19            EQU (1:SHL:19) ;- Pin Controlled by PB19
AT91C_PB19_LCDD14         EQU (AT91C_PIO_PB19) ;-  LCD Data Bus Bit 14
AT91C_PB19_LCDD22         EQU (AT91C_PIO_PB19) ;-  LCD Data Bus Bit 22
AT91C_PIO_PB2             EQU (1:SHL:2) ;- Pin Controlled by PB2
AT91C_PB2_LCDDOTCK        EQU (AT91C_PIO_PB2) ;-  LCD Dot Clock
AT91C_PB2_PCK0            EQU (AT91C_PIO_PB2) ;-  PMC Programmable clock Output 0
AT91C_PIO_PB20            EQU (1:SHL:20) ;- Pin Controlled by PB20
AT91C_PB20_LCDD15         EQU (AT91C_PIO_PB20) ;-  LCD Data Bus Bit 15
AT91C_PB20_LCDD23         EQU (AT91C_PIO_PB20) ;-  LCD Data Bus Bit 23
AT91C_PIO_PB21            EQU (1:SHL:21) ;- Pin Controlled by PB21
AT91C_PB21_TF0            EQU (AT91C_PIO_PB21) ;-  SSC0 Transmit Frame Sync
AT91C_PB21_LCDD16         EQU (AT91C_PIO_PB21) ;-  LCD Data Bus Bit 16
AT91C_PIO_PB22            EQU (1:SHL:22) ;- Pin Controlled by PB22
AT91C_PB22_TK0            EQU (AT91C_PIO_PB22) ;-  SSC0 Transmit Clock
AT91C_PB22_LCDD17         EQU (AT91C_PIO_PB22) ;-  LCD Data Bus Bit 17
AT91C_PIO_PB23            EQU (1:SHL:23) ;- Pin Controlled by PB23
AT91C_PB23_TD0            EQU (AT91C_PIO_PB23) ;-  SSC0 Transmit Data
AT91C_PB23_LCDD18         EQU (AT91C_PIO_PB23) ;-  LCD Data Bus Bit 18
AT91C_PIO_PB24            EQU (1:SHL:24) ;- Pin Controlled by PB24
AT91C_PB24_RD0            EQU (AT91C_PIO_PB24) ;-  SSC0 Receive Data
AT91C_PB24_LCDD19         EQU (AT91C_PIO_PB24) ;-  LCD Data Bus Bit 19
AT91C_PIO_PB25            EQU (1:SHL:25) ;- Pin Controlled by PB25
AT91C_PB25_RK0            EQU (AT91C_PIO_PB25) ;-  SSC0 Receive Clock
AT91C_PB25_LCDD20         EQU (AT91C_PIO_PB25) ;-  LCD Data Bus Bit 20
AT91C_PIO_PB26            EQU (1:SHL:26) ;- Pin Controlled by PB26
AT91C_PB26_RF0            EQU (AT91C_PIO_PB26) ;-  SSC0 Receive Frame Sync
AT91C_PB26_LCDD21         EQU (AT91C_PIO_PB26) ;-  LCD Data Bus Bit 21
AT91C_PIO_PB27            EQU (1:SHL:27) ;- Pin Controlled by PB27
AT91C_PB27_SPI1_NPCS1     EQU (AT91C_PIO_PB27) ;-  SPI1 Peripheral Chip Select 1
AT91C_PB27_LCDD22         EQU (AT91C_PIO_PB27) ;-  LCD Data Bus Bit 22
AT91C_PIO_PB28            EQU (1:SHL:28) ;- Pin Controlled by PB28
AT91C_PB28_SPI1_NPCS0     EQU (AT91C_PIO_PB28) ;-  SPI1 Peripheral Chip Select 0
AT91C_PB28_LCDD23         EQU (AT91C_PIO_PB28) ;-  LCD Data Bus Bit 23
AT91C_PIO_PB29            EQU (1:SHL:29) ;- Pin Controlled by PB29
AT91C_PB29_SPI1_SPCK      EQU (AT91C_PIO_PB29) ;-  SPI1 Serial Clock
AT91C_PB29_IRQ2           EQU (AT91C_PIO_PB29) ;-  Interrupt input 2
AT91C_PIO_PB3             EQU (1:SHL:3) ;- Pin Controlled by PB3
AT91C_PB3_LCDDEN          EQU (AT91C_PIO_PB3) ;-  LCD Data Enable
AT91C_PIO_PB30            EQU (1:SHL:30) ;- Pin Controlled by PB30
AT91C_PB30_SPI1_MISO      EQU (AT91C_PIO_PB30) ;-  SPI1 Master In Slave
AT91C_PB30_IRQ1           EQU (AT91C_PIO_PB30) ;-  Interrupt input 1
AT91C_PIO_PB31            EQU (1:SHL:31) ;- Pin Controlled by PB31
AT91C_PB31_SPI1_MOSI      EQU (AT91C_PIO_PB31) ;-  SPI1 Master Out Slave
AT91C_PB31_PCK2           EQU (AT91C_PIO_PB31) ;-  PMC Programmable clock Output 2
AT91C_PIO_PB4             EQU (1:SHL:4) ;- Pin Controlled by PB4
AT91C_PB4_LCDCC           EQU (AT91C_PIO_PB4) ;-  LCD Contrast Control
AT91C_PB4_LCDD2           EQU (AT91C_PIO_PB4) ;-  LCD Data Bus Bit 2
AT91C_PIO_PB5             EQU (1:SHL:5) ;- Pin Controlled by PB5
AT91C_PB5_LCDD0           EQU (AT91C_PIO_PB5) ;-  LCD Data Bus Bit 0
AT91C_PB5_LCDD3           EQU (AT91C_PIO_PB5) ;-  LCD Data Bus Bit 3
AT91C_PIO_PB6             EQU (1:SHL:6) ;- Pin Controlled by PB6
AT91C_PB6_LCDD1           EQU (AT91C_PIO_PB6) ;-  LCD Data Bus Bit 1
AT91C_PB6_LCDD4           EQU (AT91C_PIO_PB6) ;-  LCD Data Bus Bit 4
AT91C_PIO_PB7             EQU (1:SHL:7) ;- Pin Controlled by PB7
AT91C_PB7_LCDD2           EQU (AT91C_PIO_PB7) ;-  LCD Data Bus Bit 2
AT91C_PB7_LCDD5           EQU (AT91C_PIO_PB7) ;-  LCD Data Bus Bit 5
AT91C_PIO_PB8             EQU (1:SHL:8) ;- Pin Controlled by PB8
AT91C_PB8_LCDD3           EQU (AT91C_PIO_PB8) ;-  LCD Data Bus Bit 3
AT91C_PB8_LCDD6           EQU (AT91C_PIO_PB8) ;-  LCD Data Bus Bit 6
AT91C_PIO_PB9             EQU (1:SHL:9) ;- Pin Controlled by PB9
AT91C_PB9_LCDD4           EQU (AT91C_PIO_PB9) ;-  LCD Data Bus Bit 4
AT91C_PB9_LCDD7           EQU (AT91C_PIO_PB9) ;-  LCD Data Bus Bit 7
AT91C_PIO_PC0             EQU (1:SHL:0) ;- Pin Controlled by PC0
AT91C_PC0_SMOE            EQU (AT91C_PIO_PC0) ;-  SmartMedia Output Enable
AT91C_PC0_NCS6            EQU (AT91C_PIO_PC0) ;-  Chip Select 6
AT91C_PIO_PC1             EQU (1:SHL:1) ;- Pin Controlled by PC1
AT91C_PC1_SMWE            EQU (AT91C_PIO_PC1) ;-  SmartMedia Write Enable
AT91C_PC1_NCS7            EQU (AT91C_PIO_PC1) ;-  Chip Select 7
AT91C_PIO_PC10            EQU (1:SHL:10) ;- Pin Controlled by PC10
AT91C_PC10_RTS0           EQU (AT91C_PIO_PC10) ;-  USART0 Ready To Send
AT91C_PC10_SCK0           EQU (AT91C_PIO_PC10) ;-  USART0 Serial Clock
AT91C_PIO_PC11            EQU (1:SHL:11) ;- Pin Controlled by PC11
AT91C_PC11_CTS0           EQU (AT91C_PIO_PC11) ;-  USART0 Clear To Send
AT91C_PC11_FIQ            EQU (AT91C_PIO_PC11) ;-  AIC Fast Interrupt Input
AT91C_PIO_PC12            EQU (1:SHL:12) ;- Pin Controlled by PC12
AT91C_PC12_TXD1           EQU (AT91C_PIO_PC12) ;-  USART1 Transmit Data
AT91C_PC12_NCS6           EQU (AT91C_PIO_PC12) ;-  Chip Select 6
AT91C_PIO_PC13            EQU (1:SHL:13) ;- Pin Controlled by PC13
AT91C_PC13_RXD1           EQU (AT91C_PIO_PC13) ;-  USART1 Receive Data
AT91C_PC13_NCS7           EQU (AT91C_PIO_PC13) ;-  Chip Select 7
AT91C_PIO_PC14            EQU (1:SHL:14) ;- Pin Controlled by PC14
AT91C_PC14_TXD2           EQU (AT91C_PIO_PC14) ;-  USART2 Transmit Data
AT91C_PC14_SPI1_NPCS2     EQU (AT91C_PIO_PC14) ;-  SPI1 Peripheral Chip Select 2
AT91C_PIO_PC15            EQU (1:SHL:15) ;- Pin Controlled by PC15
AT91C_PC15_RXD2           EQU (AT91C_PIO_PC15) ;-  USART2 Receive Data
AT91C_PC15_SPI1_NPCS3     EQU (AT91C_PIO_PC15) ;-  SPI1 Peripheral Chip Select 3
AT91C_PIO_PC16            EQU (1:SHL:16) ;- Pin Controlled by PC16
AT91C_PC16_D16            EQU (AT91C_PIO_PC16) ;-  Data Bus [16]
AT91C_PC16_TCLK0          EQU (AT91C_PIO_PC16) ;-  Timer Counter 0 external clock input
AT91C_PIO_PC17            EQU (1:SHL:17) ;- Pin Controlled by PC17
AT91C_PC17_D17            EQU (AT91C_PIO_PC17) ;-  Data Bus [17]
AT91C_PC17_TCLK1          EQU (AT91C_PIO_PC17) ;-  Timer Counter 1 external clock input
AT91C_PIO_PC18            EQU (1:SHL:18) ;- Pin Controlled by PC18
AT91C_PC18_D18            EQU (AT91C_PIO_PC18) ;-  Data Bus [18]
AT91C_PC18_TCLK2          EQU (AT91C_PIO_PC18) ;-  Timer Counter 2 external clock input
AT91C_PIO_PC19            EQU (1:SHL:19) ;- Pin Controlled by PC19
AT91C_PC19_D19            EQU (AT91C_PIO_PC19) ;-  Data Bus [19]
AT91C_PC19_TIOA0          EQU (AT91C_PIO_PC19) ;-  Timer Counter 0 Multipurpose Timer I/O Pin A
AT91C_PIO_PC2             EQU (1:SHL:2) ;- Pin Controlled by PC2
AT91C_PC2_NWAIT           EQU (AT91C_PIO_PC2) ;-  NWAIT
AT91C_PC2_IRQ0            EQU (AT91C_PIO_PC2) ;-  Interrupt input 0
AT91C_PIO_PC20            EQU (1:SHL:20) ;- Pin Controlled by PC20
AT91C_PC20_D20            EQU (AT91C_PIO_PC20) ;-  Data Bus [20]
AT91C_PC20_TIOB0          EQU (AT91C_PIO_PC20) ;-  Timer Counter 0 Multipurpose Timer I/O Pin B
AT91C_PIO_PC21            EQU (1:SHL:21) ;- Pin Controlled by PC21
AT91C_PC21_D21            EQU (AT91C_PIO_PC21) ;-  Data Bus [21]
AT91C_PC21_TIOA1          EQU (AT91C_PIO_PC21) ;-  Timer Counter 1 Multipurpose Timer I/O Pin A
AT91C_PIO_PC22            EQU (1:SHL:22) ;- Pin Controlled by PC22
AT91C_PC22_D22            EQU (AT91C_PIO_PC22) ;-  Data Bus [22]
AT91C_PC22_TIOB1          EQU (AT91C_PIO_PC22) ;-  Timer Counter 1 Multipurpose Timer I/O Pin B
AT91C_PIO_PC23            EQU (1:SHL:23) ;- Pin Controlled by PC23
AT91C_PC23_D23            EQU (AT91C_PIO_PC23) ;-  Data Bus [23]
AT91C_PC23_TIOA2          EQU (AT91C_PIO_PC23) ;-  Timer Counter 2 Multipurpose Timer I/O Pin A
AT91C_PIO_PC24            EQU (1:SHL:24) ;- Pin Controlled by PC24
AT91C_PC24_D24            EQU (AT91C_PIO_PC24) ;-  Data Bus [24]
AT91C_PC24_TIOB2          EQU (AT91C_PIO_PC24) ;-  Timer Counter 2 Multipurpose Timer I/O Pin B
AT91C_PIO_PC25            EQU (1:SHL:25) ;- Pin Controlled by PC25
AT91C_PC25_D25            EQU (AT91C_PIO_PC25) ;-  Data Bus [25]
AT91C_PC25_TF2            EQU (AT91C_PIO_PC25) ;-  SSC2 Transmit Frame Sync
AT91C_PIO_PC26            EQU (1:SHL:26) ;- Pin Controlled by PC26
AT91C_PC26_D26            EQU (AT91C_PIO_PC26) ;-  Data Bus [26]
AT91C_PC26_TK2            EQU (AT91C_PIO_PC26) ;-  SSC2 Transmit Clock
AT91C_PIO_PC27            EQU (1:SHL:27) ;- Pin Controlled by PC27
AT91C_PC27_D27            EQU (AT91C_PIO_PC27) ;-  Data Bus [27]
AT91C_PC27_TD2            EQU (AT91C_PIO_PC27) ;-  SSC2 Transmit Data
AT91C_PIO_PC28            EQU (1:SHL:28) ;- Pin Controlled by PC28
AT91C_PC28_D28            EQU (AT91C_PIO_PC28) ;-  Data Bus [28]
AT91C_PC28_RD2            EQU (AT91C_PIO_PC28) ;-  SSC2 Receive Data
AT91C_PIO_PC29            EQU (1:SHL:29) ;- Pin Controlled by PC29
AT91C_PC29_D29            EQU (AT91C_PIO_PC29) ;-  Data Bus [29]
AT91C_PC29_RK2            EQU (AT91C_PIO_PC29) ;-  SSC2 Receive Clock
AT91C_PIO_PC3             EQU (1:SHL:3) ;- Pin Controlled by PC3
AT91C_PC3_A25_CFRNW       EQU (AT91C_PIO_PC3) ;-  Address Bus[25] / Compact Flash Read Not Write
AT91C_PIO_PC30            EQU (1:SHL:30) ;- Pin Controlled by PC30
AT91C_PC30_D30            EQU (AT91C_PIO_PC30) ;-  Data Bus [30]
AT91C_PC30_RF2            EQU (AT91C_PIO_PC30) ;-  SSC2 Receive Frame Sync
AT91C_PIO_PC31            EQU (1:SHL:31) ;- Pin Controlled by PC31
AT91C_PC31_D31            EQU (AT91C_PIO_PC31) ;-  Data Bus [31]
AT91C_PC31_PCK1           EQU (AT91C_PIO_PC31) ;-  PMC Programmable clock Output 1
AT91C_PIO_PC4             EQU (1:SHL:4) ;- Pin Controlled by PC4
AT91C_PC4_NCS4_CFCS0      EQU (AT91C_PIO_PC4) ;-  Chip Select 4 / CompactFlash Chip Select 0
AT91C_PIO_PC5             EQU (1:SHL:5) ;- Pin Controlled by PC5
AT91C_PC5_NCS5_CFCS1      EQU (AT91C_PIO_PC5) ;-  Chip Select 5 / CompactFlash Chip Select 1
AT91C_PIO_PC6             EQU (1:SHL:6) ;- Pin Controlled by PC6
AT91C_PC6_CFCE1           EQU (AT91C_PIO_PC6) ;-  CompactFlash Chip Enable 1
AT91C_PIO_PC7             EQU (1:SHL:7) ;- Pin Controlled by PC7
AT91C_PC7_CFCE2           EQU (AT91C_PIO_PC7) ;-  CompactFlash Chip Enable 2
AT91C_PIO_PC8             EQU (1:SHL:8) ;- Pin Controlled by PC8
AT91C_PC8_TXD0            EQU (AT91C_PIO_PC8) ;-  USART0 Transmit Data
AT91C_PC8_PCK2            EQU (AT91C_PIO_PC8) ;-  PMC Programmable clock Output 2
AT91C_PIO_PC9             EQU (1:SHL:9) ;- Pin Controlled by PC9
AT91C_PC9_RXD0            EQU (AT91C_PIO_PC9) ;-  USART0 Receive Data
AT91C_PC9_PCK3            EQU (AT91C_PIO_PC9) ;-  PMC Programmable clock Output 3

;- *****************************************************************************
;-               PERIPHERAL ID DEFINITIONS FOR AT91SAM9261
;- *****************************************************************************
AT91C_ID_FIQ              EQU ( 0) ;- Advanced Interrupt Controller (FIQ)
AT91C_ID_SYS              EQU ( 1) ;- System Interrupt
AT91C_ID_PIOA             EQU ( 2) ;- Parallel IO Controller A
AT91C_ID_PIOB             EQU ( 3) ;- Parallel IO Controller B
AT91C_ID_PIOC             EQU ( 4) ;- Parallel IO Controller C
AT91C_ID_US0              EQU ( 6) ;- USART 0
AT91C_ID_US1              EQU ( 7) ;- USART 1
AT91C_ID_US2              EQU ( 8) ;- USART 2
AT91C_ID_MCI              EQU ( 9) ;- Multimedia Card Interface
AT91C_ID_UDP              EQU (10) ;- USB Device Port
AT91C_ID_TWI              EQU (11) ;- Two-Wire Interface
AT91C_ID_SPI0             EQU (12) ;- Serial Peripheral Interface 0
AT91C_ID_SPI1             EQU (13) ;- Serial Peripheral Interface 1
AT91C_ID_SSC0             EQU (14) ;- Serial Synchronous Controller 0
AT91C_ID_SSC1             EQU (15) ;- Serial Synchronous Controller 1
AT91C_ID_SSC2             EQU (16) ;- Serial Synchronous Controller 2
AT91C_ID_TC0              EQU (17) ;- Timer Counter 0
AT91C_ID_TC1              EQU (18) ;- Timer Counter 1
AT91C_ID_TC2              EQU (19) ;- Timer Counter 2
AT91C_ID_UHP              EQU (20) ;- USB Host Port
AT91C_ID_LCDC             EQU (21) ;- LCD Controller
AT91C_ID_IRQ0             EQU (29) ;- Advanced Interrupt Controller (IRQ0)
AT91C_ID_IRQ1             EQU (30) ;- Advanced Interrupt Controller (IRQ1)
AT91C_ID_IRQ2             EQU (31) ;- Advanced Interrupt Controller (IRQ2)
AT91C_ALL_INT             EQU (0xE03FFFDF) ;- ALL VALID INTERRUPTS

;- *****************************************************************************
;-               BASE ADDRESS DEFINITIONS FOR AT91SAM9261
;- *****************************************************************************
AT91C_BASE_SYS            EQU (0xFFFFEA00) ;- (SYS) Base Address
AT91C_BASE_SDRAMC         EQU (0xFFFFEA00) ;- (SDRAMC) Base Address
AT91C_BASE_SMC            EQU (0xFFFFEC00) ;- (SMC) Base Address
AT91C_BASE_MATRIX         EQU (0xFFFFEE00) ;- (MATRIX) Base Address
AT91C_BASE_AIC            EQU (0xFFFFF000) ;- (AIC) Base Address
AT91C_BASE_PDC_DBGU       EQU (0xFFFFF300) ;- (PDC_DBGU) Base Address
AT91C_BASE_DBGU           EQU (0xFFFFF200) ;- (DBGU) Base Address
AT91C_BASE_PIOA           EQU (0xFFFFF400) ;- (PIOA) Base Address
AT91C_BASE_PIOB           EQU (0xFFFFF600) ;- (PIOB) Base Address
AT91C_BASE_PIOC           EQU (0xFFFFF800) ;- (PIOC) Base Address
AT91C_BASE_CKGR           EQU (0xFFFFFC20) ;- (CKGR) Base Address
AT91C_BASE_PMC            EQU (0xFFFFFC00) ;- (PMC) Base Address
AT91C_BASE_RSTC           EQU (0xFFFFFD00) ;- (RSTC) Base Address
AT91C_BASE_SHDWC          EQU (0xFFFFFD10) ;- (SHDWC) Base Address
AT91C_BASE_RTTC           EQU (0xFFFFFD20) ;- (RTTC) Base Address
AT91C_BASE_PITC           EQU (0xFFFFFD30) ;- (PITC) Base Address
AT91C_BASE_WDTC           EQU (0xFFFFFD40) ;- (WDTC) Base Address
AT91C_BASE_TC0            EQU (0xFFFA0000) ;- (TC0) Base Address
AT91C_BASE_TC1            EQU (0xFFFA0040) ;- (TC1) Base Address
AT91C_BASE_TC2            EQU (0xFFFA0080) ;- (TC2) Base Address
AT91C_BASE_TCB0           EQU (0xFFFA0000) ;- (TCB0) Base Address
AT91C_BASE_UDP            EQU (0xFFFA4000) ;- (UDP) Base Address
AT91C_BASE_PDC_MCI        EQU (0xFFFA8100) ;- (PDC_MCI) Base Address
AT91C_BASE_MCI            EQU (0xFFFA8000) ;- (MCI) Base Address
AT91C_BASE_TWI            EQU (0xFFFAC000) ;- (TWI) Base Address
AT91C_BASE_PDC_US0        EQU (0xFFFB0100) ;- (PDC_US0) Base Address
AT91C_BASE_US0            EQU (0xFFFB0000) ;- (US0) Base Address
AT91C_BASE_PDC_US1        EQU (0xFFFB4100) ;- (PDC_US1) Base Address
AT91C_BASE_US1            EQU (0xFFFB4000) ;- (US1) Base Address
AT91C_BASE_PDC_US2        EQU (0xFFFB8100) ;- (PDC_US2) Base Address
AT91C_BASE_US2            EQU (0xFFFB8000) ;- (US2) Base Address
AT91C_BASE_PDC_SSC0       EQU (0xFFFBC100) ;- (PDC_SSC0) Base Address
AT91C_BASE_SSC0           EQU (0xFFFBC000) ;- (SSC0) Base Address
AT91C_BASE_PDC_SSC1       EQU (0xFFFC0100) ;- (PDC_SSC1) Base Address
AT91C_BASE_SSC1           EQU (0xFFFC0000) ;- (SSC1) Base Address
AT91C_BASE_PDC_SSC2       EQU (0xFFFC4100) ;- (PDC_SSC2) Base Address
AT91C_BASE_SSC2           EQU (0xFFFC4000) ;- (SSC2) Base Address
AT91C_BASE_PDC_SPI0       EQU (0xFFFC8100) ;- (PDC_SPI0) Base Address
AT91C_BASE_SPI0           EQU (0xFFFC8000) ;- (SPI0) Base Address
AT91C_BASE_PDC_SPI1       EQU (0xFFFCC100) ;- (PDC_SPI1) Base Address
AT91C_BASE_SPI1           EQU (0xFFFCC000) ;- (SPI1) Base Address
AT91C_BASE_UHP            EQU (0x00500000) ;- (UHP) Base Address
AT91C_BASE_LCDC           EQU (0x00600000) ;- (LCDC) Base Address
AT91C_BASE_LCDC_16B_TFT   EQU (0x00600000) ;- (LCDC_16B_TFT) Base Address

;- *****************************************************************************
;-               MEMORY MAPPING DEFINITIONS FOR AT91SAM9261
;- *****************************************************************************
;- ITCM
AT91C_ITCM                EQU (0x00100000) ;- Maximum ITCM Area base address
AT91C_ITCM_SIZE           EQU (0x00010000) ;- Maximum ITCM Area size in byte (64 Kbytes)
;- DTCM
AT91C_DTCM                EQU (0x00200000) ;- Maximum DTCM Area base address
AT91C_DTCM_SIZE           EQU (0x00010000) ;- Maximum DTCM Area size in byte (64 Kbytes)
;- IRAM
AT91C_IRAM                EQU (0x00300000) ;- Maximum Internal SRAM base address
AT91C_IRAM_SIZE           EQU (0x00028000) ;- Maximum Internal SRAM size in byte (160 Kbytes)
;- IRAM_MIN
AT91C_IRAM_MIN            EQU (0x00300000) ;- Minimum Internal RAM base address
AT91C_IRAM_MIN_SIZE       EQU (0x00008000) ;- Minimum Internal RAM size in byte (32 Kbytes)
;- IROM
AT91C_IROM                EQU (0x00400000) ;- Internal ROM base address
AT91C_IROM_SIZE           EQU (0x00008000) ;- Internal ROM size in byte (32 Kbytes)
;- EBI_CS0
AT91C_EBI_CS0             EQU (0x10000000) ;- EBI Chip Select 0 base address
AT91C_EBI_CS0_SIZE        EQU (0x10000000) ;- EBI Chip Select 0 size in byte (262144 Kbytes)
;- EBI_CS1
AT91C_EBI_CS1             EQU (0x20000000) ;- EBI Chip Select 1 base address
AT91C_EBI_CS1_SIZE        EQU (0x10000000) ;- EBI Chip Select 1 size in byte (262144 Kbytes)
;- EBI_SDRAM
AT91C_EBI_SDRAM           EQU (0x20000000) ;- SDRAM on EBI Chip Select 1 base address
AT91C_EBI_SDRAM_SIZE      EQU (0x10000000) ;- SDRAM on EBI Chip Select 1 size in byte (262144 Kbytes)
;- EBI_SDRAM_16BIT
AT91C_EBI_SDRAM_16BIT     EQU (0x20000000) ;- SDRAM on EBI Chip Select 1 base address
AT91C_EBI_SDRAM_16BIT_SIZE EQU (0x02000000) ;- SDRAM on EBI Chip Select 1 size in byte (32768 Kbytes)
;- EBI_SDRAM_32BIT
AT91C_EBI_SDRAM_32BIT     EQU (0x20000000) ;- SDRAM on EBI Chip Select 1 base address
AT91C_EBI_SDRAM_32BIT_SIZE EQU (0x04000000) ;- SDRAM on EBI Chip Select 1 size in byte (65536 Kbytes)
;- EBI_CS2
AT91C_EBI_CS2             EQU (0x30000000) ;- EBI Chip Select 2 base address
AT91C_EBI_CS2_SIZE        EQU (0x10000000) ;- EBI Chip Select 2 size in byte (262144 Kbytes)
;- EBI_CS3
AT91C_EBI_CS3             EQU (0x40000000) ;- EBI Chip Select 3 base address
AT91C_EBI_CS3_SIZE        EQU (0x10000000) ;- EBI Chip Select 3 size in byte (262144 Kbytes)
;- EBI_SM
AT91C_EBI_SM              EQU (0x40000000) ;- SmartMedia on Chip Select 3 base address
AT91C_EBI_SM_SIZE         EQU (0x10000000) ;- SmartMedia on Chip Select 3 size in byte (262144 Kbytes)
;- EBI_CS4
AT91C_EBI_CS4             EQU (0x50000000) ;- EBI Chip Select 4 base address
AT91C_EBI_CS4_SIZE        EQU (0x10000000) ;- EBI Chip Select 4 size in byte (262144 Kbytes)
;- EBI_CF0
AT91C_EBI_CF0             EQU (0x50000000) ;- CompactFlash 0 on Chip Select 4 base address
AT91C_EBI_CF0_SIZE        EQU (0x10000000) ;- CompactFlash 0 on Chip Select 4 size in byte (262144 Kbytes)
;- EBI_CS5
AT91C_EBI_CS5             EQU (0x60000000) ;- EBI Chip Select 5 base address
AT91C_EBI_CS5_SIZE        EQU (0x10000000) ;- EBI Chip Select 5 size in byte (262144 Kbytes)
;- EBI_CF1
AT91C_EBI_CF1             EQU (0x60000000) ;- CompactFlash 1 on Chip Select 5 base address
AT91C_EBI_CF1_SIZE        EQU (0x10000000) ;- CompactFlash 1 on Chip Select 5 size in byte (262144 Kbytes)
;- EBI_CS6
AT91C_EBI_CS6             EQU (0x70000000) ;- EBI Chip Select 6 base address
AT91C_EBI_CS6_SIZE        EQU (0x10000000) ;- EBI Chip Select 6 size in byte (262144 Kbytes)
;- EBI_CS7
AT91C_EBI_CS7             EQU (0x80000000) ;- EBI Chip Select 7 base address
AT91C_EBI_CS7_SIZE        EQU (0x10000000) ;- EBI Chip Select 7 size in byte (262144 Kbytes)


	END
