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
;- File Name           : AT91SAM9260.h
;- Object              : AT91SAM9260 definitions
;- Generated           : AT91 SW Application Group  08/18/2006 (15:30:21)
;- 
;- CVS Reference       : /AT91SAM9260.pl/1.9/Fri Sep 30 12:12:13 2005//
;- CVS Reference       : /SYS_SAM9260.pl/1.2/Fri Sep 30 12:12:15 2005//
;- CVS Reference       : /HMATRIX1_SAM9260.pl/1.5/Mon Jan 23 16:58:39 2006//
;- CVS Reference       : /CCR_SAM9260.pl/1.1/Fri Sep 30 12:12:14 2005//
;- CVS Reference       : /PMC_SAM9260.pl/1.2/Thu Oct 13 11:39:15 2005//
;- CVS Reference       : /ADC_6051C.pl/1.1/Mon Jan 31 13:12:40 2005//
;- CVS Reference       : /HSDRAMC1_6100A.pl/1.2/Mon Aug  9 10:52:25 2004//
;- CVS Reference       : /HSMC3_6105A.pl/1.4/Tue Nov 16 09:16:23 2004//
;- CVS Reference       : /AIC_6075A.pl/1.1/Mon Jul 12 17:04:01 2004//
;- CVS Reference       : /PDC_6074C.pl/1.2/Thu Feb  3 09:02:11 2005//
;- CVS Reference       : /DBGU_6059D.pl/1.1/Mon Jan 31 13:54:41 2005//
;- CVS Reference       : /PIO_6057A.pl/1.2/Thu Feb  3 10:29:42 2005//
;- CVS Reference       : /RSTC_6098A.pl/1.3/Thu Nov  4 13:57:00 2004//
;- CVS Reference       : /SHDWC_6122A.pl/1.3/Wed Oct  6 14:16:58 2004//
;- CVS Reference       : /RTTC_6081A.pl/1.2/Thu Nov  4 13:57:22 2004//
;- CVS Reference       : /PITC_6079A.pl/1.2/Thu Nov  4 13:56:22 2004//
;- CVS Reference       : /WDTC_6080A.pl/1.3/Thu Nov  4 13:58:52 2004//
;- CVS Reference       : /TC_6082A.pl/1.7/Wed Mar  9 16:31:51 2005//
;- CVS Reference       : /MCI_6101E.pl/1.1/Fri Jun  3 13:20:23 2005//
;- CVS Reference       : /TWI_6061A.pl/1.1/Tue Jul 13 06:38:23 2004//
;- CVS Reference       : /US_6089C.pl/1.1/Mon Jan 31 13:56:02 2005//
;- CVS Reference       : /SSC_6078A.pl/1.1/Tue Jul 13 07:10:41 2004//
;- CVS Reference       : /SPI_6088D.pl/1.3/Fri May 20 14:23:02 2005//
;- CVS Reference       : /EMACB_6119A.pl/1.6/Wed Jul 13 15:25:00 2005//
;- CVS Reference       : /UDP_6083C.pl/1.5/Thu Aug  3 12:46:31 2006//
;- CVS Reference       : /UHP_6127A.pl/1.1/Wed Feb 23 16:03:17 2005//
;- CVS Reference       : /TBOX_XXXX.pl/1.15/Thu Jun  9 07:05:57 2005//
;- CVS Reference       : /EBI_SAM9260.pl/1.1/Fri Sep 30 12:12:14 2005//
;- CVS Reference       : /HECC_6143A.pl/1.1/Wed Feb  9 17:16:57 2005//
;- CVS Reference       : /ISI_xxxxx.pl/1.3/Thu Mar  3 11:11:48 2005//
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
;-              SOFTWARE API DEFINITION  FOR External Bus Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_EBI
EBI_DUMMY       #  4 ;- Dummy register - Do not use

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Error Correction Code controller
;- *****************************************************************************
                ^ 0 ;- AT91S_ECC
ECC_CR          #  4 ;-  ECC reset register
ECC_MR          #  4 ;-  ECC Page size register
ECC_SR          #  4 ;-  ECC Status register
ECC_PR          #  4 ;-  ECC Parity register
ECC_NPR         #  4 ;-  ECC Parity N register
                # 232 ;- Reserved
ECC_VR          #  4 ;-  ECC Version register
;- -------- ECC_CR : (ECC Offset: 0x0) ECC reset register -------- 
AT91C_ECC_RST             EQU (0x1:SHL:0) ;- (ECC) ECC reset parity
;- -------- ECC_MR : (ECC Offset: 0x4) ECC page size register -------- 
AT91C_ECC_PAGE_SIZE       EQU (0x3:SHL:0) ;- (ECC) Nand Flash page size
;- -------- ECC_SR : (ECC Offset: 0x8) ECC status register -------- 
AT91C_ECC_RECERR          EQU (0x1:SHL:0) ;- (ECC) ECC error
AT91C_ECC_ECCERR          EQU (0x1:SHL:1) ;- (ECC) ECC single error
AT91C_ECC_MULERR          EQU (0x1:SHL:2) ;- (ECC) ECC_MULERR
;- -------- ECC_PR : (ECC Offset: 0xc) ECC parity register -------- 
AT91C_ECC_BITADDR         EQU (0xF:SHL:0) ;- (ECC) Bit address error
AT91C_ECC_WORDADDR        EQU (0xFFF:SHL:4) ;- (ECC) address of the failing bit
;- -------- ECC_NPR : (ECC Offset: 0x10) ECC N parity register -------- 
AT91C_ECC_NPARITY         EQU (0xFFFF:SHL:0) ;- (ECC) ECC parity N 
;- -------- ECC_VR : (ECC Offset: 0xfc) ECC version register -------- 
AT91C_ECC_VR              EQU (0xF:SHL:0) ;- (ECC) ECC version register

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
MATRIX_MCFG0    #  4 ;-  Master Configuration Register 0 (ram96k)     
MATRIX_MCFG1    #  4 ;-  Master Configuration Register 1 (rom)    
MATRIX_MCFG2    #  4 ;-  Master Configuration Register 2 (hperiphs) 
MATRIX_MCFG3    #  4 ;-  Master Configuration Register 3 (ebi)
MATRIX_MCFG4    #  4 ;-  Master Configuration Register 4 (bridge)    
MATRIX_MCFG5    #  4 ;-  Master Configuration Register 5 (mailbox)    
MATRIX_MCFG6    #  4 ;-  Master Configuration Register 6 (ram16k)  
MATRIX_MCFG7    #  4 ;-  Master Configuration Register 7 (teak_prog)     
                # 32 ;- Reserved
MATRIX_SCFG0    #  4 ;-  Slave Configuration Register 0 (ram96k)     
MATRIX_SCFG1    #  4 ;-  Slave Configuration Register 1 (rom)    
MATRIX_SCFG2    #  4 ;-  Slave Configuration Register 2 (hperiphs) 
MATRIX_SCFG3    #  4 ;-  Slave Configuration Register 3 (ebi)
MATRIX_SCFG4    #  4 ;-  Slave Configuration Register 4 (bridge)    
                # 44 ;- Reserved
MATRIX_PRAS0    #  4 ;-  PRAS0 (ram0) 
MATRIX_PRBS0    #  4 ;-  PRBS0 (ram0) 
MATRIX_PRAS1    #  4 ;-  PRAS1 (ram1) 
MATRIX_PRBS1    #  4 ;-  PRBS1 (ram1) 
MATRIX_PRAS2    #  4 ;-  PRAS2 (ram2) 
MATRIX_PRBS2    #  4 ;-  PRBS2 (ram2) 
                # 104 ;- Reserved
MATRIX_MRCR     #  4 ;-  Master Remp Control Register 
                # 24 ;- Reserved
MATRIX_EBI      #  4 ;-  Slave 3 (ebi) Special Function Register
                # 12 ;- Reserved
MATRIX_TEAKCFG  #  4 ;-  Slave 7 (teak_prog) Special Function Register
                # 204 ;- Reserved
MATRIX_VERSION  #  4 ;-  Version Register
;- -------- MATRIX_SCFG0 : (MATRIX Offset: 0x40) Slave Configuration Register 0 -------- 
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
AT91C_MATRIX_FIXED_DEFMSTR0_DMA EQU (0x4:SHL:18) ;- (MATRIX) DMA Master is Default Master
;- -------- MATRIX_SCFG1 : (MATRIX Offset: 0x44) Slave Configuration Register 1 -------- 
AT91C_MATRIX_FIXED_DEFMSTR1 EQU (0x7:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_HPDC3 EQU (0x2:SHL:18) ;- (MATRIX) HPDC3 Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_LCDC EQU (0x3:SHL:18) ;- (MATRIX) LCDC Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR1_DMA EQU (0x4:SHL:18) ;- (MATRIX) DMA Master is Default Master
;- -------- MATRIX_SCFG2 : (MATRIX Offset: 0x48) Slave Configuration Register 2 -------- 
AT91C_MATRIX_FIXED_DEFMSTR2 EQU (0x1:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR2_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR2_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
;- -------- MATRIX_SCFG3 : (MATRIX Offset: 0x4c) Slave Configuration Register 3 -------- 
AT91C_MATRIX_FIXED_DEFMSTR3 EQU (0x7:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_HPDC3 EQU (0x2:SHL:18) ;- (MATRIX) HPDC3 Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_LCDC EQU (0x3:SHL:18) ;- (MATRIX) LCDC Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR3_DMA EQU (0x4:SHL:18) ;- (MATRIX) DMA Master is Default Master
;- -------- MATRIX_SCFG4 : (MATRIX Offset: 0x50) Slave Configuration Register 4 -------- 
AT91C_MATRIX_FIXED_DEFMSTR4 EQU (0x3:SHL:18) ;- (MATRIX) Fixed Index of Default Master
AT91C_MATRIX_FIXED_DEFMSTR4_ARM926I EQU (0x0:SHL:18) ;- (MATRIX) ARM926EJ-S Instruction Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR4_ARM926D EQU (0x1:SHL:18) ;- (MATRIX) ARM926EJ-S Data Master is Default Master
AT91C_MATRIX_FIXED_DEFMSTR4_HPDC3 EQU (0x2:SHL:18) ;- (MATRIX) HPDC3 Master is Default Master
;- -------- MATRIX_MRCR : (MATRIX Offset: 0x100) MRCR Register -------- 
AT91C_MATRIX_RCA926I      EQU (0x1:SHL:0) ;- (MATRIX) Remap Command for ARM926EJ-S Instruction Master
AT91C_MATRIX_RCA926D      EQU (0x1:SHL:1) ;- (MATRIX) Remap Command for ARM926EJ-S Data Master
;- -------- MATRIX_EBI : (MATRIX Offset: 0x11c) EBI (Slave 3) Special Function Register -------- 
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
;- -------- MATRIX_TEAKCFG : (MATRIX Offset: 0x12c) Slave 7 Special Function Register -------- 
AT91C_TEAK_PROGRAM_ACCESS EQU (0x1:SHL:0) ;- (MATRIX) TEAK program memory access from AHB
AT91C_TEAK_PROGRAM_ACCESS_DISABLED EQU (0x0) ;- (MATRIX) TEAK program access disabled
AT91C_TEAK_PROGRAM_ACCESS_ENABLED EQU (0x1) ;- (MATRIX) TEAK program access enabled
AT91C_TEAK_BOOT           EQU (0x1:SHL:1) ;- (MATRIX) TEAK program start from boot routine
AT91C_TEAK_BOOT_DISABLED  EQU (0x0:SHL:1) ;- (MATRIX) TEAK program starts from boot routine disabled
AT91C_TEAK_BOOT_ENABLED   EQU (0x1:SHL:1) ;- (MATRIX) TEAK program starts from boot routine enabled
AT91C_TEAK_NRESET         EQU (0x1:SHL:2) ;- (MATRIX) active low TEAK reset
AT91C_TEAK_NRESET_ENABLED EQU (0x0:SHL:2) ;- (MATRIX) active low TEAK reset enabled
AT91C_TEAK_NRESET_DISABLED EQU (0x1:SHL:2) ;- (MATRIX) active low TEAK reset disabled
AT91C_TEAK_LVECTORP       EQU (0x3FFFF:SHL:14) ;- (MATRIX) boot routine start address

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Chip Configuration Registers
;- *****************************************************************************
                ^ 0 ;- AT91S_CCFG
                # 12 ;- Reserved
CCFG_EBICSA     #  4 ;-  EBI Chip Select Assignement Register
                # 220 ;- Reserved
CCFG_MATRIXVERSION #  4 ;-  Version Register
;- -------- CCFG_EBICSA : (CCFG Offset: 0xc) EBI Chip Select Assignement Register -------- 
AT91C_EBI_CS1A            EQU (0x1:SHL:1) ;- (CCFG) Chip Select 1 Assignment
AT91C_EBI_CS1A_SMC        EQU (0x0:SHL:1) ;- (CCFG) Chip Select 1 is assigned to the Static Memory Controller.
AT91C_EBI_CS1A_SDRAMC     EQU (0x1:SHL:1) ;- (CCFG) Chip Select 1 is assigned to the SDRAM Controller.
AT91C_EBI_CS3A            EQU (0x1:SHL:3) ;- (CCFG) Chip Select 3 Assignment
AT91C_EBI_CS3A_SMC        EQU (0x0:SHL:3) ;- (CCFG) Chip Select 3 is only assigned to the Static Memory Controller and NCS3 behaves as defined by the SMC.
AT91C_EBI_CS3A_SM         EQU (0x1:SHL:3) ;- (CCFG) Chip Select 3 is assigned to the Static Memory Controller and the SmartMedia Logic is activated.
AT91C_EBI_CS4A            EQU (0x1:SHL:4) ;- (CCFG) Chip Select 4 Assignment
AT91C_EBI_CS4A_SMC        EQU (0x0:SHL:4) ;- (CCFG) Chip Select 4 is only assigned to the Static Memory Controller and NCS4 behaves as defined by the SMC.
AT91C_EBI_CS4A_CF         EQU (0x1:SHL:4) ;- (CCFG) Chip Select 4 is assigned to the Static Memory Controller and the CompactFlash Logic (first slot) is activated.
AT91C_EBI_CS5A            EQU (0x1:SHL:5) ;- (CCFG) Chip Select 5 Assignment
AT91C_EBI_CS5A_SMC        EQU (0x0:SHL:5) ;- (CCFG) Chip Select 5 is only assigned to the Static Memory Controller and NCS5 behaves as defined by the SMC
AT91C_EBI_CS5A_CF         EQU (0x1:SHL:5) ;- (CCFG) Chip Select 5 is assigned to the Static Memory Controller and the CompactFlash Logic (second slot) is activated.
AT91C_EBI_DBPUC           EQU (0x1:SHL:8) ;- (CCFG) Data Bus Pull-up Configuration

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
AT91C_AIC_SRCTYPE_INT_LEVEL_SENSITIVE EQU (0x0:SHL:5) ;- (AIC) Internal Sources Code Label Level Sensitive
AT91C_AIC_SRCTYPE_INT_EDGE_TRIGGERED EQU (0x1:SHL:5) ;- (AIC) Internal Sources Code Label Edge triggered
AT91C_AIC_SRCTYPE_EXT_HIGH_LEVEL EQU (0x2:SHL:5) ;- (AIC) External Sources Code Label High-level Sensitive
AT91C_AIC_SRCTYPE_EXT_POSITIVE_EDGE EQU (0x3:SHL:5) ;- (AIC) External Sources Code Label Positive Edge triggered
;- -------- AIC_CISR : (AIC Offset: 0x114) AIC Core Interrupt Status Register -------- 
AT91C_AIC_NFIQ            EQU (0x1:SHL:0) ;- (AIC) NFIQ Status
AT91C_AIC_NIRQ            EQU (0x1:SHL:1) ;- (AIC) NIRQ Status
;- -------- AIC_DCR : (AIC Offset: 0x138) AIC Debug Control Register (Protect) -------- 
AT91C_AIC_DCR_PROT        EQU (0x1:SHL:0) ;- (AIC) Protection Mode
AT91C_AIC_DCR_GMSK        EQU (0x1:SHL:1) ;- (AIC) General Mask

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
;- -------- PMC_IDR : (PMC Offset: 0x64) PMC Interrupt Disable Register -------- 
;- -------- PMC_SR : (PMC Offset: 0x68) PMC Status Register -------- 
AT91C_PMC_OSCSEL          EQU (0x1:SHL:7) ;- (PMC) 32kHz Oscillator selection status
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
AT91C_SHDWC_WKMODE1       EQU (0x3:SHL:8) ;- (SHDWC) Wake Up 1 Mode Selection
AT91C_SHDWC_WKMODE1_NONE  EQU (0x0:SHL:8) ;- (SHDWC) None. No detection is performed on the wake up input.
AT91C_SHDWC_WKMODE1_HIGH  EQU (0x1:SHL:8) ;- (SHDWC) High Level.
AT91C_SHDWC_WKMODE1_LOW   EQU (0x2:SHL:8) ;- (SHDWC) Low Level.
AT91C_SHDWC_WKMODE1_ANYLEVEL EQU (0x3:SHL:8) ;- (SHDWC) Any level change.
AT91C_SHDWC_CPTWK1        EQU (0xF:SHL:12) ;- (SHDWC) Counter On Wake Up 1
AT91C_SHDWC_RTTWKEN       EQU (0x1:SHL:16) ;- (SHDWC) Real Time Timer Wake Up Enable
AT91C_SHDWC_RTCWKEN       EQU (0x1:SHL:17) ;- (SHDWC) Real Time Clock Wake Up Enable
;- -------- SHDWC_SHSR : (SHDWC Offset: 0x8) Shut Down Status Register -------- 
AT91C_SHDWC_WAKEUP0       EQU (0x1:SHL:0) ;- (SHDWC) Wake Up 0 Status
AT91C_SHDWC_WAKEUP1       EQU (0x1:SHL:1) ;- (SHDWC) Wake Up 1 Status
AT91C_SHDWC_FWKUP         EQU (0x1:SHL:2) ;- (SHDWC) Force Wake Up Status
AT91C_SHDWC_RTTWK         EQU (0x1:SHL:16) ;- (SHDWC) Real Time Timer wake Up
AT91C_SHDWC_RTCWK         EQU (0x1:SHL:17) ;- (SHDWC) Real Time Clock wake Up

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
;-              SOFTWARE API DEFINITION  FOR Multimedia Card Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_MCI
MCI_CR          #  4 ;- MCI Control Register
MCI_MR          #  4 ;- MCI Mode Register
MCI_DTOR        #  4 ;- MCI Data Timeout Register
MCI_SDCR        #  4 ;- MCI SD Card Register
MCI_ARGR        #  4 ;- MCI Argument Register
MCI_CMDR        #  4 ;- MCI Command Register
MCI_BLKR        #  4 ;- MCI Block Register
                #  4 ;- Reserved
MCI_RSPR        # 16 ;- MCI Response Register
MCI_RDR         #  4 ;- MCI Receive Data Register
MCI_TDR         #  4 ;- MCI Transmit Data Register
                #  8 ;- Reserved
MCI_SR          #  4 ;- MCI Status Register
MCI_IER         #  4 ;- MCI Interrupt Enable Register
MCI_IDR         #  4 ;- MCI Interrupt Disable Register
MCI_IMR         #  4 ;- MCI Interrupt Mask Register
                # 172 ;- Reserved
MCI_VR          #  4 ;- MCI Version Register
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
AT91C_MCI_RDPROOF         EQU (0x1:SHL:11) ;- (MCI) Read Proof Enable
AT91C_MCI_WRPROOF         EQU (0x1:SHL:12) ;- (MCI) Write Proof Enable
AT91C_MCI_PDCFBYTE        EQU (0x1:SHL:13) ;- (MCI) PDC Force Byte Transfer
AT91C_MCI_PDCPADV         EQU (0x1:SHL:14) ;- (MCI) PDC Padding Value
AT91C_MCI_PDCMODE         EQU (0x1:SHL:15) ;- (MCI) PDC Oriented Mode
AT91C_MCI_BLKLEN          EQU (0xFFFF:SHL:16) ;- (MCI) Data Block Length
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
AT91C_MCI_SCDSEL          EQU (0x3:SHL:0) ;- (MCI) SD Card Selector
AT91C_MCI_SCDBUS          EQU (0x1:SHL:7) ;- (MCI) SDCard/SDIO Bus Width
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
AT91C_MCI_TRTYP           EQU (0x7:SHL:19) ;- (MCI) Transfer Type
AT91C_MCI_TRTYP_BLOCK     EQU (0x0:SHL:19) ;- (MCI) MMC/SDCard Single Block Transfer type
AT91C_MCI_TRTYP_MULTIPLE  EQU (0x1:SHL:19) ;- (MCI) MMC/SDCard Multiple Block transfer type
AT91C_MCI_TRTYP_STREAM    EQU (0x2:SHL:19) ;- (MCI) MMC Stream transfer type
AT91C_MCI_TRTYP_SDIO_BYTE EQU (0x4:SHL:19) ;- (MCI) SDIO Byte transfer type
AT91C_MCI_TRTYP_SDIO_BLOCK EQU (0x5:SHL:19) ;- (MCI) SDIO Block transfer type
AT91C_MCI_IOSPCMD         EQU (0x3:SHL:24) ;- (MCI) SDIO Special Command
AT91C_MCI_IOSPCMD_NONE    EQU (0x0:SHL:24) ;- (MCI) NOT a special command
AT91C_MCI_IOSPCMD_SUSPEND EQU (0x1:SHL:24) ;- (MCI) SDIO Suspend Command
AT91C_MCI_IOSPCMD_RESUME  EQU (0x2:SHL:24) ;- (MCI) SDIO Resume Command
;- -------- MCI_BLKR : (MCI Offset: 0x18) MCI Block Register -------- 
AT91C_MCI_BCNT            EQU (0xFFFF:SHL:0) ;- (MCI) MMC/SDIO Block Count / SDIO Byte Count
;- -------- MCI_SR : (MCI Offset: 0x40) MCI Status Register -------- 
AT91C_MCI_CMDRDY          EQU (0x1:SHL:0) ;- (MCI) Command Ready flag
AT91C_MCI_RXRDY           EQU (0x1:SHL:1) ;- (MCI) RX Ready flag
AT91C_MCI_TXRDY           EQU (0x1:SHL:2) ;- (MCI) TX Ready flag
AT91C_MCI_BLKE            EQU (0x1:SHL:3) ;- (MCI) Data Block Transfer Ended flag
AT91C_MCI_DTIP            EQU (0x1:SHL:4) ;- (MCI) Data Transfer in Progress flag
AT91C_MCI_NOTBUSY         EQU (0x1:SHL:5) ;- (MCI) Data Line Not Busy flag
AT91C_MCI_ENDRX           EQU (0x1:SHL:6) ;- (MCI) End of RX Buffer flag
AT91C_MCI_ENDTX           EQU (0x1:SHL:7) ;- (MCI) End of TX Buffer flag
AT91C_MCI_SDIOIRQA        EQU (0x1:SHL:8) ;- (MCI) SDIO Interrupt for Slot A
AT91C_MCI_SDIOIRQB        EQU (0x1:SHL:9) ;- (MCI) SDIO Interrupt for Slot B
AT91C_MCI_SDIOIRQC        EQU (0x1:SHL:10) ;- (MCI) SDIO Interrupt for Slot C
AT91C_MCI_SDIOIRQD        EQU (0x1:SHL:11) ;- (MCI) SDIO Interrupt for Slot D
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
;-              SOFTWARE API DEFINITION  FOR Analog to Digital Convertor
;- *****************************************************************************
                ^ 0 ;- AT91S_ADC
ADC_CR          #  4 ;- ADC Control Register
ADC_MR          #  4 ;- ADC Mode Register
                #  8 ;- Reserved
ADC_CHER        #  4 ;- ADC Channel Enable Register
ADC_CHDR        #  4 ;- ADC Channel Disable Register
ADC_CHSR        #  4 ;- ADC Channel Status Register
ADC_SR          #  4 ;- ADC Status Register
ADC_LCDR        #  4 ;- ADC Last Converted Data Register
ADC_IER         #  4 ;- ADC Interrupt Enable Register
ADC_IDR         #  4 ;- ADC Interrupt Disable Register
ADC_IMR         #  4 ;- ADC Interrupt Mask Register
ADC_CDR0        #  4 ;- ADC Channel Data Register 0
ADC_CDR1        #  4 ;- ADC Channel Data Register 1
ADC_CDR2        #  4 ;- ADC Channel Data Register 2
ADC_CDR3        #  4 ;- ADC Channel Data Register 3
ADC_CDR4        #  4 ;- ADC Channel Data Register 4
ADC_CDR5        #  4 ;- ADC Channel Data Register 5
ADC_CDR6        #  4 ;- ADC Channel Data Register 6
ADC_CDR7        #  4 ;- ADC Channel Data Register 7
                # 176 ;- Reserved
ADC_RPR         #  4 ;- Receive Pointer Register
ADC_RCR         #  4 ;- Receive Counter Register
ADC_TPR         #  4 ;- Transmit Pointer Register
ADC_TCR         #  4 ;- Transmit Counter Register
ADC_RNPR        #  4 ;- Receive Next Pointer Register
ADC_RNCR        #  4 ;- Receive Next Counter Register
ADC_TNPR        #  4 ;- Transmit Next Pointer Register
ADC_TNCR        #  4 ;- Transmit Next Counter Register
ADC_PTCR        #  4 ;- PDC Transfer Control Register
ADC_PTSR        #  4 ;- PDC Transfer Status Register
;- -------- ADC_CR : (ADC Offset: 0x0) ADC Control Register -------- 
AT91C_ADC_SWRST           EQU (0x1:SHL:0) ;- (ADC) Software Reset
AT91C_ADC_START           EQU (0x1:SHL:1) ;- (ADC) Start Conversion
;- -------- ADC_MR : (ADC Offset: 0x4) ADC Mode Register -------- 
AT91C_ADC_TRGEN           EQU (0x1:SHL:0) ;- (ADC) Trigger Enable
AT91C_ADC_TRGEN_DIS       EQU (0x0) ;- (ADC) Hradware triggers are disabled. Starting a conversion is only possible by software
AT91C_ADC_TRGEN_EN        EQU (0x1) ;- (ADC) Hardware trigger selected by TRGSEL field is enabled.
AT91C_ADC_TRGSEL          EQU (0x7:SHL:1) ;- (ADC) Trigger Selection
AT91C_ADC_TRGSEL_TIOA0    EQU (0x0:SHL:1) ;- (ADC) Selected TRGSEL = TIAO0
AT91C_ADC_TRGSEL_TIOA1    EQU (0x1:SHL:1) ;- (ADC) Selected TRGSEL = TIAO1
AT91C_ADC_TRGSEL_TIOA2    EQU (0x2:SHL:1) ;- (ADC) Selected TRGSEL = TIAO2
AT91C_ADC_TRGSEL_TIOA3    EQU (0x3:SHL:1) ;- (ADC) Selected TRGSEL = TIAO3
AT91C_ADC_TRGSEL_TIOA4    EQU (0x4:SHL:1) ;- (ADC) Selected TRGSEL = TIAO4
AT91C_ADC_TRGSEL_TIOA5    EQU (0x5:SHL:1) ;- (ADC) Selected TRGSEL = TIAO5
AT91C_ADC_TRGSEL_EXT      EQU (0x6:SHL:1) ;- (ADC) Selected TRGSEL = External Trigger
AT91C_ADC_LOWRES          EQU (0x1:SHL:4) ;- (ADC) Resolution.
AT91C_ADC_LOWRES_10_BIT   EQU (0x0:SHL:4) ;- (ADC) 10-bit resolution
AT91C_ADC_LOWRES_8_BIT    EQU (0x1:SHL:4) ;- (ADC) 8-bit resolution
AT91C_ADC_SLEEP           EQU (0x1:SHL:5) ;- (ADC) Sleep Mode
AT91C_ADC_SLEEP_NORMAL_MODE EQU (0x0:SHL:5) ;- (ADC) Normal Mode
AT91C_ADC_SLEEP_MODE      EQU (0x1:SHL:5) ;- (ADC) Sleep Mode
AT91C_ADC_PRESCAL         EQU (0x3F:SHL:8) ;- (ADC) Prescaler rate selection
AT91C_ADC_STARTUP         EQU (0x1F:SHL:16) ;- (ADC) Startup Time
AT91C_ADC_SHTIM           EQU (0xF:SHL:24) ;- (ADC) Sample & Hold Time
;- -------- 	ADC_CHER : (ADC Offset: 0x10) ADC Channel Enable Register -------- 
AT91C_ADC_CH0             EQU (0x1:SHL:0) ;- (ADC) Channel 0
AT91C_ADC_CH1             EQU (0x1:SHL:1) ;- (ADC) Channel 1
AT91C_ADC_CH2             EQU (0x1:SHL:2) ;- (ADC) Channel 2
AT91C_ADC_CH3             EQU (0x1:SHL:3) ;- (ADC) Channel 3
AT91C_ADC_CH4             EQU (0x1:SHL:4) ;- (ADC) Channel 4
AT91C_ADC_CH5             EQU (0x1:SHL:5) ;- (ADC) Channel 5
AT91C_ADC_CH6             EQU (0x1:SHL:6) ;- (ADC) Channel 6
AT91C_ADC_CH7             EQU (0x1:SHL:7) ;- (ADC) Channel 7
;- -------- 	ADC_CHDR : (ADC Offset: 0x14) ADC Channel Disable Register -------- 
;- -------- 	ADC_CHSR : (ADC Offset: 0x18) ADC Channel Status Register -------- 
;- -------- ADC_SR : (ADC Offset: 0x1c) ADC Status Register -------- 
AT91C_ADC_EOC0            EQU (0x1:SHL:0) ;- (ADC) End of Conversion
AT91C_ADC_EOC1            EQU (0x1:SHL:1) ;- (ADC) End of Conversion
AT91C_ADC_EOC2            EQU (0x1:SHL:2) ;- (ADC) End of Conversion
AT91C_ADC_EOC3            EQU (0x1:SHL:3) ;- (ADC) End of Conversion
AT91C_ADC_EOC4            EQU (0x1:SHL:4) ;- (ADC) End of Conversion
AT91C_ADC_EOC5            EQU (0x1:SHL:5) ;- (ADC) End of Conversion
AT91C_ADC_EOC6            EQU (0x1:SHL:6) ;- (ADC) End of Conversion
AT91C_ADC_EOC7            EQU (0x1:SHL:7) ;- (ADC) End of Conversion
AT91C_ADC_OVRE0           EQU (0x1:SHL:8) ;- (ADC) Overrun Error
AT91C_ADC_OVRE1           EQU (0x1:SHL:9) ;- (ADC) Overrun Error
AT91C_ADC_OVRE2           EQU (0x1:SHL:10) ;- (ADC) Overrun Error
AT91C_ADC_OVRE3           EQU (0x1:SHL:11) ;- (ADC) Overrun Error
AT91C_ADC_OVRE4           EQU (0x1:SHL:12) ;- (ADC) Overrun Error
AT91C_ADC_OVRE5           EQU (0x1:SHL:13) ;- (ADC) Overrun Error
AT91C_ADC_OVRE6           EQU (0x1:SHL:14) ;- (ADC) Overrun Error
AT91C_ADC_OVRE7           EQU (0x1:SHL:15) ;- (ADC) Overrun Error
AT91C_ADC_DRDY            EQU (0x1:SHL:16) ;- (ADC) Data Ready
AT91C_ADC_GOVRE           EQU (0x1:SHL:17) ;- (ADC) General Overrun
AT91C_ADC_ENDRX           EQU (0x1:SHL:18) ;- (ADC) End of Receiver Transfer
AT91C_ADC_RXBUFF          EQU (0x1:SHL:19) ;- (ADC) RXBUFF Interrupt
;- -------- ADC_LCDR : (ADC Offset: 0x20) ADC Last Converted Data Register -------- 
AT91C_ADC_LDATA           EQU (0x3FF:SHL:0) ;- (ADC) Last Data Converted
;- -------- ADC_IER : (ADC Offset: 0x24) ADC Interrupt Enable Register -------- 
;- -------- ADC_IDR : (ADC Offset: 0x28) ADC Interrupt Disable Register -------- 
;- -------- ADC_IMR : (ADC Offset: 0x2c) ADC Interrupt Mask Register -------- 
;- -------- ADC_CDR0 : (ADC Offset: 0x30) ADC Channel Data Register 0 -------- 
AT91C_ADC_DATA            EQU (0x3FF:SHL:0) ;- (ADC) Converted Data
;- -------- ADC_CDR1 : (ADC Offset: 0x34) ADC Channel Data Register 1 -------- 
;- -------- ADC_CDR2 : (ADC Offset: 0x38) ADC Channel Data Register 2 -------- 
;- -------- ADC_CDR3 : (ADC Offset: 0x3c) ADC Channel Data Register 3 -------- 
;- -------- ADC_CDR4 : (ADC Offset: 0x40) ADC Channel Data Register 4 -------- 
;- -------- ADC_CDR5 : (ADC Offset: 0x44) ADC Channel Data Register 5 -------- 
;- -------- ADC_CDR6 : (ADC Offset: 0x48) ADC Channel Data Register 6 -------- 
;- -------- ADC_CDR7 : (ADC Offset: 0x4c) ADC Channel Data Register 7 -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Ethernet MAC 10/100
;- *****************************************************************************
                ^ 0 ;- AT91S_EMAC
EMAC_NCR        #  4 ;- Network Control Register
EMAC_NCFGR      #  4 ;- Network Configuration Register
EMAC_NSR        #  4 ;- Network Status Register
                #  8 ;- Reserved
EMAC_TSR        #  4 ;- Transmit Status Register
EMAC_RBQP       #  4 ;- Receive Buffer Queue Pointer
EMAC_TBQP       #  4 ;- Transmit Buffer Queue Pointer
EMAC_RSR        #  4 ;- Receive Status Register
EMAC_ISR        #  4 ;- Interrupt Status Register
EMAC_IER        #  4 ;- Interrupt Enable Register
EMAC_IDR        #  4 ;- Interrupt Disable Register
EMAC_IMR        #  4 ;- Interrupt Mask Register
EMAC_MAN        #  4 ;- PHY Maintenance Register
EMAC_PTR        #  4 ;- Pause Time Register
EMAC_PFR        #  4 ;- Pause Frames received Register
EMAC_FTO        #  4 ;- Frames Transmitted OK Register
EMAC_SCF        #  4 ;- Single Collision Frame Register
EMAC_MCF        #  4 ;- Multiple Collision Frame Register
EMAC_FRO        #  4 ;- Frames Received OK Register
EMAC_FCSE       #  4 ;- Frame Check Sequence Error Register
EMAC_ALE        #  4 ;- Alignment Error Register
EMAC_DTF        #  4 ;- Deferred Transmission Frame Register
EMAC_LCOL       #  4 ;- Late Collision Register
EMAC_ECOL       #  4 ;- Excessive Collision Register
EMAC_TUND       #  4 ;- Transmit Underrun Error Register
EMAC_CSE        #  4 ;- Carrier Sense Error Register
EMAC_RRE        #  4 ;- Receive Ressource Error Register
EMAC_ROV        #  4 ;- Receive Overrun Errors Register
EMAC_RSE        #  4 ;- Receive Symbol Errors Register
EMAC_ELE        #  4 ;- Excessive Length Errors Register
EMAC_RJA        #  4 ;- Receive Jabbers Register
EMAC_USF        #  4 ;- Undersize Frames Register
EMAC_STE        #  4 ;- SQE Test Error Register
EMAC_RLE        #  4 ;- Receive Length Field Mismatch Register
EMAC_TPF        #  4 ;- Transmitted Pause Frames Register
EMAC_HRB        #  4 ;- Hash Address Bottom[31:0]
EMAC_HRT        #  4 ;- Hash Address Top[63:32]
EMAC_SA1L       #  4 ;- Specific Address 1 Bottom, First 4 bytes
EMAC_SA1H       #  4 ;- Specific Address 1 Top, Last 2 bytes
EMAC_SA2L       #  4 ;- Specific Address 2 Bottom, First 4 bytes
EMAC_SA2H       #  4 ;- Specific Address 2 Top, Last 2 bytes
EMAC_SA3L       #  4 ;- Specific Address 3 Bottom, First 4 bytes
EMAC_SA3H       #  4 ;- Specific Address 3 Top, Last 2 bytes
EMAC_SA4L       #  4 ;- Specific Address 4 Bottom, First 4 bytes
EMAC_SA4H       #  4 ;- Specific Address 4 Top, Last 2 bytes
EMAC_TID        #  4 ;- Type ID Checking Register
EMAC_TPQ        #  4 ;- Transmit Pause Quantum Register
EMAC_USRIO      #  4 ;- USER Input/Output Register
EMAC_WOL        #  4 ;- Wake On LAN Register
                # 52 ;- Reserved
EMAC_REV        #  4 ;- Revision Register
;- -------- EMAC_NCR : (EMAC Offset: 0x0)  -------- 
AT91C_EMAC_LB             EQU (0x1:SHL:0) ;- (EMAC) Loopback. Optional. When set, loopback signal is at high level.
AT91C_EMAC_LLB            EQU (0x1:SHL:1) ;- (EMAC) Loopback local. 
AT91C_EMAC_RE             EQU (0x1:SHL:2) ;- (EMAC) Receive enable. 
AT91C_EMAC_TE             EQU (0x1:SHL:3) ;- (EMAC) Transmit enable. 
AT91C_EMAC_MPE            EQU (0x1:SHL:4) ;- (EMAC) Management port enable. 
AT91C_EMAC_CLRSTAT        EQU (0x1:SHL:5) ;- (EMAC) Clear statistics registers. 
AT91C_EMAC_INCSTAT        EQU (0x1:SHL:6) ;- (EMAC) Increment statistics registers. 
AT91C_EMAC_WESTAT         EQU (0x1:SHL:7) ;- (EMAC) Write enable for statistics registers. 
AT91C_EMAC_BP             EQU (0x1:SHL:8) ;- (EMAC) Back pressure. 
AT91C_EMAC_TSTART         EQU (0x1:SHL:9) ;- (EMAC) Start Transmission. 
AT91C_EMAC_THALT          EQU (0x1:SHL:10) ;- (EMAC) Transmission Halt. 
AT91C_EMAC_TPFR           EQU (0x1:SHL:11) ;- (EMAC) Transmit pause frame 
AT91C_EMAC_TZQ            EQU (0x1:SHL:12) ;- (EMAC) Transmit zero quantum pause frame
;- -------- EMAC_NCFGR : (EMAC Offset: 0x4) Network Configuration Register -------- 
AT91C_EMAC_SPD            EQU (0x1:SHL:0) ;- (EMAC) Speed. 
AT91C_EMAC_FD             EQU (0x1:SHL:1) ;- (EMAC) Full duplex. 
AT91C_EMAC_JFRAME         EQU (0x1:SHL:3) ;- (EMAC) Jumbo Frames. 
AT91C_EMAC_CAF            EQU (0x1:SHL:4) ;- (EMAC) Copy all frames. 
AT91C_EMAC_NBC            EQU (0x1:SHL:5) ;- (EMAC) No broadcast. 
AT91C_EMAC_MTI            EQU (0x1:SHL:6) ;- (EMAC) Multicast hash event enable
AT91C_EMAC_UNI            EQU (0x1:SHL:7) ;- (EMAC) Unicast hash enable. 
AT91C_EMAC_BIG            EQU (0x1:SHL:8) ;- (EMAC) Receive 1522 bytes. 
AT91C_EMAC_EAE            EQU (0x1:SHL:9) ;- (EMAC) External address match enable. 
AT91C_EMAC_CLK            EQU (0x3:SHL:10) ;- (EMAC) 
AT91C_EMAC_CLK_HCLK_8     EQU (0x0:SHL:10) ;- (EMAC) HCLK divided by 8
AT91C_EMAC_CLK_HCLK_16    EQU (0x1:SHL:10) ;- (EMAC) HCLK divided by 16
AT91C_EMAC_CLK_HCLK_32    EQU (0x2:SHL:10) ;- (EMAC) HCLK divided by 32
AT91C_EMAC_CLK_HCLK_64    EQU (0x3:SHL:10) ;- (EMAC) HCLK divided by 64
AT91C_EMAC_RTY            EQU (0x1:SHL:12) ;- (EMAC) 
AT91C_EMAC_PAE            EQU (0x1:SHL:13) ;- (EMAC) 
AT91C_EMAC_RBOF           EQU (0x3:SHL:14) ;- (EMAC) 
AT91C_EMAC_RBOF_OFFSET_0  EQU (0x0:SHL:14) ;- (EMAC) no offset from start of receive buffer
AT91C_EMAC_RBOF_OFFSET_1  EQU (0x1:SHL:14) ;- (EMAC) one byte offset from start of receive buffer
AT91C_EMAC_RBOF_OFFSET_2  EQU (0x2:SHL:14) ;- (EMAC) two bytes offset from start of receive buffer
AT91C_EMAC_RBOF_OFFSET_3  EQU (0x3:SHL:14) ;- (EMAC) three bytes offset from start of receive buffer
AT91C_EMAC_RLCE           EQU (0x1:SHL:16) ;- (EMAC) Receive Length field Checking Enable
AT91C_EMAC_DRFCS          EQU (0x1:SHL:17) ;- (EMAC) Discard Receive FCS
AT91C_EMAC_EFRHD          EQU (0x1:SHL:18) ;- (EMAC) 
AT91C_EMAC_IRXFCS         EQU (0x1:SHL:19) ;- (EMAC) Ignore RX FCS
;- -------- EMAC_NSR : (EMAC Offset: 0x8) Network Status Register -------- 
AT91C_EMAC_LINKR          EQU (0x1:SHL:0) ;- (EMAC) 
AT91C_EMAC_MDIO           EQU (0x1:SHL:1) ;- (EMAC) 
AT91C_EMAC_IDLE           EQU (0x1:SHL:2) ;- (EMAC) 
;- -------- EMAC_TSR : (EMAC Offset: 0x14) Transmit Status Register -------- 
AT91C_EMAC_UBR            EQU (0x1:SHL:0) ;- (EMAC) 
AT91C_EMAC_COL            EQU (0x1:SHL:1) ;- (EMAC) 
AT91C_EMAC_RLES           EQU (0x1:SHL:2) ;- (EMAC) 
AT91C_EMAC_TGO            EQU (0x1:SHL:3) ;- (EMAC) Transmit Go
AT91C_EMAC_BEX            EQU (0x1:SHL:4) ;- (EMAC) Buffers exhausted mid frame
AT91C_EMAC_COMP           EQU (0x1:SHL:5) ;- (EMAC) 
AT91C_EMAC_UND            EQU (0x1:SHL:6) ;- (EMAC) 
;- -------- EMAC_RSR : (EMAC Offset: 0x20) Receive Status Register -------- 
AT91C_EMAC_BNA            EQU (0x1:SHL:0) ;- (EMAC) 
AT91C_EMAC_REC            EQU (0x1:SHL:1) ;- (EMAC) 
AT91C_EMAC_OVR            EQU (0x1:SHL:2) ;- (EMAC) 
;- -------- EMAC_ISR : (EMAC Offset: 0x24) Interrupt Status Register -------- 
AT91C_EMAC_MFD            EQU (0x1:SHL:0) ;- (EMAC) 
AT91C_EMAC_RCOMP          EQU (0x1:SHL:1) ;- (EMAC) 
AT91C_EMAC_RXUBR          EQU (0x1:SHL:2) ;- (EMAC) 
AT91C_EMAC_TXUBR          EQU (0x1:SHL:3) ;- (EMAC) 
AT91C_EMAC_TUNDR          EQU (0x1:SHL:4) ;- (EMAC) 
AT91C_EMAC_RLEX           EQU (0x1:SHL:5) ;- (EMAC) 
AT91C_EMAC_TXERR          EQU (0x1:SHL:6) ;- (EMAC) 
AT91C_EMAC_TCOMP          EQU (0x1:SHL:7) ;- (EMAC) 
AT91C_EMAC_LINK           EQU (0x1:SHL:9) ;- (EMAC) 
AT91C_EMAC_ROVR           EQU (0x1:SHL:10) ;- (EMAC) 
AT91C_EMAC_HRESP          EQU (0x1:SHL:11) ;- (EMAC) 
AT91C_EMAC_PFRE           EQU (0x1:SHL:12) ;- (EMAC) 
AT91C_EMAC_PTZ            EQU (0x1:SHL:13) ;- (EMAC) 
;- -------- EMAC_IER : (EMAC Offset: 0x28) Interrupt Enable Register -------- 
;- -------- EMAC_IDR : (EMAC Offset: 0x2c) Interrupt Disable Register -------- 
;- -------- EMAC_IMR : (EMAC Offset: 0x30) Interrupt Mask Register -------- 
;- -------- EMAC_MAN : (EMAC Offset: 0x34) PHY Maintenance Register -------- 
AT91C_EMAC_DATA           EQU (0xFFFF:SHL:0) ;- (EMAC) 
AT91C_EMAC_CODE           EQU (0x3:SHL:16) ;- (EMAC) 
AT91C_EMAC_REGA           EQU (0x1F:SHL:18) ;- (EMAC) 
AT91C_EMAC_PHYA           EQU (0x1F:SHL:23) ;- (EMAC) 
AT91C_EMAC_RW             EQU (0x3:SHL:28) ;- (EMAC) 
AT91C_EMAC_SOF            EQU (0x3:SHL:30) ;- (EMAC) 
;- -------- EMAC_USRIO : (EMAC Offset: 0xc0) USER Input Output Register -------- 
AT91C_EMAC_RMII           EQU (0x1:SHL:0) ;- (EMAC) Reduce MII
AT91C_EMAC_CLKEN          EQU (0x1:SHL:1) ;- (EMAC) Clock Enable
;- -------- EMAC_WOL : (EMAC Offset: 0xc4) Wake On LAN Register -------- 
AT91C_EMAC_IP             EQU (0xFFFF:SHL:0) ;- (EMAC) ARP request IP address
AT91C_EMAC_MAG            EQU (0x1:SHL:16) ;- (EMAC) Magic packet event enable
AT91C_EMAC_ARP            EQU (0x1:SHL:17) ;- (EMAC) ARP request event enable
AT91C_EMAC_SA1            EQU (0x1:SHL:18) ;- (EMAC) Specific address register 1 event enable
;- -------- EMAC_REV : (EMAC Offset: 0xfc) Revision Register -------- 
AT91C_EMAC_REVREF         EQU (0xFFFF:SHL:0) ;- (EMAC) 
AT91C_EMAC_PARTREF        EQU (0xFFFF:SHL:16) ;- (EMAC) 

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
;-              SOFTWARE API DEFINITION  FOR Image Sensor Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_ISI
ISI_CR1         #  4 ;- Control Register 1
ISI_CR2         #  4 ;- Control Register 2
ISI_SR          #  4 ;- Status Register
ISI_IER         #  4 ;- Interrupt Enable Register
ISI_IDR         #  4 ;- Interrupt Disable Register
ISI_IMR         #  4 ;- Interrupt Mask Register
                #  8 ;- Reserved
ISI_PSIZE       #  4 ;- Preview Size Register
ISI_PDECF       #  4 ;- Preview Decimation Factor Register
ISI_PFBD        #  4 ;- Preview Frame Buffer Address Register
ISI_CDBA        #  4 ;- Codec Dma Address Register
ISI_Y2RSET0     #  4 ;- Color Space Conversion Register
ISI_Y2RSET1     #  4 ;- Color Space Conversion Register
ISI_R2YSET0     #  4 ;- Color Space Conversion Register
ISI_R2YSET1     #  4 ;- Color Space Conversion Register
ISI_R2YSET2     #  4 ;- Color Space Conversion Register
;- -------- ISI_CR1 : (ISI Offset: 0x0) ISI Control Register 1 -------- 
AT91C_ISI_RST             EQU (0x1:SHL:0) ;- (ISI) Image sensor interface reset
AT91C_ISI_DISABLE         EQU (0x1:SHL:1) ;- (ISI) image sensor disable.
AT91C_ISI_HSYNC_POL       EQU (0x1:SHL:2) ;- (ISI) Horizontal synchronisation polarity
AT91C_ISI_PIXCLK_POL      EQU (0x1:SHL:4) ;- (ISI) Pixel Clock Polarity
AT91C_ISI_EMB_SYNC        EQU (0x1:SHL:6) ;- (ISI) Embedded synchronisation
AT91C_ISI_CRC_SYNC        EQU (0x1:SHL:7) ;- (ISI) CRC correction
AT91C_ISI_FULL            EQU (0x1:SHL:12) ;- (ISI) Full mode is allowed
AT91C_ISI_THMASK          EQU (0x3:SHL:13) ;- (ISI) DMA Burst Mask
AT91C_ISI_THMASK_4_8_16_BURST EQU (0x0:SHL:13) ;- (ISI) 4,8 and 16 AHB burst are allowed
AT91C_ISI_THMASK_8_16_BURST EQU (0x1:SHL:13) ;- (ISI) 8 and 16 AHB burst are allowed
AT91C_ISI_THMASK_16_BURST EQU (0x2:SHL:13) ;- (ISI) Only 16 AHB burst are allowed
AT91C_ISI_CODEC_ON        EQU (0x1:SHL:15) ;- (ISI) Enable the codec path
AT91C_ISI_SLD             EQU (0xFF:SHL:16) ;- (ISI) Start of Line Delay
AT91C_ISI_SFD             EQU (0xFF:SHL:24) ;- (ISI) Start of frame Delay
;- -------- ISI_CR2 : (ISI Offset: 0x4) ISI Control Register 2 -------- 
AT91C_ISI_IM_VSIZE        EQU (0x7FF:SHL:0) ;- (ISI) Vertical size of the Image sensor [0..2047]
AT91C_ISI_GS_MODE         EQU (0x1:SHL:11) ;- (ISI) Grayscale Memory Mode
AT91C_ISI_RGB_MODE        EQU (0x3:SHL:12) ;- (ISI) RGB mode
AT91C_ISI_RGB_MODE_RGB_888 EQU (0x0:SHL:12) ;- (ISI) RGB 8:8:8 24 bits
AT91C_ISI_RGB_MODE_RGB_565 EQU (0x1:SHL:12) ;- (ISI) RGB 5:6:5 16 bits
AT91C_ISI_RGB_MODE_RGB_555 EQU (0x2:SHL:12) ;- (ISI) RGB 5:5:5 16 bits
AT91C_ISI_GRAYSCALE       EQU (0x1:SHL:13) ;- (ISI) Grayscale Mode
AT91C_ISI_RGB_SWAP        EQU (0x1:SHL:14) ;- (ISI) RGB Swap
AT91C_ISI_COL_SPACE       EQU (0x1:SHL:15) ;- (ISI) Color space for the image data
AT91C_ISI_IM_HSIZE        EQU (0x7FF:SHL:16) ;- (ISI) Horizontal size of the Image sensor [0..2047]
AT91C_ISI_RGB_MODE_YCC_DEF EQU (0x0:SHL:28) ;- (ISI) Cb(i) Y(i) Cr(i) Y(i+1)
AT91C_ISI_RGB_MODE_YCC_MOD1 EQU (0x1:SHL:28) ;- (ISI) Cr(i) Y(i) Cb(i) Y(i+1)
AT91C_ISI_RGB_MODE_YCC_MOD2 EQU (0x2:SHL:28) ;- (ISI) Y(i) Cb(i) Y(i+1) Cr(i)
AT91C_ISI_RGB_MODE_YCC_MOD3 EQU (0x3:SHL:28) ;- (ISI) Y(i) Cr(i) Y(i+1) Cb(i)
AT91C_ISI_RGB_CFG         EQU (0x3:SHL:30) ;- (ISI) RGB configuration
AT91C_ISI_RGB_CFG_RGB_DEF EQU (0x0:SHL:30) ;- (ISI) R/G(MSB)  G(LSB)/B  R/G(MSB)  G(LSB)/B
AT91C_ISI_RGB_CFG_RGB_MOD1 EQU (0x1:SHL:30) ;- (ISI) B/G(MSB)  G(LSB)/R  B/G(MSB)  G(LSB)/R
AT91C_ISI_RGB_CFG_RGB_MOD2 EQU (0x2:SHL:30) ;- (ISI) G(LSB)/R  B/G(MSB)  G(LSB)/R  B/G(MSB)
AT91C_ISI_RGB_CFG_RGB_MOD3 EQU (0x3:SHL:30) ;- (ISI) G(LSB)/B  R/G(MSB)  G(LSB)/B  R/G(MSB)
;- -------- ISI_SR : (ISI Offset: 0x8) ISI Status Register -------- 
AT91C_ISI_SOF             EQU (0x1:SHL:0) ;- (ISI) Start of Frame
AT91C_ISI_DIS             EQU (0x1:SHL:1) ;- (ISI) Image Sensor Interface disable
AT91C_ISI_SOFTRST         EQU (0x1:SHL:2) ;- (ISI) Software Reset
AT91C_ISI_CRC_ERR         EQU (0x1:SHL:4) ;- (ISI) CRC synchronisation error
AT91C_ISI_FO_C_OVF        EQU (0x1:SHL:5) ;- (ISI) Fifo Codec Overflow 
AT91C_ISI_FO_P_OVF        EQU (0x1:SHL:6) ;- (ISI) Fifo Preview Overflow 
AT91C_ISI_FO_P_EMP        EQU (0x1:SHL:7) ;- (ISI) Fifo Preview Empty
AT91C_ISI_FO_C_EMP        EQU (0x1:SHL:8) ;- (ISI) Fifo Codec Empty
AT91C_ISI_FR_OVR          EQU (0x1:SHL:9) ;- (ISI) Frame rate overun
;- -------- ISI_IER : (ISI Offset: 0xc) ISI Interrupt Enable Register -------- 
;- -------- ISI_IDR : (ISI Offset: 0x10) ISI Interrupt Disable Register -------- 
;- -------- ISI_IMR : (ISI Offset: 0x14) ISI Interrupt Mask Register -------- 
;- -------- ISI_PSIZE : (ISI Offset: 0x20) ISI Preview Register -------- 
AT91C_ISI_PREV_VSIZE      EQU (0x3FF:SHL:0) ;- (ISI) Vertical size for the preview path
AT91C_ISI_PREV_HSIZE      EQU (0x3FF:SHL:16) ;- (ISI) Horizontal size for the preview path
;- -------- ISI_Y2R_SET0 : (ISI Offset: 0x30) Color Space Conversion YCrCb to RGB Register -------- 
AT91C_ISI_Y2R_C0          EQU (0xFF:SHL:0) ;- (ISI) Color Space Conversion Matrix Coefficient C0
AT91C_ISI_Y2R_C1          EQU (0xFF:SHL:8) ;- (ISI) Color Space Conversion Matrix Coefficient C1
AT91C_ISI_Y2R_C2          EQU (0xFF:SHL:16) ;- (ISI) Color Space Conversion Matrix Coefficient C2
AT91C_ISI_Y2R_C3          EQU (0xFF:SHL:24) ;- (ISI) Color Space Conversion Matrix Coefficient C3
;- -------- ISI_Y2R_SET1 : (ISI Offset: 0x34) ISI Color Space Conversion YCrCb to RGB set 1 Register -------- 
AT91C_ISI_Y2R_C4          EQU (0x1FF:SHL:0) ;- (ISI) Color Space Conversion Matrix Coefficient C4
AT91C_ISI_Y2R_YOFF        EQU (0xFF:SHL:12) ;- (ISI) Color Space Conversion Luninance default offset
AT91C_ISI_Y2R_CROFF       EQU (0xFF:SHL:13) ;- (ISI) Color Space Conversion Red Chrominance default offset
AT91C_ISI_Y2R_CBFF        EQU (0xFF:SHL:14) ;- (ISI) Color Space Conversion Luninance default offset
;- -------- ISI_R2Y_SET0 : (ISI Offset: 0x38) Color Space Conversion RGB to YCrCb set 0 register -------- 
AT91C_ISI_R2Y_C0          EQU (0x7F:SHL:0) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C0
AT91C_ISI_R2Y_C1          EQU (0x7F:SHL:1) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C1
AT91C_ISI_R2Y_C2          EQU (0x7F:SHL:3) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C2
AT91C_ISI_R2Y_ROFF        EQU (0x1:SHL:4) ;- (ISI) Color Space Conversion Red component offset
;- -------- ISI_R2Y_SET1 : (ISI Offset: 0x3c) Color Space Conversion RGB to YCrCb set 1 register -------- 
AT91C_ISI_R2Y_C3          EQU (0x7F:SHL:0) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C3
AT91C_ISI_R2Y_C4          EQU (0x7F:SHL:1) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C4
AT91C_ISI_R2Y_C5          EQU (0x7F:SHL:3) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C5
AT91C_ISI_R2Y_GOFF        EQU (0x1:SHL:4) ;- (ISI) Color Space Conversion Green component offset
;- -------- ISI_R2Y_SET2 : (ISI Offset: 0x40) Color Space Conversion RGB to YCrCb set 2 register -------- 
AT91C_ISI_R2Y_C6          EQU (0x7F:SHL:0) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C6
AT91C_ISI_R2Y_C7          EQU (0x7F:SHL:1) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C7
AT91C_ISI_R2Y_C8          EQU (0x7F:SHL:3) ;- (ISI) Color Space Conversion RGB to YCrCb Matrix coefficient C8
AT91C_ISI_R2Y_BOFF        EQU (0x1:SHL:4) ;- (ISI) Color Space Conversion Blue component offset

;- *****************************************************************************
;-               REGISTER ADDRESS DEFINITION FOR AT91SAM9260
;- *****************************************************************************
;- ========== Register definition for SYS peripheral ========== 
AT91C_SYS_GPBR1           EQU (0xFFFFFFFF) ;- (SYS) General Purpose Register 1
AT91C_SYS_GPBR2           EQU (0xFFFFFFFF) ;- (SYS) General Purpose Register 2
AT91C_SYS_GPBR0           EQU (0xFFFFFFFF) ;- (SYS) General Purpose Register 0
AT91C_SYS_GPBR3           EQU (0xFFFFFFFF) ;- (SYS) General Purpose Register 3
;- ========== Register definition for EBI peripheral ========== 
AT91C_EBI_DUMMY           EQU (0xFFFFEA00) ;- (EBI) Dummy register - Do not use
;- ========== Register definition for HECC peripheral ========== 
AT91C_HECC_VR             EQU (0xFFFFE8FC) ;- (HECC)  ECC Version register
AT91C_HECC_NPR            EQU (0xFFFFE810) ;- (HECC)  ECC Parity N register
AT91C_HECC_SR             EQU (0xFFFFE808) ;- (HECC)  ECC Status register
AT91C_HECC_PR             EQU (0xFFFFE80C) ;- (HECC)  ECC Parity register
AT91C_HECC_MR             EQU (0xFFFFE804) ;- (HECC)  ECC Page size register
AT91C_HECC_CR             EQU (0xFFFFE800) ;- (HECC)  ECC reset register
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
AT91C_MATRIX_MCFG0        EQU (0xFFFFEE00) ;- (MATRIX)  Master Configuration Register 0 (ram96k)     
AT91C_MATRIX_MCFG7        EQU (0xFFFFEE1C) ;- (MATRIX)  Master Configuration Register 7 (teak_prog)     
AT91C_MATRIX_SCFG1        EQU (0xFFFFEE44) ;- (MATRIX)  Slave Configuration Register 1 (rom)    
AT91C_MATRIX_MCFG4        EQU (0xFFFFEE10) ;- (MATRIX)  Master Configuration Register 4 (bridge)    
AT91C_MATRIX_VERSION      EQU (0xFFFFEFFC) ;- (MATRIX)  Version Register
AT91C_MATRIX_MCFG2        EQU (0xFFFFEE08) ;- (MATRIX)  Master Configuration Register 2 (hperiphs) 
AT91C_MATRIX_PRBS0        EQU (0xFFFFEE84) ;- (MATRIX)  PRBS0 (ram0) 
AT91C_MATRIX_SCFG3        EQU (0xFFFFEE4C) ;- (MATRIX)  Slave Configuration Register 3 (ebi)
AT91C_MATRIX_MCFG6        EQU (0xFFFFEE18) ;- (MATRIX)  Master Configuration Register 6 (ram16k)  
AT91C_MATRIX_EBI          EQU (0xFFFFEF1C) ;- (MATRIX)  Slave 3 (ebi) Special Function Register
AT91C_MATRIX_SCFG0        EQU (0xFFFFEE40) ;- (MATRIX)  Slave Configuration Register 0 (ram96k)     
AT91C_MATRIX_PRAS0        EQU (0xFFFFEE80) ;- (MATRIX)  PRAS0 (ram0) 
AT91C_MATRIX_MCFG3        EQU (0xFFFFEE0C) ;- (MATRIX)  Master Configuration Register 3 (ebi)
AT91C_MATRIX_PRAS1        EQU (0xFFFFEE88) ;- (MATRIX)  PRAS1 (ram1) 
AT91C_MATRIX_PRAS2        EQU (0xFFFFEE90) ;- (MATRIX)  PRAS2 (ram2) 
AT91C_MATRIX_SCFG2        EQU (0xFFFFEE48) ;- (MATRIX)  Slave Configuration Register 2 (hperiphs) 
AT91C_MATRIX_MCFG5        EQU (0xFFFFEE14) ;- (MATRIX)  Master Configuration Register 5 (mailbox)    
AT91C_MATRIX_MCFG1        EQU (0xFFFFEE04) ;- (MATRIX)  Master Configuration Register 1 (rom)    
AT91C_MATRIX_MRCR         EQU (0xFFFFEF00) ;- (MATRIX)  Master Remp Control Register 
AT91C_MATRIX_PRBS2        EQU (0xFFFFEE94) ;- (MATRIX)  PRBS2 (ram2) 
AT91C_MATRIX_SCFG4        EQU (0xFFFFEE50) ;- (MATRIX)  Slave Configuration Register 4 (bridge)    
AT91C_MATRIX_TEAKCFG      EQU (0xFFFFEF2C) ;- (MATRIX)  Slave 7 (teak_prog) Special Function Register
AT91C_MATRIX_PRBS1        EQU (0xFFFFEE8C) ;- (MATRIX)  PRBS1 (ram1) 
;- ========== Register definition for CCFG peripheral ========== 
AT91C_CCFG_MATRIXVERSION  EQU (0xFFFFEFFC) ;- (CCFG)  Version Register
AT91C_CCFG_EBICSA         EQU (0xFFFFEF1C) ;- (CCFG)  EBI Chip Select Assignement Register
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
;- ========== Register definition for TC3 peripheral ========== 
AT91C_TC3_IER             EQU (0xFFFDC024) ;- (TC3) Interrupt Enable Register
AT91C_TC3_RB              EQU (0xFFFDC018) ;- (TC3) Register B
AT91C_TC3_CMR             EQU (0xFFFDC004) ;- (TC3) Channel Mode Register (Capture Mode / Waveform Mode)
AT91C_TC3_RC              EQU (0xFFFDC01C) ;- (TC3) Register C
AT91C_TC3_CCR             EQU (0xFFFDC000) ;- (TC3) Channel Control Register
AT91C_TC3_SR              EQU (0xFFFDC020) ;- (TC3) Status Register
AT91C_TC3_CV              EQU (0xFFFDC010) ;- (TC3) Counter Value
AT91C_TC3_RA              EQU (0xFFFDC014) ;- (TC3) Register A
AT91C_TC3_IDR             EQU (0xFFFDC028) ;- (TC3) Interrupt Disable Register
AT91C_TC3_IMR             EQU (0xFFFDC02C) ;- (TC3) Interrupt Mask Register
;- ========== Register definition for TC4 peripheral ========== 
AT91C_TC4_CMR             EQU (0xFFFDC044) ;- (TC4) Channel Mode Register (Capture Mode / Waveform Mode)
AT91C_TC4_RC              EQU (0xFFFDC05C) ;- (TC4) Register C
AT91C_TC4_SR              EQU (0xFFFDC060) ;- (TC4) Status Register
AT91C_TC4_RB              EQU (0xFFFDC058) ;- (TC4) Register B
AT91C_TC4_IER             EQU (0xFFFDC064) ;- (TC4) Interrupt Enable Register
AT91C_TC4_CV              EQU (0xFFFDC050) ;- (TC4) Counter Value
AT91C_TC4_RA              EQU (0xFFFDC054) ;- (TC4) Register A
AT91C_TC4_IDR             EQU (0xFFFDC068) ;- (TC4) Interrupt Disable Register
AT91C_TC4_IMR             EQU (0xFFFDC06C) ;- (TC4) Interrupt Mask Register
AT91C_TC4_CCR             EQU (0xFFFDC040) ;- (TC4) Channel Control Register
;- ========== Register definition for TC5 peripheral ========== 
AT91C_TC5_RB              EQU (0xFFFDC098) ;- (TC5) Register B
AT91C_TC5_RA              EQU (0xFFFDC094) ;- (TC5) Register A
AT91C_TC5_CV              EQU (0xFFFDC090) ;- (TC5) Counter Value
AT91C_TC5_CCR             EQU (0xFFFDC080) ;- (TC5) Channel Control Register
AT91C_TC5_SR              EQU (0xFFFDC0A0) ;- (TC5) Status Register
AT91C_TC5_IER             EQU (0xFFFDC0A4) ;- (TC5) Interrupt Enable Register
AT91C_TC5_IDR             EQU (0xFFFDC0A8) ;- (TC5) Interrupt Disable Register
AT91C_TC5_RC              EQU (0xFFFDC09C) ;- (TC5) Register C
AT91C_TC5_IMR             EQU (0xFFFDC0AC) ;- (TC5) Interrupt Mask Register
AT91C_TC5_CMR             EQU (0xFFFDC084) ;- (TC5) Channel Mode Register (Capture Mode / Waveform Mode)
;- ========== Register definition for TCB0 peripheral ========== 
AT91C_TCB0_BMR            EQU (0xFFFA00C4) ;- (TCB0) TC Block Mode Register
AT91C_TCB0_BCR            EQU (0xFFFA00C0) ;- (TCB0) TC Block Control Register
;- ========== Register definition for TCB1 peripheral ========== 
AT91C_TCB1_BCR            EQU (0xFFFDC0C0) ;- (TCB1) TC Block Control Register
AT91C_TCB1_BMR            EQU (0xFFFDC0C4) ;- (TCB1) TC Block Mode Register
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
AT91C_MCI_VR              EQU (0xFFFA80FC) ;- (MCI) MCI Version Register
AT91C_MCI_IDR             EQU (0xFFFA8048) ;- (MCI) MCI Interrupt Disable Register
AT91C_MCI_DTOR            EQU (0xFFFA8008) ;- (MCI) MCI Data Timeout Register
AT91C_MCI_TDR             EQU (0xFFFA8034) ;- (MCI) MCI Transmit Data Register
AT91C_MCI_IER             EQU (0xFFFA8044) ;- (MCI) MCI Interrupt Enable Register
AT91C_MCI_BLKR            EQU (0xFFFA8018) ;- (MCI) MCI Block Register
AT91C_MCI_MR              EQU (0xFFFA8004) ;- (MCI) MCI Mode Register
AT91C_MCI_IMR             EQU (0xFFFA804C) ;- (MCI) MCI Interrupt Mask Register
AT91C_MCI_CR              EQU (0xFFFA8000) ;- (MCI) MCI Control Register
AT91C_MCI_ARGR            EQU (0xFFFA8010) ;- (MCI) MCI Argument Register
AT91C_MCI_SDCR            EQU (0xFFFA800C) ;- (MCI) MCI SD Card Register
AT91C_MCI_SR              EQU (0xFFFA8040) ;- (MCI) MCI Status Register
AT91C_MCI_RSPR            EQU (0xFFFA8020) ;- (MCI) MCI Response Register
;- ========== Register definition for PDC_TWI peripheral ========== 
AT91C_TWI_PTSR            EQU (0xFFFAC124) ;- (PDC_TWI) PDC Transfer Status Register
AT91C_TWI_RPR             EQU (0xFFFAC100) ;- (PDC_TWI) Receive Pointer Register
AT91C_TWI_RNCR            EQU (0xFFFAC114) ;- (PDC_TWI) Receive Next Counter Register
AT91C_TWI_RCR             EQU (0xFFFAC104) ;- (PDC_TWI) Receive Counter Register
AT91C_TWI_PTCR            EQU (0xFFFAC120) ;- (PDC_TWI) PDC Transfer Control Register
AT91C_TWI_TPR             EQU (0xFFFAC108) ;- (PDC_TWI) Transmit Pointer Register
AT91C_TWI_RNPR            EQU (0xFFFAC110) ;- (PDC_TWI) Receive Next Pointer Register
AT91C_TWI_TNPR            EQU (0xFFFAC118) ;- (PDC_TWI) Transmit Next Pointer Register
AT91C_TWI_TCR             EQU (0xFFFAC10C) ;- (PDC_TWI) Transmit Counter Register
AT91C_TWI_TNCR            EQU (0xFFFAC11C) ;- (PDC_TWI) Transmit Next Counter Register
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
;- ========== Register definition for PDC_US3 peripheral ========== 
AT91C_US3_RNPR            EQU (0xFFFD0110) ;- (PDC_US3) Receive Next Pointer Register
AT91C_US3_RNCR            EQU (0xFFFD0114) ;- (PDC_US3) Receive Next Counter Register
AT91C_US3_PTSR            EQU (0xFFFD0124) ;- (PDC_US3) PDC Transfer Status Register
AT91C_US3_PTCR            EQU (0xFFFD0120) ;- (PDC_US3) PDC Transfer Control Register
AT91C_US3_TCR             EQU (0xFFFD010C) ;- (PDC_US3) Transmit Counter Register
AT91C_US3_TNPR            EQU (0xFFFD0118) ;- (PDC_US3) Transmit Next Pointer Register
AT91C_US3_RCR             EQU (0xFFFD0104) ;- (PDC_US3) Receive Counter Register
AT91C_US3_TPR             EQU (0xFFFD0108) ;- (PDC_US3) Transmit Pointer Register
AT91C_US3_TNCR            EQU (0xFFFD011C) ;- (PDC_US3) Transmit Next Counter Register
AT91C_US3_RPR             EQU (0xFFFD0100) ;- (PDC_US3) Receive Pointer Register
;- ========== Register definition for US3 peripheral ========== 
AT91C_US3_NER             EQU (0xFFFD0044) ;- (US3) Nb Errors Register
AT91C_US3_RTOR            EQU (0xFFFD0024) ;- (US3) Receiver Time-out Register
AT91C_US3_IDR             EQU (0xFFFD000C) ;- (US3) Interrupt Disable Register
AT91C_US3_MR              EQU (0xFFFD0004) ;- (US3) Mode Register
AT91C_US3_FIDI            EQU (0xFFFD0040) ;- (US3) FI_DI_Ratio Register
AT91C_US3_BRGR            EQU (0xFFFD0020) ;- (US3) Baud Rate Generator Register
AT91C_US3_THR             EQU (0xFFFD001C) ;- (US3) Transmitter Holding Register
AT91C_US3_CR              EQU (0xFFFD0000) ;- (US3) Control Register
AT91C_US3_IF              EQU (0xFFFD004C) ;- (US3) IRDA_FILTER Register
AT91C_US3_IER             EQU (0xFFFD0008) ;- (US3) Interrupt Enable Register
AT91C_US3_TTGR            EQU (0xFFFD0028) ;- (US3) Transmitter Time-guard Register
AT91C_US3_RHR             EQU (0xFFFD0018) ;- (US3) Receiver Holding Register
AT91C_US3_IMR             EQU (0xFFFD0010) ;- (US3) Interrupt Mask Register
AT91C_US3_CSR             EQU (0xFFFD0014) ;- (US3) Channel Status Register
;- ========== Register definition for PDC_US4 peripheral ========== 
AT91C_US4_TNCR            EQU (0xFFFD411C) ;- (PDC_US4) Transmit Next Counter Register
AT91C_US4_RPR             EQU (0xFFFD4100) ;- (PDC_US4) Receive Pointer Register
AT91C_US4_RNCR            EQU (0xFFFD4114) ;- (PDC_US4) Receive Next Counter Register
AT91C_US4_TPR             EQU (0xFFFD4108) ;- (PDC_US4) Transmit Pointer Register
AT91C_US4_PTCR            EQU (0xFFFD4120) ;- (PDC_US4) PDC Transfer Control Register
AT91C_US4_TCR             EQU (0xFFFD410C) ;- (PDC_US4) Transmit Counter Register
AT91C_US4_RCR             EQU (0xFFFD4104) ;- (PDC_US4) Receive Counter Register
AT91C_US4_RNPR            EQU (0xFFFD4110) ;- (PDC_US4) Receive Next Pointer Register
AT91C_US4_TNPR            EQU (0xFFFD4118) ;- (PDC_US4) Transmit Next Pointer Register
AT91C_US4_PTSR            EQU (0xFFFD4124) ;- (PDC_US4) PDC Transfer Status Register
;- ========== Register definition for US4 peripheral ========== 
AT91C_US4_BRGR            EQU (0xFFFD4020) ;- (US4) Baud Rate Generator Register
AT91C_US4_THR             EQU (0xFFFD401C) ;- (US4) Transmitter Holding Register
AT91C_US4_RTOR            EQU (0xFFFD4024) ;- (US4) Receiver Time-out Register
AT91C_US4_IMR             EQU (0xFFFD4010) ;- (US4) Interrupt Mask Register
AT91C_US4_NER             EQU (0xFFFD4044) ;- (US4) Nb Errors Register
AT91C_US4_TTGR            EQU (0xFFFD4028) ;- (US4) Transmitter Time-guard Register
AT91C_US4_FIDI            EQU (0xFFFD4040) ;- (US4) FI_DI_Ratio Register
AT91C_US4_MR              EQU (0xFFFD4004) ;- (US4) Mode Register
AT91C_US4_IER             EQU (0xFFFD4008) ;- (US4) Interrupt Enable Register
AT91C_US4_RHR             EQU (0xFFFD4018) ;- (US4) Receiver Holding Register
AT91C_US4_CR              EQU (0xFFFD4000) ;- (US4) Control Register
AT91C_US4_IF              EQU (0xFFFD404C) ;- (US4) IRDA_FILTER Register
AT91C_US4_IDR             EQU (0xFFFD400C) ;- (US4) Interrupt Disable Register
AT91C_US4_CSR             EQU (0xFFFD4014) ;- (US4) Channel Status Register
;- ========== Register definition for PDC_US5 peripheral ========== 
AT91C_US5_PTSR            EQU (0xFFFD8124) ;- (PDC_US5) PDC Transfer Status Register
AT91C_US5_PTCR            EQU (0xFFFD8120) ;- (PDC_US5) PDC Transfer Control Register
AT91C_US5_TNPR            EQU (0xFFFD8118) ;- (PDC_US5) Transmit Next Pointer Register
AT91C_US5_TNCR            EQU (0xFFFD811C) ;- (PDC_US5) Transmit Next Counter Register
AT91C_US5_RNPR            EQU (0xFFFD8110) ;- (PDC_US5) Receive Next Pointer Register
AT91C_US5_RNCR            EQU (0xFFFD8114) ;- (PDC_US5) Receive Next Counter Register
AT91C_US5_RPR             EQU (0xFFFD8100) ;- (PDC_US5) Receive Pointer Register
AT91C_US5_TCR             EQU (0xFFFD810C) ;- (PDC_US5) Transmit Counter Register
AT91C_US5_TPR             EQU (0xFFFD8108) ;- (PDC_US5) Transmit Pointer Register
AT91C_US5_RCR             EQU (0xFFFD8104) ;- (PDC_US5) Receive Counter Register
;- ========== Register definition for US5 peripheral ========== 
AT91C_US5_IF              EQU (0xFFFD804C) ;- (US5) IRDA_FILTER Register
AT91C_US5_RTOR            EQU (0xFFFD8024) ;- (US5) Receiver Time-out Register
AT91C_US5_NER             EQU (0xFFFD8044) ;- (US5) Nb Errors Register
AT91C_US5_IMR             EQU (0xFFFD8010) ;- (US5) Interrupt Mask Register
AT91C_US5_RHR             EQU (0xFFFD8018) ;- (US5) Receiver Holding Register
AT91C_US5_CSR             EQU (0xFFFD8014) ;- (US5) Channel Status Register
AT91C_US5_MR              EQU (0xFFFD8004) ;- (US5) Mode Register
AT91C_US5_IDR             EQU (0xFFFD800C) ;- (US5) Interrupt Disable Register
AT91C_US5_THR             EQU (0xFFFD801C) ;- (US5) Transmitter Holding Register
AT91C_US5_FIDI            EQU (0xFFFD8040) ;- (US5) FI_DI_Ratio Register
AT91C_US5_TTGR            EQU (0xFFFD8028) ;- (US5) Transmitter Time-guard Register
AT91C_US5_BRGR            EQU (0xFFFD8020) ;- (US5) Baud Rate Generator Register
AT91C_US5_CR              EQU (0xFFFD8000) ;- (US5) Control Register
AT91C_US5_IER             EQU (0xFFFD8008) ;- (US5) Interrupt Enable Register
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
;- ========== Register definition for PDC_ADC peripheral ========== 
AT91C_ADC_PTCR            EQU (0xFFFE0120) ;- (PDC_ADC) PDC Transfer Control Register
AT91C_ADC_TPR             EQU (0xFFFE0108) ;- (PDC_ADC) Transmit Pointer Register
AT91C_ADC_TCR             EQU (0xFFFE010C) ;- (PDC_ADC) Transmit Counter Register
AT91C_ADC_RCR             EQU (0xFFFE0104) ;- (PDC_ADC) Receive Counter Register
AT91C_ADC_PTSR            EQU (0xFFFE0124) ;- (PDC_ADC) PDC Transfer Status Register
AT91C_ADC_RNPR            EQU (0xFFFE0110) ;- (PDC_ADC) Receive Next Pointer Register
AT91C_ADC_RPR             EQU (0xFFFE0100) ;- (PDC_ADC) Receive Pointer Register
AT91C_ADC_TNCR            EQU (0xFFFE011C) ;- (PDC_ADC) Transmit Next Counter Register
AT91C_ADC_RNCR            EQU (0xFFFE0114) ;- (PDC_ADC) Receive Next Counter Register
AT91C_ADC_TNPR            EQU (0xFFFE0118) ;- (PDC_ADC) Transmit Next Pointer Register
;- ========== Register definition for ADC peripheral ========== 
AT91C_ADC_CHDR            EQU (0xFFFE0014) ;- (ADC) ADC Channel Disable Register
AT91C_ADC_CDR3            EQU (0xFFFE003C) ;- (ADC) ADC Channel Data Register 3
AT91C_ADC_CR              EQU (0xFFFE0000) ;- (ADC) ADC Control Register
AT91C_ADC_IMR             EQU (0xFFFE002C) ;- (ADC) ADC Interrupt Mask Register
AT91C_ADC_CDR2            EQU (0xFFFE0038) ;- (ADC) ADC Channel Data Register 2
AT91C_ADC_SR              EQU (0xFFFE001C) ;- (ADC) ADC Status Register
AT91C_ADC_IER             EQU (0xFFFE0024) ;- (ADC) ADC Interrupt Enable Register
AT91C_ADC_CDR7            EQU (0xFFFE004C) ;- (ADC) ADC Channel Data Register 7
AT91C_ADC_CDR0            EQU (0xFFFE0030) ;- (ADC) ADC Channel Data Register 0
AT91C_ADC_CDR5            EQU (0xFFFE0044) ;- (ADC) ADC Channel Data Register 5
AT91C_ADC_CDR4            EQU (0xFFFE0040) ;- (ADC) ADC Channel Data Register 4
AT91C_ADC_CHER            EQU (0xFFFE0010) ;- (ADC) ADC Channel Enable Register
AT91C_ADC_CHSR            EQU (0xFFFE0018) ;- (ADC) ADC Channel Status Register
AT91C_ADC_MR              EQU (0xFFFE0004) ;- (ADC) ADC Mode Register
AT91C_ADC_CDR6            EQU (0xFFFE0048) ;- (ADC) ADC Channel Data Register 6
AT91C_ADC_LCDR            EQU (0xFFFE0020) ;- (ADC) ADC Last Converted Data Register
AT91C_ADC_CDR1            EQU (0xFFFE0034) ;- (ADC) ADC Channel Data Register 1
AT91C_ADC_IDR             EQU (0xFFFE0028) ;- (ADC) ADC Interrupt Disable Register
;- ========== Register definition for EMACB peripheral ========== 
AT91C_EMACB_USRIO         EQU (0xFFFC40C0) ;- (EMACB) USER Input/Output Register
AT91C_EMACB_RSE           EQU (0xFFFC4074) ;- (EMACB) Receive Symbol Errors Register
AT91C_EMACB_SCF           EQU (0xFFFC4044) ;- (EMACB) Single Collision Frame Register
AT91C_EMACB_STE           EQU (0xFFFC4084) ;- (EMACB) SQE Test Error Register
AT91C_EMACB_SA1H          EQU (0xFFFC409C) ;- (EMACB) Specific Address 1 Top, Last 2 bytes
AT91C_EMACB_ROV           EQU (0xFFFC4070) ;- (EMACB) Receive Overrun Errors Register
AT91C_EMACB_TBQP          EQU (0xFFFC401C) ;- (EMACB) Transmit Buffer Queue Pointer
AT91C_EMACB_IMR           EQU (0xFFFC4030) ;- (EMACB) Interrupt Mask Register
AT91C_EMACB_IER           EQU (0xFFFC4028) ;- (EMACB) Interrupt Enable Register
AT91C_EMACB_REV           EQU (0xFFFC40FC) ;- (EMACB) Revision Register
AT91C_EMACB_SA3L          EQU (0xFFFC40A8) ;- (EMACB) Specific Address 3 Bottom, First 4 bytes
AT91C_EMACB_ELE           EQU (0xFFFC4078) ;- (EMACB) Excessive Length Errors Register
AT91C_EMACB_HRT           EQU (0xFFFC4094) ;- (EMACB) Hash Address Top[63:32]
AT91C_EMACB_SA2L          EQU (0xFFFC40A0) ;- (EMACB) Specific Address 2 Bottom, First 4 bytes
AT91C_EMACB_RRE           EQU (0xFFFC406C) ;- (EMACB) Receive Ressource Error Register
AT91C_EMACB_FRO           EQU (0xFFFC404C) ;- (EMACB) Frames Received OK Register
AT91C_EMACB_TPQ           EQU (0xFFFC40BC) ;- (EMACB) Transmit Pause Quantum Register
AT91C_EMACB_ISR           EQU (0xFFFC4024) ;- (EMACB) Interrupt Status Register
AT91C_EMACB_TSR           EQU (0xFFFC4014) ;- (EMACB) Transmit Status Register
AT91C_EMACB_RLE           EQU (0xFFFC4088) ;- (EMACB) Receive Length Field Mismatch Register
AT91C_EMACB_USF           EQU (0xFFFC4080) ;- (EMACB) Undersize Frames Register
AT91C_EMACB_WOL           EQU (0xFFFC40C4) ;- (EMACB) Wake On LAN Register
AT91C_EMACB_TPF           EQU (0xFFFC408C) ;- (EMACB) Transmitted Pause Frames Register
AT91C_EMACB_PTR           EQU (0xFFFC4038) ;- (EMACB) Pause Time Register
AT91C_EMACB_TUND          EQU (0xFFFC4064) ;- (EMACB) Transmit Underrun Error Register
AT91C_EMACB_MAN           EQU (0xFFFC4034) ;- (EMACB) PHY Maintenance Register
AT91C_EMACB_RJA           EQU (0xFFFC407C) ;- (EMACB) Receive Jabbers Register
AT91C_EMACB_SA4L          EQU (0xFFFC40B0) ;- (EMACB) Specific Address 4 Bottom, First 4 bytes
AT91C_EMACB_CSE           EQU (0xFFFC4068) ;- (EMACB) Carrier Sense Error Register
AT91C_EMACB_HRB           EQU (0xFFFC4090) ;- (EMACB) Hash Address Bottom[31:0]
AT91C_EMACB_ALE           EQU (0xFFFC4054) ;- (EMACB) Alignment Error Register
AT91C_EMACB_SA1L          EQU (0xFFFC4098) ;- (EMACB) Specific Address 1 Bottom, First 4 bytes
AT91C_EMACB_NCR           EQU (0xFFFC4000) ;- (EMACB) Network Control Register
AT91C_EMACB_FTO           EQU (0xFFFC4040) ;- (EMACB) Frames Transmitted OK Register
AT91C_EMACB_ECOL          EQU (0xFFFC4060) ;- (EMACB) Excessive Collision Register
AT91C_EMACB_DTF           EQU (0xFFFC4058) ;- (EMACB) Deferred Transmission Frame Register
AT91C_EMACB_SA4H          EQU (0xFFFC40B4) ;- (EMACB) Specific Address 4 Top, Last 2 bytes
AT91C_EMACB_FCSE          EQU (0xFFFC4050) ;- (EMACB) Frame Check Sequence Error Register
AT91C_EMACB_TID           EQU (0xFFFC40B8) ;- (EMACB) Type ID Checking Register
AT91C_EMACB_PFR           EQU (0xFFFC403C) ;- (EMACB) Pause Frames received Register
AT91C_EMACB_IDR           EQU (0xFFFC402C) ;- (EMACB) Interrupt Disable Register
AT91C_EMACB_SA3H          EQU (0xFFFC40AC) ;- (EMACB) Specific Address 3 Top, Last 2 bytes
AT91C_EMACB_NSR           EQU (0xFFFC4008) ;- (EMACB) Network Status Register
AT91C_EMACB_MCF           EQU (0xFFFC4048) ;- (EMACB) Multiple Collision Frame Register
AT91C_EMACB_RBQP          EQU (0xFFFC4018) ;- (EMACB) Receive Buffer Queue Pointer
AT91C_EMACB_RSR           EQU (0xFFFC4020) ;- (EMACB) Receive Status Register
AT91C_EMACB_SA2H          EQU (0xFFFC40A4) ;- (EMACB) Specific Address 2 Top, Last 2 bytes
AT91C_EMACB_NCFGR         EQU (0xFFFC4004) ;- (EMACB) Network Configuration Register
AT91C_EMACB_LCOL          EQU (0xFFFC405C) ;- (EMACB) Late Collision Register
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
;- ========== Register definition for HECC peripheral ========== 
;- ========== Register definition for HISI peripheral ========== 
AT91C_HISI_PSIZE          EQU (0xFFFC0020) ;- (HISI) Preview Size Register
AT91C_HISI_CR1            EQU (0xFFFC0000) ;- (HISI) Control Register 1
AT91C_HISI_R2YSET1        EQU (0xFFFC003C) ;- (HISI) Color Space Conversion Register
AT91C_HISI_CDBA           EQU (0xFFFC002C) ;- (HISI) Codec Dma Address Register
AT91C_HISI_IDR            EQU (0xFFFC0010) ;- (HISI) Interrupt Disable Register
AT91C_HISI_R2YSET2        EQU (0xFFFC0040) ;- (HISI) Color Space Conversion Register
AT91C_HISI_Y2RSET1        EQU (0xFFFC0034) ;- (HISI) Color Space Conversion Register
AT91C_HISI_PFBD           EQU (0xFFFC0028) ;- (HISI) Preview Frame Buffer Address Register
AT91C_HISI_CR2            EQU (0xFFFC0004) ;- (HISI) Control Register 2
AT91C_HISI_Y2RSET0        EQU (0xFFFC0030) ;- (HISI) Color Space Conversion Register
AT91C_HISI_PDECF          EQU (0xFFFC0024) ;- (HISI) Preview Decimation Factor Register
AT91C_HISI_IMR            EQU (0xFFFC0014) ;- (HISI) Interrupt Mask Register
AT91C_HISI_IER            EQU (0xFFFC000C) ;- (HISI) Interrupt Enable Register
AT91C_HISI_R2YSET0        EQU (0xFFFC0038) ;- (HISI) Color Space Conversion Register
AT91C_HISI_SR             EQU (0xFFFC0008) ;- (HISI) Status Register

;- *****************************************************************************
;-               PIO DEFINITIONS FOR AT91SAM9260
;- *****************************************************************************
AT91C_PIO_PA0             EQU (1:SHL:0) ;- Pin Controlled by PA0
AT91C_PA0_SPI0_MISO       EQU (AT91C_PIO_PA0) ;-  SPI 0 Master In Slave
AT91C_PA0_MCDB0           EQU (AT91C_PIO_PA0) ;-  Multimedia Card B Data 0
AT91C_PIO_PA1             EQU (1:SHL:1) ;- Pin Controlled by PA1
AT91C_PA1_SPI0_MOSI       EQU (AT91C_PIO_PA1) ;-  SPI 0 Master Out Slave
AT91C_PA1_MCCDB           EQU (AT91C_PIO_PA1) ;-  Multimedia Card B Command
AT91C_PIO_PA10            EQU (1:SHL:10) ;- Pin Controlled by PA10
AT91C_PA10_MCDA2          EQU (AT91C_PIO_PA10) ;-  Multimedia Card A Data 2
AT91C_PA10_ETX2           EQU (AT91C_PIO_PA10) ;-  Ethernet MAC Transmit Data 2
AT91C_PIO_PA11            EQU (1:SHL:11) ;- Pin Controlled by PA11
AT91C_PA11_MCDA3          EQU (AT91C_PIO_PA11) ;-  Multimedia Card A Data 3
AT91C_PA11_ETX3           EQU (AT91C_PIO_PA11) ;-  Ethernet MAC Transmit Data 3
AT91C_PIO_PA12            EQU (1:SHL:12) ;- Pin Controlled by PA12
AT91C_PA12_ETX0           EQU (AT91C_PIO_PA12) ;-  Ethernet MAC Transmit Data 0
AT91C_PIO_PA13            EQU (1:SHL:13) ;- Pin Controlled by PA13
AT91C_PA13_ETX1           EQU (AT91C_PIO_PA13) ;-  Ethernet MAC Transmit Data 1
AT91C_PIO_PA14            EQU (1:SHL:14) ;- Pin Controlled by PA14
AT91C_PA14_ERX0           EQU (AT91C_PIO_PA14) ;-  Ethernet MAC Receive Data 0
AT91C_PIO_PA15            EQU (1:SHL:15) ;- Pin Controlled by PA15
AT91C_PA15_ERX1           EQU (AT91C_PIO_PA15) ;-  Ethernet MAC Receive Data 1
AT91C_PIO_PA16            EQU (1:SHL:16) ;- Pin Controlled by PA16
AT91C_PA16_ETXEN          EQU (AT91C_PIO_PA16) ;-  Ethernet MAC Transmit Enable
AT91C_PIO_PA17            EQU (1:SHL:17) ;- Pin Controlled by PA17
AT91C_PA17_ERXDV          EQU (AT91C_PIO_PA17) ;-  Ethernet MAC Receive Data Valid
AT91C_PIO_PA18            EQU (1:SHL:18) ;- Pin Controlled by PA18
AT91C_PA18_ERXER          EQU (AT91C_PIO_PA18) ;-  Ethernet MAC Receive Error
AT91C_PIO_PA19            EQU (1:SHL:19) ;- Pin Controlled by PA19
AT91C_PA19_ETXCK          EQU (AT91C_PIO_PA19) ;-  Ethernet MAC Transmit Clock/Reference Clock
AT91C_PIO_PA2             EQU (1:SHL:2) ;- Pin Controlled by PA2
AT91C_PA2_SPI0_SPCK       EQU (AT91C_PIO_PA2) ;-  SPI 0 Serial Clock
AT91C_PIO_PA20            EQU (1:SHL:20) ;- Pin Controlled by PA20
AT91C_PA20_EMDC           EQU (AT91C_PIO_PA20) ;-  Ethernet MAC Management Data Clock
AT91C_PIO_PA21            EQU (1:SHL:21) ;- Pin Controlled by PA21
AT91C_PA21_EMDIO          EQU (AT91C_PIO_PA21) ;-  Ethernet MAC Management Data Input/Output
AT91C_PIO_PA22            EQU (1:SHL:22) ;- Pin Controlled by PA22
AT91C_PA22_ADTRG          EQU (AT91C_PIO_PA22) ;-  ADC Trigger
AT91C_PA22_ETXER          EQU (AT91C_PIO_PA22) ;-  Ethernet MAC Transmikt Coding Error
AT91C_PIO_PA23            EQU (1:SHL:23) ;- Pin Controlled by PA23
AT91C_PA23_TWD            EQU (AT91C_PIO_PA23) ;-  TWI Two-wire Serial Data
AT91C_PA23_ETX2           EQU (AT91C_PIO_PA23) ;-  Ethernet MAC Transmit Data 2
AT91C_PIO_PA24            EQU (1:SHL:24) ;- Pin Controlled by PA24
AT91C_PA24_TWCK           EQU (AT91C_PIO_PA24) ;-  TWI Two-wire Serial Clock
AT91C_PA24_ETX3           EQU (AT91C_PIO_PA24) ;-  Ethernet MAC Transmit Data 3
AT91C_PIO_PA25            EQU (1:SHL:25) ;- Pin Controlled by PA25
AT91C_PA25_TCLK0          EQU (AT91C_PIO_PA25) ;-  Timer Counter 0 external clock input
AT91C_PA25_ERX2           EQU (AT91C_PIO_PA25) ;-  Ethernet MAC Receive Data 2
AT91C_PIO_PA26            EQU (1:SHL:26) ;- Pin Controlled by PA26
AT91C_PA26_TIOA0          EQU (AT91C_PIO_PA26) ;-  Timer Counter 0 Multipurpose Timer I/O Pin A
AT91C_PA26_ERX3           EQU (AT91C_PIO_PA26) ;-  Ethernet MAC Receive Data 3
AT91C_PIO_PA27            EQU (1:SHL:27) ;- Pin Controlled by PA27
AT91C_PA27_TIOA1          EQU (AT91C_PIO_PA27) ;-  Timer Counter 1 Multipurpose Timer I/O Pin A
AT91C_PA27_ERXCK          EQU (AT91C_PIO_PA27) ;-  Ethernet MAC Receive Clock
AT91C_PIO_PA28            EQU (1:SHL:28) ;- Pin Controlled by PA28
AT91C_PA28_TIOA2          EQU (AT91C_PIO_PA28) ;-  Timer Counter 2 Multipurpose Timer I/O Pin A
AT91C_PA28_ECRS           EQU (AT91C_PIO_PA28) ;-  Ethernet MAC Carrier Sense/Carrier Sense and Data Valid
AT91C_PIO_PA29            EQU (1:SHL:29) ;- Pin Controlled by PA29
AT91C_PA29_SCK1           EQU (AT91C_PIO_PA29) ;-  USART 1 Serial Clock
AT91C_PA29_ECOL           EQU (AT91C_PIO_PA29) ;-  Ethernet MAC Collision Detected
AT91C_PIO_PA3             EQU (1:SHL:3) ;- Pin Controlled by PA3
AT91C_PA3_SPI0_NPCS0      EQU (AT91C_PIO_PA3) ;-  SPI 0 Peripheral Chip Select 0
AT91C_PA3_MCDB3           EQU (AT91C_PIO_PA3) ;-  Multimedia Card B Data 3
AT91C_PIO_PA30            EQU (1:SHL:30) ;- Pin Controlled by PA30
AT91C_PA30_SCK2           EQU (AT91C_PIO_PA30) ;-  USART 2 Serial Clock
AT91C_PA30_RXD4           EQU (AT91C_PIO_PA30) ;-  USART 4 Receive Data
AT91C_PIO_PA31            EQU (1:SHL:31) ;- Pin Controlled by PA31
AT91C_PA31_SCK0           EQU (AT91C_PIO_PA31) ;-  USART 0 Serial Clock
AT91C_PA31_TXD4           EQU (AT91C_PIO_PA31) ;-  USART 4 Transmit Data
AT91C_PIO_PA4             EQU (1:SHL:4) ;- Pin Controlled by PA4
AT91C_PA4_RTS2            EQU (AT91C_PIO_PA4) ;-  USART 2 Ready To Send
AT91C_PA4_MCDB2           EQU (AT91C_PIO_PA4) ;-  Multimedia Card B Data 2
AT91C_PIO_PA5             EQU (1:SHL:5) ;- Pin Controlled by PA5
AT91C_PA5_CTS2            EQU (AT91C_PIO_PA5) ;-  USART 2 Clear To Send
AT91C_PA5_MCDB1           EQU (AT91C_PIO_PA5) ;-  Multimedia Card B Data 1
AT91C_PIO_PA6             EQU (1:SHL:6) ;- Pin Controlled by PA6
AT91C_PA6_MCDA0           EQU (AT91C_PIO_PA6) ;-  Multimedia Card A Data 0
AT91C_PIO_PA7             EQU (1:SHL:7) ;- Pin Controlled by PA7
AT91C_PA7_MCCDA           EQU (AT91C_PIO_PA7) ;-  Multimedia Card A Command
AT91C_PIO_PA8             EQU (1:SHL:8) ;- Pin Controlled by PA8
AT91C_PA8_MCCK            EQU (AT91C_PIO_PA8) ;-  Multimedia Card Clock
AT91C_PIO_PA9             EQU (1:SHL:9) ;- Pin Controlled by PA9
AT91C_PA9_MCDA1           EQU (AT91C_PIO_PA9) ;-  Multimedia Card A Data 1
AT91C_PIO_PB0             EQU (1:SHL:0) ;- Pin Controlled by PB0
AT91C_PB0_SPI1_MISO       EQU (AT91C_PIO_PB0) ;-  SPI 1 Master In Slave
AT91C_PB0_TIOA3           EQU (AT91C_PIO_PB0) ;-  Timer Counter 3 Multipurpose Timer I/O Pin A
AT91C_PIO_PB1             EQU (1:SHL:1) ;- Pin Controlled by PB1
AT91C_PB1_SPI1_MOSI       EQU (AT91C_PIO_PB1) ;-  SPI 1 Master Out Slave
AT91C_PB1_TIOB3           EQU (AT91C_PIO_PB1) ;-  Timer Counter 3 Multipurpose Timer I/O Pin B
AT91C_PIO_PB10            EQU (1:SHL:10) ;- Pin Controlled by PB10
AT91C_PB10_TXD3           EQU (AT91C_PIO_PB10) ;-  USART 3 Transmit Data
AT91C_PB10_ISI_D8         EQU (AT91C_PIO_PB10) ;-  Image Sensor Data 8
AT91C_PIO_PB11            EQU (1:SHL:11) ;- Pin Controlled by PB11
AT91C_PB11_RXD3           EQU (AT91C_PIO_PB11) ;-  USART 3 Receive Data
AT91C_PB11_ISI_D9         EQU (AT91C_PIO_PB11) ;-  Image Sensor Data 9
AT91C_PIO_PB12            EQU (1:SHL:12) ;- Pin Controlled by PB12
AT91C_PB12_TXD5           EQU (AT91C_PIO_PB12) ;-  USART 5 Transmit Data
AT91C_PB12_ISI_D10        EQU (AT91C_PIO_PB12) ;-  Image Sensor Data 10
AT91C_PIO_PB13            EQU (1:SHL:13) ;- Pin Controlled by PB13
AT91C_PB13_RXD5           EQU (AT91C_PIO_PB13) ;-  USART 5 Receive Data
AT91C_PB13_ISI_D11        EQU (AT91C_PIO_PB13) ;-  Image Sensor Data 11
AT91C_PIO_PB14            EQU (1:SHL:14) ;- Pin Controlled by PB14
AT91C_PB14_DRXD           EQU (AT91C_PIO_PB14) ;-  DBGU Debug Receive Data
AT91C_PIO_PB15            EQU (1:SHL:15) ;- Pin Controlled by PB15
AT91C_PB15_DTXD           EQU (AT91C_PIO_PB15) ;-  DBGU Debug Transmit Data
AT91C_PIO_PB16            EQU (1:SHL:16) ;- Pin Controlled by PB16
AT91C_PB16_TK0            EQU (AT91C_PIO_PB16) ;-  SSC0 Transmit Clock
AT91C_PB16_TCLK3          EQU (AT91C_PIO_PB16) ;-  Timer Counter 3 external clock input
AT91C_PIO_PB17            EQU (1:SHL:17) ;- Pin Controlled by PB17
AT91C_PB17_TF0            EQU (AT91C_PIO_PB17) ;-  SSC0 Transmit Frame Sync
AT91C_PB17_TCLK4          EQU (AT91C_PIO_PB17) ;-  Timer Counter 4 external clock input
AT91C_PIO_PB18            EQU (1:SHL:18) ;- Pin Controlled by PB18
AT91C_PB18_TD0            EQU (AT91C_PIO_PB18) ;-  SSC0 Transmit data
AT91C_PB18_TIOB4          EQU (AT91C_PIO_PB18) ;-  Timer Counter 4 Multipurpose Timer I/O Pin B
AT91C_PIO_PB19            EQU (1:SHL:19) ;- Pin Controlled by PB19
AT91C_PB19_RD0            EQU (AT91C_PIO_PB19) ;-  SSC0 Receive Data
AT91C_PB19_TIOB5          EQU (AT91C_PIO_PB19) ;-  Timer Counter 5 Multipurpose Timer I/O Pin B
AT91C_PIO_PB2             EQU (1:SHL:2) ;- Pin Controlled by PB2
AT91C_PB2_SPI1_SPCK       EQU (AT91C_PIO_PB2) ;-  SPI 1 Serial Clock
AT91C_PB2_TIOA4           EQU (AT91C_PIO_PB2) ;-  Timer Counter 4 Multipurpose Timer I/O Pin A
AT91C_PIO_PB20            EQU (1:SHL:20) ;- Pin Controlled by PB20
AT91C_PB20_RK0            EQU (AT91C_PIO_PB20) ;-  SSC0 Receive Clock
AT91C_PB20_ISI_D0         EQU (AT91C_PIO_PB20) ;-  Image Sensor Data 0
AT91C_PIO_PB21            EQU (1:SHL:21) ;- Pin Controlled by PB21
AT91C_PB21_RF0            EQU (AT91C_PIO_PB21) ;-  SSC0 Receive Frame Sync
AT91C_PB21_ISI_D1         EQU (AT91C_PIO_PB21) ;-  Image Sensor Data 1
AT91C_PIO_PB22            EQU (1:SHL:22) ;- Pin Controlled by PB22
AT91C_PB22_DSR0           EQU (AT91C_PIO_PB22) ;-  USART 0 Data Set ready
AT91C_PB22_ISI_D2         EQU (AT91C_PIO_PB22) ;-  Image Sensor Data 2
AT91C_PIO_PB23            EQU (1:SHL:23) ;- Pin Controlled by PB23
AT91C_PB23_DCD0           EQU (AT91C_PIO_PB23) ;-  USART 0 Data Carrier Detect
AT91C_PB23_ISI_D3         EQU (AT91C_PIO_PB23) ;-  Image Sensor Data 3
AT91C_PIO_PB24            EQU (1:SHL:24) ;- Pin Controlled by PB24
AT91C_PB24_DTR0           EQU (AT91C_PIO_PB24) ;-  USART 0 Data Terminal ready
AT91C_PB24_ISI_D4         EQU (AT91C_PIO_PB24) ;-  Image Sensor Data 4
AT91C_PIO_PB25            EQU (1:SHL:25) ;- Pin Controlled by PB25
AT91C_PB25_RI0            EQU (AT91C_PIO_PB25) ;-  USART 0 Ring Indicator
AT91C_PB25_ISI_D5         EQU (AT91C_PIO_PB25) ;-  Image Sensor Data 5
AT91C_PIO_PB26            EQU (1:SHL:26) ;- Pin Controlled by PB26
AT91C_PB26_RTS0           EQU (AT91C_PIO_PB26) ;-  USART 0 Ready To Send
AT91C_PB26_ISI_D6         EQU (AT91C_PIO_PB26) ;-  Image Sensor Data 6
AT91C_PIO_PB27            EQU (1:SHL:27) ;- Pin Controlled by PB27
AT91C_PB27_CTS0           EQU (AT91C_PIO_PB27) ;-  USART 0 Clear To Send
AT91C_PB27_ISI_D7         EQU (AT91C_PIO_PB27) ;-  Image Sensor Data 7
AT91C_PIO_PB28            EQU (1:SHL:28) ;- Pin Controlled by PB28
AT91C_PB28_RTS1           EQU (AT91C_PIO_PB28) ;-  USART 1 Ready To Send
AT91C_PB28_ISI_PCK        EQU (AT91C_PIO_PB28) ;-  Image Sensor Data Clock
AT91C_PIO_PB29            EQU (1:SHL:29) ;- Pin Controlled by PB29
AT91C_PB29_CTS1           EQU (AT91C_PIO_PB29) ;-  USART 1 Clear To Send
AT91C_PB29_ISI_VSYNC      EQU (AT91C_PIO_PB29) ;-  Image Sensor Vertical Synchro
AT91C_PIO_PB3             EQU (1:SHL:3) ;- Pin Controlled by PB3
AT91C_PB3_SPI1_NPCS0      EQU (AT91C_PIO_PB3) ;-  SPI 1 Peripheral Chip Select 0
AT91C_PB3_TIOA5           EQU (AT91C_PIO_PB3) ;-  Timer Counter 5 Multipurpose Timer I/O Pin A
AT91C_PIO_PB30            EQU (1:SHL:30) ;- Pin Controlled by PB30
AT91C_PB30_PCK0_0         EQU (AT91C_PIO_PB30) ;-  PMC Programmable Clock Output 0
AT91C_PB30_ISI_HSYNC      EQU (AT91C_PIO_PB30) ;-  Image Sensor Horizontal Synchro
AT91C_PIO_PB31            EQU (1:SHL:31) ;- Pin Controlled by PB31
AT91C_PB31_PCK1_0         EQU (AT91C_PIO_PB31) ;-  PMC Programmable Clock Output 1
AT91C_PB31_ISI_MCK        EQU (AT91C_PIO_PB31) ;-  Image Sensor Reference Clock
AT91C_PIO_PB4             EQU (1:SHL:4) ;- Pin Controlled by PB4
AT91C_PB4_TXD0            EQU (AT91C_PIO_PB4) ;-  USART 0 Transmit Data
AT91C_PIO_PB5             EQU (1:SHL:5) ;- Pin Controlled by PB5
AT91C_PB5_RXD0            EQU (AT91C_PIO_PB5) ;-  USART 0 Receive Data
AT91C_PIO_PB6             EQU (1:SHL:6) ;- Pin Controlled by PB6
AT91C_PB6_TXD1            EQU (AT91C_PIO_PB6) ;-  USART 1 Transmit Data
AT91C_PB6_TCLK1           EQU (AT91C_PIO_PB6) ;-  Timer Counter 1 external clock input
AT91C_PIO_PB7             EQU (1:SHL:7) ;- Pin Controlled by PB7
AT91C_PB7_RXD1            EQU (AT91C_PIO_PB7) ;-  USART 1 Receive Data
AT91C_PB7_TCLK2           EQU (AT91C_PIO_PB7) ;-  Timer Counter 2 external clock input
AT91C_PIO_PB8             EQU (1:SHL:8) ;- Pin Controlled by PB8
AT91C_PB8_TXD2            EQU (AT91C_PIO_PB8) ;-  USART 2 Transmit Data
AT91C_PIO_PB9             EQU (1:SHL:9) ;- Pin Controlled by PB9
AT91C_PB9_RXD2            EQU (AT91C_PIO_PB9) ;-  USART 2 Receive Data
AT91C_PIO_PC0             EQU (1:SHL:0) ;- Pin Controlled by PC0
AT91C_PC0_AD0             EQU (AT91C_PIO_PC0) ;-  ADC Analog Input 0
AT91C_PC0_SCK3            EQU (AT91C_PIO_PC0) ;-  USART 3 Serial Clock
AT91C_PIO_PC1             EQU (1:SHL:1) ;- Pin Controlled by PC1
AT91C_PC1_AD1             EQU (AT91C_PIO_PC1) ;-  ADC Analog Input 1
AT91C_PC1_PCK0            EQU (AT91C_PIO_PC1) ;-  PMC Programmable Clock Output 0
AT91C_PIO_PC10            EQU (1:SHL:10) ;- Pin Controlled by PC10
AT91C_PC10_A25_CFRNW      EQU (AT91C_PIO_PC10) ;-  Address Bus[25]
AT91C_PC10_CTS3           EQU (AT91C_PIO_PC10) ;-  USART 3 Clear To Send
AT91C_PIO_PC11            EQU (1:SHL:11) ;- Pin Controlled by PC11
AT91C_PC11_NCS2           EQU (AT91C_PIO_PC11) ;-  Chip Select Line 2
AT91C_PC11_SPI0_NPCS1     EQU (AT91C_PIO_PC11) ;-  SPI 0 Peripheral Chip Select 1
AT91C_PIO_PC12            EQU (1:SHL:12) ;- Pin Controlled by PC12
AT91C_PC12_IRQ0           EQU (AT91C_PIO_PC12) ;-  External Interrupt 0
AT91C_PC12_NCS7           EQU (AT91C_PIO_PC12) ;-  Chip Select Line 7
AT91C_PIO_PC13            EQU (1:SHL:13) ;- Pin Controlled by PC13
AT91C_PC13_FIQ            EQU (AT91C_PIO_PC13) ;-  AIC Fast Interrupt Input
AT91C_PC13_NCS6           EQU (AT91C_PIO_PC13) ;-  Chip Select Line 6
AT91C_PIO_PC14            EQU (1:SHL:14) ;- Pin Controlled by PC14
AT91C_PC14_NCS3_NANDCS    EQU (AT91C_PIO_PC14) ;-  Chip Select Line 3
AT91C_PC14_IRQ2           EQU (AT91C_PIO_PC14) ;-  External Interrupt 2
AT91C_PIO_PC15            EQU (1:SHL:15) ;- Pin Controlled by PC15
AT91C_PC15_NWAIT          EQU (AT91C_PIO_PC15) ;-  External Wait Signal
AT91C_PC15_IRQ1           EQU (AT91C_PIO_PC15) ;-  External Interrupt 1
AT91C_PIO_PC16            EQU (1:SHL:16) ;- Pin Controlled by PC16
AT91C_PC16_D16            EQU (AT91C_PIO_PC16) ;-  Data Bus[16]
AT91C_PC16_SPI0_NPCS2     EQU (AT91C_PIO_PC16) ;-  SPI 0 Peripheral Chip Select 2
AT91C_PIO_PC17            EQU (1:SHL:17) ;- Pin Controlled by PC17
AT91C_PC17_D17            EQU (AT91C_PIO_PC17) ;-  Data Bus[17]
AT91C_PC17_SPI0_NPCS3     EQU (AT91C_PIO_PC17) ;-  SPI 0 Peripheral Chip Select 3
AT91C_PIO_PC18            EQU (1:SHL:18) ;- Pin Controlled by PC18
AT91C_PC18_D18            EQU (AT91C_PIO_PC18) ;-  Data Bus[18]
AT91C_PC18_SPI1_NPCS1     EQU (AT91C_PIO_PC18) ;-  SPI 1 Peripheral Chip Select 1
AT91C_PIO_PC19            EQU (1:SHL:19) ;- Pin Controlled by PC19
AT91C_PC19_D19            EQU (AT91C_PIO_PC19) ;-  Data Bus[19]
AT91C_PC19_SPI1_NPCS2     EQU (AT91C_PIO_PC19) ;-  SPI 1 Peripheral Chip Select 2
AT91C_PIO_PC2             EQU (1:SHL:2) ;- Pin Controlled by PC2
AT91C_PC2_AD2             EQU (AT91C_PIO_PC2) ;-  ADC Analog Input 2
AT91C_PC2_PCK1            EQU (AT91C_PIO_PC2) ;-  PMC Programmable Clock Output 1
AT91C_PIO_PC20            EQU (1:SHL:20) ;- Pin Controlled by PC20
AT91C_PC20_D20            EQU (AT91C_PIO_PC20) ;-  Data Bus[20]
AT91C_PC20_SPI1_NPCS3     EQU (AT91C_PIO_PC20) ;-  SPI 1 Peripheral Chip Select 3
AT91C_PIO_PC21            EQU (1:SHL:21) ;- Pin Controlled by PC21
AT91C_PC21_D21            EQU (AT91C_PIO_PC21) ;-  Data Bus[21]
AT91C_PC21_EF100          EQU (AT91C_PIO_PC21) ;-  Ethernet MAC Force 100 Mbits/sec
AT91C_PIO_PC22            EQU (1:SHL:22) ;- Pin Controlled by PC22
AT91C_PC22_D22            EQU (AT91C_PIO_PC22) ;-  Data Bus[22]
AT91C_PC22_TCLK5          EQU (AT91C_PIO_PC22) ;-  Timer Counter 5 external clock input
AT91C_PIO_PC23            EQU (1:SHL:23) ;- Pin Controlled by PC23
AT91C_PC23_D23            EQU (AT91C_PIO_PC23) ;-  Data Bus[23]
AT91C_PIO_PC24            EQU (1:SHL:24) ;- Pin Controlled by PC24
AT91C_PC24_D24            EQU (AT91C_PIO_PC24) ;-  Data Bus[24]
AT91C_PIO_PC25            EQU (1:SHL:25) ;- Pin Controlled by PC25
AT91C_PC25_D25            EQU (AT91C_PIO_PC25) ;-  Data Bus[25]
AT91C_PIO_PC26            EQU (1:SHL:26) ;- Pin Controlled by PC26
AT91C_PC26_D26            EQU (AT91C_PIO_PC26) ;-  Data Bus[26]
AT91C_PIO_PC27            EQU (1:SHL:27) ;- Pin Controlled by PC27
AT91C_PC27_D27            EQU (AT91C_PIO_PC27) ;-  Data Bus[27]
AT91C_PIO_PC28            EQU (1:SHL:28) ;- Pin Controlled by PC28
AT91C_PC28_D28            EQU (AT91C_PIO_PC28) ;-  Data Bus[28]
AT91C_PIO_PC29            EQU (1:SHL:29) ;- Pin Controlled by PC29
AT91C_PC29_D29            EQU (AT91C_PIO_PC29) ;-  Data Bus[29]
AT91C_PIO_PC3             EQU (1:SHL:3) ;- Pin Controlled by PC3
AT91C_PC3_AD3             EQU (AT91C_PIO_PC3) ;-  ADC Analog Input 3
AT91C_PC3_SPI1_NPCS3      EQU (AT91C_PIO_PC3) ;-  SPI 1 Peripheral Chip Select 3
AT91C_PIO_PC30            EQU (1:SHL:30) ;- Pin Controlled by PC30
AT91C_PC30_D30            EQU (AT91C_PIO_PC30) ;-  Data Bus[30]
AT91C_PIO_PC31            EQU (1:SHL:31) ;- Pin Controlled by PC31
AT91C_PC31_D31            EQU (AT91C_PIO_PC31) ;-  Data Bus[31]
AT91C_PIO_PC4             EQU (1:SHL:4) ;- Pin Controlled by PC4
AT91C_PC4_A23             EQU (AT91C_PIO_PC4) ;-  Address Bus[23]
AT91C_PC4_SPI1_NPCS2      EQU (AT91C_PIO_PC4) ;-  SPI 1 Peripheral Chip Select 2
AT91C_PIO_PC5             EQU (1:SHL:5) ;- Pin Controlled by PC5
AT91C_PC5_A24             EQU (AT91C_PIO_PC5) ;-  Address Bus[24]
AT91C_PC5_SPI1_NPCS1      EQU (AT91C_PIO_PC5) ;-  SPI 1 Peripheral Chip Select 1
AT91C_PIO_PC6             EQU (1:SHL:6) ;- Pin Controlled by PC6
AT91C_PC6_TIOB2           EQU (AT91C_PIO_PC6) ;-  Timer Counter 2 Multipurpose Timer I/O Pin B
AT91C_PC6_CFCE1           EQU (AT91C_PIO_PC6) ;-  Compact Flash Enable 1
AT91C_PIO_PC7             EQU (1:SHL:7) ;- Pin Controlled by PC7
AT91C_PC7_TIOB1           EQU (AT91C_PIO_PC7) ;-  Timer Counter 1 Multipurpose Timer I/O Pin B
AT91C_PC7_CFCE2           EQU (AT91C_PIO_PC7) ;-  Compact Flash Enable 2
AT91C_PIO_PC8             EQU (1:SHL:8) ;- Pin Controlled by PC8
AT91C_PC8_NCS4_CFCS0      EQU (AT91C_PIO_PC8) ;-  Chip Select Line 4
AT91C_PC8_RTS3            EQU (AT91C_PIO_PC8) ;-  USART 3 Ready To Send
AT91C_PIO_PC9             EQU (1:SHL:9) ;- Pin Controlled by PC9
AT91C_PC9_NCS5_CFCS1      EQU (AT91C_PIO_PC9) ;-  Chip Select Line 5
AT91C_PC9_TIOB0           EQU (AT91C_PIO_PC9) ;-  Timer Counter 0 Multipurpose Timer I/O Pin B

;- *****************************************************************************
;-               PERIPHERAL ID DEFINITIONS FOR AT91SAM9260
;- *****************************************************************************
AT91C_ID_FIQ              EQU ( 0) ;- Advanced Interrupt Controller (FIQ)
AT91C_ID_SYS              EQU ( 1) ;- System Controller
AT91C_ID_PIOA             EQU ( 2) ;- Parallel IO Controller A
AT91C_ID_PIOB             EQU ( 3) ;- Parallel IO Controller B
AT91C_ID_PIOC             EQU ( 4) ;- Parallel IO Controller C
AT91C_ID_ADC              EQU ( 5) ;- ADC
AT91C_ID_US0              EQU ( 6) ;- USART 0
AT91C_ID_US1              EQU ( 7) ;- USART 1
AT91C_ID_US2              EQU ( 8) ;- USART 2
AT91C_ID_MCI              EQU ( 9) ;- Multimedia Card Interface 0
AT91C_ID_UDP              EQU (10) ;- USB Device Port
AT91C_ID_TWI              EQU (11) ;- Two-Wire Interface
AT91C_ID_SPI0             EQU (12) ;- Serial Peripheral Interface 0
AT91C_ID_SPI1             EQU (13) ;- Serial Peripheral Interface 1
AT91C_ID_SSC0             EQU (14) ;- Serial Synchronous Controller 0
AT91C_ID_TC0              EQU (17) ;- Timer Counter 0
AT91C_ID_TC1              EQU (18) ;- Timer Counter 1
AT91C_ID_TC2              EQU (19) ;- Timer Counter 2
AT91C_ID_UHP              EQU (20) ;- USB Host Port
AT91C_ID_EMAC             EQU (21) ;- Ethernet Mac
AT91C_ID_HISI             EQU (22) ;- Image Sensor Interface
AT91C_ID_US3              EQU (23) ;- USART 3
AT91C_ID_US4              EQU (24) ;- USART 4
AT91C_ID_US5              EQU (25) ;- USART 5
AT91C_ID_TC3              EQU (26) ;- Timer Counter 3
AT91C_ID_TC4              EQU (27) ;- Timer Counter 4
AT91C_ID_TC5              EQU (28) ;- Timer Counter 5
AT91C_ID_IRQ0             EQU (29) ;- Advanced Interrupt Controller (IRQ0)
AT91C_ID_IRQ1             EQU (30) ;- Advanced Interrupt Controller (IRQ1)
AT91C_ID_IRQ2             EQU (31) ;- Advanced Interrupt Controller (IRQ2)
AT91C_ALL_INT             EQU (0xFFFE7FFF) ;- ALL VALID INTERRUPTS

;- *****************************************************************************
;-               BASE ADDRESS DEFINITIONS FOR AT91SAM9260
;- *****************************************************************************
AT91C_BASE_SYS            EQU (0xFFFFFD00) ;- (SYS) Base Address
AT91C_BASE_EBI            EQU (0xFFFFEA00) ;- (EBI) Base Address
AT91C_BASE_HECC           EQU (0xFFFFE800) ;- (HECC) Base Address
AT91C_BASE_SDRAMC         EQU (0xFFFFEA00) ;- (SDRAMC) Base Address
AT91C_BASE_SMC            EQU (0xFFFFEC00) ;- (SMC) Base Address
AT91C_BASE_MATRIX         EQU (0xFFFFEE00) ;- (MATRIX) Base Address
AT91C_BASE_CCFG           EQU (0xFFFFEF10) ;- (CCFG) Base Address
AT91C_BASE_PDC_DBGU       EQU (0xFFFFF300) ;- (PDC_DBGU) Base Address
AT91C_BASE_DBGU           EQU (0xFFFFF200) ;- (DBGU) Base Address
AT91C_BASE_AIC            EQU (0xFFFFF000) ;- (AIC) Base Address
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
AT91C_BASE_TC3            EQU (0xFFFDC000) ;- (TC3) Base Address
AT91C_BASE_TC4            EQU (0xFFFDC040) ;- (TC4) Base Address
AT91C_BASE_TC5            EQU (0xFFFDC080) ;- (TC5) Base Address
AT91C_BASE_TCB0           EQU (0xFFFA0000) ;- (TCB0) Base Address
AT91C_BASE_TCB1           EQU (0xFFFDC000) ;- (TCB1) Base Address
AT91C_BASE_PDC_MCI        EQU (0xFFFA8100) ;- (PDC_MCI) Base Address
AT91C_BASE_MCI            EQU (0xFFFA8000) ;- (MCI) Base Address
AT91C_BASE_PDC_TWI        EQU (0xFFFAC100) ;- (PDC_TWI) Base Address
AT91C_BASE_TWI            EQU (0xFFFAC000) ;- (TWI) Base Address
AT91C_BASE_PDC_US0        EQU (0xFFFB0100) ;- (PDC_US0) Base Address
AT91C_BASE_US0            EQU (0xFFFB0000) ;- (US0) Base Address
AT91C_BASE_PDC_US1        EQU (0xFFFB4100) ;- (PDC_US1) Base Address
AT91C_BASE_US1            EQU (0xFFFB4000) ;- (US1) Base Address
AT91C_BASE_PDC_US2        EQU (0xFFFB8100) ;- (PDC_US2) Base Address
AT91C_BASE_US2            EQU (0xFFFB8000) ;- (US2) Base Address
AT91C_BASE_PDC_US3        EQU (0xFFFD0100) ;- (PDC_US3) Base Address
AT91C_BASE_US3            EQU (0xFFFD0000) ;- (US3) Base Address
AT91C_BASE_PDC_US4        EQU (0xFFFD4100) ;- (PDC_US4) Base Address
AT91C_BASE_US4            EQU (0xFFFD4000) ;- (US4) Base Address
AT91C_BASE_PDC_US5        EQU (0xFFFD8100) ;- (PDC_US5) Base Address
AT91C_BASE_US5            EQU (0xFFFD8000) ;- (US5) Base Address
AT91C_BASE_PDC_SSC0       EQU (0xFFFBC100) ;- (PDC_SSC0) Base Address
AT91C_BASE_SSC0           EQU (0xFFFBC000) ;- (SSC0) Base Address
AT91C_BASE_PDC_SPI0       EQU (0xFFFC8100) ;- (PDC_SPI0) Base Address
AT91C_BASE_SPI0           EQU (0xFFFC8000) ;- (SPI0) Base Address
AT91C_BASE_PDC_SPI1       EQU (0xFFFCC100) ;- (PDC_SPI1) Base Address
AT91C_BASE_SPI1           EQU (0xFFFCC000) ;- (SPI1) Base Address
AT91C_BASE_PDC_ADC        EQU (0xFFFE0100) ;- (PDC_ADC) Base Address
AT91C_BASE_ADC            EQU (0xFFFE0000) ;- (ADC) Base Address
AT91C_BASE_EMACB          EQU (0xFFFC4000) ;- (EMACB) Base Address
AT91C_BASE_UDP            EQU (0xFFFA4000) ;- (UDP) Base Address
AT91C_BASE_UHP            EQU (0x00500000) ;- (UHP) Base Address
AT91C_BASE_HISI           EQU (0xFFFC0000) ;- (HISI) Base Address

;- *****************************************************************************
;-               MEMORY MAPPING DEFINITIONS FOR AT91SAM9260
;- *****************************************************************************
;- IROM
AT91C_IROM                EQU (0x00100000) ;- Internal ROM base address
AT91C_IROM_SIZE           EQU (0x00008000) ;- Internal ROM size in byte (32 Kbytes)
;- IRAM_1
AT91C_IRAM_1              EQU (0x00200000) ;- Maximum IRAM_1 Area : 4Kbyte base address
AT91C_IRAM_1_SIZE         EQU (0x00001000) ;- Maximum IRAM_1 Area : 4Kbyte size in byte (4 Kbytes)
;- IRAM_2
AT91C_IRAM_2              EQU (0x00300000) ;- Maximum IRAM_2 AREA : 4 Kbyte base address
AT91C_IRAM_2_SIZE         EQU (0x00001000) ;- Maximum IRAM_2 AREA : 4 Kbyte size in byte (4 Kbytes)
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
