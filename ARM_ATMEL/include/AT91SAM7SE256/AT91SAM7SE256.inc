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
;- File Name           : AT91SAM7SE256.h
;- Object              : AT91SAM7SE256 definitions
;- Generated           : AT91 SW Application Group  08/18/2006 (15:29:39)
;- 
;- CVS Reference       : /AT91SAM7SE256.pl/1.2/Mon Jan 23 08:59:28 2006//
;- CVS Reference       : /SYS_SAM7X.pl/1.3/Wed Feb  2 15:48:15 2005//
;- CVS Reference       : /MC_SAM7SE.pl/1.10/Thu Feb 16 16:35:28 2006//
;- CVS Reference       : /PMC_SAM7S_USB.pl/1.4/Tue Feb  8 14:00:19 2005//
;- CVS Reference       : /RSTC_SAM7X.pl/1.2/Wed Jul 13 15:25:17 2005//
;- CVS Reference       : /UDP_SAM7X.pl/1.3/Thu Aug  3 12:28:05 2006//
;- CVS Reference       : /PWM_SAM7X.pl/1.1/Tue May 10 12:38:54 2005//
;- CVS Reference       : /AIC_6075B.pl/1.3/Fri May 20 14:21:42 2005//
;- CVS Reference       : /PIO_6057A.pl/1.2/Thu Feb  3 10:29:42 2005//
;- CVS Reference       : /RTTC_6081A.pl/1.2/Thu Nov  4 13:57:22 2004//
;- CVS Reference       : /PITC_6079A.pl/1.2/Thu Nov  4 13:56:22 2004//
;- CVS Reference       : /WDTC_6080A.pl/1.3/Thu Nov  4 13:58:52 2004//
;- CVS Reference       : /VREG_6085B.pl/1.1/Tue Feb  1 16:40:38 2005//
;- CVS Reference       : /PDC_6074C.pl/1.2/Thu Feb  3 09:02:11 2005//
;- CVS Reference       : /DBGU_6059D.pl/1.1/Mon Jan 31 13:54:41 2005//
;- CVS Reference       : /SPI_6088D.pl/1.3/Fri May 20 14:23:02 2005//
;- CVS Reference       : /US_6089C.pl/1.1/Mon Jan 31 13:56:02 2005//
;- CVS Reference       : /SSC_6078A.pl/1.1/Tue Jul 13 07:10:41 2004//
;- CVS Reference       : /TWI_6061B.pl/1.2/Fri Aug  4 08:47:25 2006//
;- CVS Reference       : /TC_6082A.pl/1.7/Wed Mar  9 16:31:51 2005//
;- CVS Reference       : /ADC_6051C.pl/1.1/Mon Jan 31 13:12:40 2005//
;- CVS Reference       : /EBI_SAM7SE512.pl/1.22/Fri Nov 18 17:47:47 2005//
;- CVS Reference       : /SMC_1783A.pl/1.4/Thu Feb  3 10:30:06 2005//
;- CVS Reference       : /SDRC_SAM7SE512.pl/1.7/Fri Jul  8 07:50:18 2005//
;- CVS Reference       : /HECC_SAM7SE512.pl/1.8/Tue Jul 12 06:31:42 2005//
;-  ----------------------------------------------------------------------------

;- Hardware register definition

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR System Peripherals
;- *****************************************************************************

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
                #  4 ;- Reserved
CKGR_PLLR       #  4 ;- PLL Register
;- -------- CKGR_MOR : (CKGR Offset: 0x0) Main Oscillator Register -------- 
AT91C_CKGR_MOSCEN         EQU (0x1:SHL:0) ;- (CKGR) Main Oscillator Enable
AT91C_CKGR_OSCBYPASS      EQU (0x1:SHL:1) ;- (CKGR) Main Oscillator Bypass
AT91C_CKGR_OSCOUNT        EQU (0xFF:SHL:8) ;- (CKGR) Main Oscillator Start-up Time
;- -------- CKGR_MCFR : (CKGR Offset: 0x4) Main Clock Frequency Register -------- 
AT91C_CKGR_MAINF          EQU (0xFFFF:SHL:0) ;- (CKGR) Main Clock Frequency
AT91C_CKGR_MAINRDY        EQU (0x1:SHL:16) ;- (CKGR) Main Clock Ready
;- -------- CKGR_PLLR : (CKGR Offset: 0xc) PLL B Register -------- 
AT91C_CKGR_DIV            EQU (0xFF:SHL:0) ;- (CKGR) Divider Selected
AT91C_CKGR_DIV_0          EQU (0x0) ;- (CKGR) Divider output is 0
AT91C_CKGR_DIV_BYPASS     EQU (0x1) ;- (CKGR) Divider is bypassed
AT91C_CKGR_PLLCOUNT       EQU (0x3F:SHL:8) ;- (CKGR) PLL Counter
AT91C_CKGR_OUT            EQU (0x3:SHL:14) ;- (CKGR) PLL Output Frequency Range
AT91C_CKGR_OUT_0          EQU (0x0:SHL:14) ;- (CKGR) Please refer to the PLL datasheet
AT91C_CKGR_OUT_1          EQU (0x1:SHL:14) ;- (CKGR) Please refer to the PLL datasheet
AT91C_CKGR_OUT_2          EQU (0x2:SHL:14) ;- (CKGR) Please refer to the PLL datasheet
AT91C_CKGR_OUT_3          EQU (0x3:SHL:14) ;- (CKGR) Please refer to the PLL datasheet
AT91C_CKGR_MUL            EQU (0x7FF:SHL:16) ;- (CKGR) PLL Multiplier
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
                #  4 ;- Reserved
PMC_PLLR        #  4 ;- PLL Register
PMC_MCKR        #  4 ;- Master Clock Register
                # 12 ;- Reserved
PMC_PCKR        # 12 ;- Programmable Clock Register
                # 20 ;- Reserved
PMC_IER         #  4 ;- Interrupt Enable Register
PMC_IDR         #  4 ;- Interrupt Disable Register
PMC_SR          #  4 ;- Status Register
PMC_IMR         #  4 ;- Interrupt Mask Register
;- -------- PMC_SCER : (PMC Offset: 0x0) System Clock Enable Register -------- 
AT91C_PMC_PCK             EQU (0x1:SHL:0) ;- (PMC) Processor Clock
AT91C_PMC_UDP             EQU (0x1:SHL:7) ;- (PMC) USB Device Port Clock
AT91C_PMC_PCK0            EQU (0x1:SHL:8) ;- (PMC) Programmable Clock Output
AT91C_PMC_PCK1            EQU (0x1:SHL:9) ;- (PMC) Programmable Clock Output
AT91C_PMC_PCK2            EQU (0x1:SHL:10) ;- (PMC) Programmable Clock Output
;- -------- PMC_SCDR : (PMC Offset: 0x4) System Clock Disable Register -------- 
;- -------- PMC_SCSR : (PMC Offset: 0x8) System Clock Status Register -------- 
;- -------- CKGR_MOR : (PMC Offset: 0x20) Main Oscillator Register -------- 
;- -------- CKGR_MCFR : (PMC Offset: 0x24) Main Clock Frequency Register -------- 
;- -------- CKGR_PLLR : (PMC Offset: 0x2c) PLL B Register -------- 
;- -------- PMC_MCKR : (PMC Offset: 0x30) Master Clock Register -------- 
AT91C_PMC_CSS             EQU (0x3:SHL:0) ;- (PMC) Programmable Clock Selection
AT91C_PMC_CSS_SLOW_CLK    EQU (0x0) ;- (PMC) Slow Clock is selected
AT91C_PMC_CSS_MAIN_CLK    EQU (0x1) ;- (PMC) Main Clock is selected
AT91C_PMC_CSS_PLL_CLK     EQU (0x3) ;- (PMC) Clock from PLL is selected
AT91C_PMC_PRES            EQU (0x7:SHL:2) ;- (PMC) Programmable Clock Prescaler
AT91C_PMC_PRES_CLK        EQU (0x0:SHL:2) ;- (PMC) Selected clock
AT91C_PMC_PRES_CLK_2      EQU (0x1:SHL:2) ;- (PMC) Selected clock divided by 2
AT91C_PMC_PRES_CLK_4      EQU (0x2:SHL:2) ;- (PMC) Selected clock divided by 4
AT91C_PMC_PRES_CLK_8      EQU (0x3:SHL:2) ;- (PMC) Selected clock divided by 8
AT91C_PMC_PRES_CLK_16     EQU (0x4:SHL:2) ;- (PMC) Selected clock divided by 16
AT91C_PMC_PRES_CLK_32     EQU (0x5:SHL:2) ;- (PMC) Selected clock divided by 32
AT91C_PMC_PRES_CLK_64     EQU (0x6:SHL:2) ;- (PMC) Selected clock divided by 64
;- -------- PMC_PCKR : (PMC Offset: 0x40) Programmable Clock Register -------- 
;- -------- PMC_IER : (PMC Offset: 0x60) PMC Interrupt Enable Register -------- 
AT91C_PMC_MOSCS           EQU (0x1:SHL:0) ;- (PMC) MOSC Status/Enable/Disable/Mask
AT91C_PMC_LOCK            EQU (0x1:SHL:2) ;- (PMC) PLL Status/Enable/Disable/Mask
AT91C_PMC_MCKRDY          EQU (0x1:SHL:3) ;- (PMC) MCK_RDY Status/Enable/Disable/Mask
AT91C_PMC_PCK0RDY         EQU (0x1:SHL:8) ;- (PMC) PCK0_RDY Status/Enable/Disable/Mask
AT91C_PMC_PCK1RDY         EQU (0x1:SHL:9) ;- (PMC) PCK1_RDY Status/Enable/Disable/Mask
AT91C_PMC_PCK2RDY         EQU (0x1:SHL:10) ;- (PMC) PCK2_RDY Status/Enable/Disable/Mask
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
AT91C_RSTC_PERRST         EQU (0x1:SHL:2) ;- (RSTC) Peripheral Reset
AT91C_RSTC_EXTRST         EQU (0x1:SHL:3) ;- (RSTC) External Reset
AT91C_RSTC_KEY            EQU (0xFF:SHL:24) ;- (RSTC) Password
;- -------- RSTC_RSR : (RSTC Offset: 0x4) Reset Status Register -------- 
AT91C_RSTC_URSTS          EQU (0x1:SHL:0) ;- (RSTC) User Reset Status
AT91C_RSTC_BODSTS         EQU (0x1:SHL:1) ;- (RSTC) Brownout Detection Status
AT91C_RSTC_RSTTYP         EQU (0x7:SHL:8) ;- (RSTC) Reset Type
AT91C_RSTC_RSTTYP_POWERUP EQU (0x0:SHL:8) ;- (RSTC) Power-up Reset. VDDCORE rising.
AT91C_RSTC_RSTTYP_WAKEUP  EQU (0x1:SHL:8) ;- (RSTC) WakeUp Reset. VDDCORE rising.
AT91C_RSTC_RSTTYP_WATCHDOG EQU (0x2:SHL:8) ;- (RSTC) Watchdog Reset. Watchdog overflow occured.
AT91C_RSTC_RSTTYP_SOFTWARE EQU (0x3:SHL:8) ;- (RSTC) Software Reset. Processor reset required by the software.
AT91C_RSTC_RSTTYP_USER    EQU (0x4:SHL:8) ;- (RSTC) User Reset. NRST pin detected low.
AT91C_RSTC_RSTTYP_BROWNOUT EQU (0x5:SHL:8) ;- (RSTC) Brownout Reset occured.
AT91C_RSTC_NRSTL          EQU (0x1:SHL:16) ;- (RSTC) NRST pin level
AT91C_RSTC_SRCMP          EQU (0x1:SHL:17) ;- (RSTC) Software Reset Command in Progress.
;- -------- RSTC_RMR : (RSTC Offset: 0x8) Reset Mode Register -------- 
AT91C_RSTC_URSTEN         EQU (0x1:SHL:0) ;- (RSTC) User Reset Enable
AT91C_RSTC_URSTIEN        EQU (0x1:SHL:4) ;- (RSTC) User Reset Interrupt Enable
AT91C_RSTC_ERSTL          EQU (0xF:SHL:8) ;- (RSTC) User Reset Length
AT91C_RSTC_BODIEN         EQU (0x1:SHL:16) ;- (RSTC) Brownout Detection Interrupt Enable

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
;-              SOFTWARE API DEFINITION  FOR Voltage Regulator Mode Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_VREG
VREG_MR         #  4 ;- Voltage Regulator Mode Register
;- -------- VREG_MR : (VREG Offset: 0x0) Voltage Regulator Mode Register -------- 
AT91C_VREG_PSTDBY         EQU (0x1:SHL:0) ;- (VREG) Voltage Regulator Power Standby Mode

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Memory Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_MC
MC_RCR          #  4 ;- MC Remap Control Register
MC_ASR          #  4 ;- MC Abort Status Register
MC_AASR         #  4 ;- MC Abort Address Status Register
                #  4 ;- Reserved
MC_PUIA         # 64 ;- MC Protection Unit Area
MC_PUP          #  4 ;- MC Protection Unit Peripherals
MC_PUER         #  4 ;- MC Protection Unit Enable Register
                #  8 ;- Reserved
MC0_FMR         #  4 ;- MC Flash Mode Register
MC0_FCR         #  4 ;- MC Flash Command Register
MC0_FSR         #  4 ;- MC Flash Status Register
MC0_VR          #  4 ;- MC Flash Version Register
MC1_FMR         #  4 ;- MC Flash Mode Register
MC1_FCR         #  4 ;- MC Flash Command Register
MC1_FSR         #  4 ;- MC Flash Status Register
MC1_VR          #  4 ;- MC Flash Version Register
;- -------- MC_RCR : (MC Offset: 0x0) MC Remap Control Register -------- 
AT91C_MC_RCB              EQU (0x1:SHL:0) ;- (MC) Remap Command Bit
;- -------- MC_ASR : (MC Offset: 0x4) MC Abort Status Register -------- 
AT91C_MC_UNDADD           EQU (0x1:SHL:0) ;- (MC) Undefined Addess Abort Status
AT91C_MC_MISADD           EQU (0x1:SHL:1) ;- (MC) Misaligned Addess Abort Status
AT91C_MC_MPU              EQU (0x1:SHL:2) ;- (MC) Memory protection Unit Abort Status
AT91C_MC_ABTSZ            EQU (0x3:SHL:8) ;- (MC) Abort Size Status
AT91C_MC_ABTSZ_BYTE       EQU (0x0:SHL:8) ;- (MC) Byte
AT91C_MC_ABTSZ_HWORD      EQU (0x1:SHL:8) ;- (MC) Half-word
AT91C_MC_ABTSZ_WORD       EQU (0x2:SHL:8) ;- (MC) Word
AT91C_MC_ABTTYP           EQU (0x3:SHL:10) ;- (MC) Abort Type Status
AT91C_MC_ABTTYP_DATAR     EQU (0x0:SHL:10) ;- (MC) Data Read
AT91C_MC_ABTTYP_DATAW     EQU (0x1:SHL:10) ;- (MC) Data Write
AT91C_MC_ABTTYP_FETCH     EQU (0x2:SHL:10) ;- (MC) Code Fetch
AT91C_MC_MST0             EQU (0x1:SHL:16) ;- (MC) Master 0 Abort Source
AT91C_MC_MST1             EQU (0x1:SHL:17) ;- (MC) Master 1 Abort Source
AT91C_MC_SVMST0           EQU (0x1:SHL:24) ;- (MC) Saved Master 0 Abort Source
AT91C_MC_SVMST1           EQU (0x1:SHL:25) ;- (MC) Saved Master 1 Abort Source
;- -------- MC_PUIA : (MC Offset: 0x10) MC Protection Unit Area -------- 
AT91C_MC_PROT             EQU (0x3:SHL:0) ;- (MC) Protection
AT91C_MC_PROT_PNAUNA      EQU (0x0) ;- (MC) Privilege: No Access, User: No Access
AT91C_MC_PROT_PRWUNA      EQU (0x1) ;- (MC) Privilege: Read/Write, User: No Access
AT91C_MC_PROT_PRWURO      EQU (0x2) ;- (MC) Privilege: Read/Write, User: Read Only
AT91C_MC_PROT_PRWURW      EQU (0x3) ;- (MC) Privilege: Read/Write, User: Read/Write
AT91C_MC_SIZE             EQU (0xF:SHL:4) ;- (MC) Internal Area Size
AT91C_MC_SIZE_1KB         EQU (0x0:SHL:4) ;- (MC) Area size 1KByte
AT91C_MC_SIZE_2KB         EQU (0x1:SHL:4) ;- (MC) Area size 2KByte
AT91C_MC_SIZE_4KB         EQU (0x2:SHL:4) ;- (MC) Area size 4KByte
AT91C_MC_SIZE_8KB         EQU (0x3:SHL:4) ;- (MC) Area size 8KByte
AT91C_MC_SIZE_16KB        EQU (0x4:SHL:4) ;- (MC) Area size 16KByte
AT91C_MC_SIZE_32KB        EQU (0x5:SHL:4) ;- (MC) Area size 32KByte
AT91C_MC_SIZE_64KB        EQU (0x6:SHL:4) ;- (MC) Area size 64KByte
AT91C_MC_SIZE_128KB       EQU (0x7:SHL:4) ;- (MC) Area size 128KByte
AT91C_MC_SIZE_256KB       EQU (0x8:SHL:4) ;- (MC) Area size 256KByte
AT91C_MC_SIZE_512KB       EQU (0x9:SHL:4) ;- (MC) Area size 512KByte
AT91C_MC_SIZE_1MB         EQU (0xA:SHL:4) ;- (MC) Area size 1MByte
AT91C_MC_SIZE_2MB         EQU (0xB:SHL:4) ;- (MC) Area size 2MByte
AT91C_MC_SIZE_4MB         EQU (0xC:SHL:4) ;- (MC) Area size 4MByte
AT91C_MC_SIZE_8MB         EQU (0xD:SHL:4) ;- (MC) Area size 8MByte
AT91C_MC_SIZE_16MB        EQU (0xE:SHL:4) ;- (MC) Area size 16MByte
AT91C_MC_SIZE_64MB        EQU (0xF:SHL:4) ;- (MC) Area size 64MByte
AT91C_MC_BA               EQU (0x3FFFF:SHL:10) ;- (MC) Internal Area Base Address
;- -------- MC_PUP : (MC Offset: 0x50) MC Protection Unit Peripheral -------- 
;- -------- MC_PUER : (MC Offset: 0x54) MC Protection Unit Area -------- 
AT91C_MC_PUEB             EQU (0x1:SHL:0) ;- (MC) Protection Unit enable Bit

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Embedded Flash Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_EFC
EFC_FMR         #  4 ;- MC Flash Mode Register
EFC_FCR         #  4 ;- MC Flash Command Register
EFC_FSR         #  4 ;- MC Flash Status Register
EFC_VR          #  4 ;- MC Flash Version Register
;- -------- MC_FMR : (EFC Offset: 0x0) MC Flash Mode Register -------- 
AT91C_MC_FRDY             EQU (0x1:SHL:0) ;- (EFC) Flash Ready
AT91C_MC_LOCKE            EQU (0x1:SHL:2) ;- (EFC) Lock Error
AT91C_MC_PROGE            EQU (0x1:SHL:3) ;- (EFC) Programming Error
AT91C_MC_NEBP             EQU (0x1:SHL:7) ;- (EFC) No Erase Before Programming
AT91C_MC_FWS              EQU (0x3:SHL:8) ;- (EFC) Flash Wait State
AT91C_MC_FWS_0FWS         EQU (0x0:SHL:8) ;- (EFC) 1 cycle for Read, 2 for Write operations
AT91C_MC_FWS_1FWS         EQU (0x1:SHL:8) ;- (EFC) 2 cycles for Read, 3 for Write operations
AT91C_MC_FWS_2FWS         EQU (0x2:SHL:8) ;- (EFC) 3 cycles for Read, 4 for Write operations
AT91C_MC_FWS_3FWS         EQU (0x3:SHL:8) ;- (EFC) 4 cycles for Read, 4 for Write operations
AT91C_MC_FMCN             EQU (0xFF:SHL:16) ;- (EFC) Flash Microsecond Cycle Number
;- -------- MC_FCR : (EFC Offset: 0x4) MC Flash Command Register -------- 
AT91C_MC_FCMD             EQU (0xF:SHL:0) ;- (EFC) Flash Command
AT91C_MC_FCMD_START_PROG  EQU (0x1) ;- (EFC) Starts the programming of th epage specified by PAGEN.
AT91C_MC_FCMD_LOCK        EQU (0x2) ;- (EFC) Starts a lock sequence of the sector defined by the bits 4 to 7 of the field PAGEN.
AT91C_MC_FCMD_PROG_AND_LOCK EQU (0x3) ;- (EFC) The lock sequence automatically happens after the programming sequence is completed.
AT91C_MC_FCMD_UNLOCK      EQU (0x4) ;- (EFC) Starts an unlock sequence of the sector defined by the bits 4 to 7 of the field PAGEN.
AT91C_MC_FCMD_ERASE_ALL   EQU (0x8) ;- (EFC) Starts the erase of the entire flash.If at least a page is locked, the command is cancelled.
AT91C_MC_FCMD_SET_GP_NVM  EQU (0xB) ;- (EFC) Set General Purpose NVM bits.
AT91C_MC_FCMD_CLR_GP_NVM  EQU (0xD) ;- (EFC) Clear General Purpose NVM bits.
AT91C_MC_FCMD_SET_SECURITY EQU (0xF) ;- (EFC) Set Security Bit.
AT91C_MC_PAGEN            EQU (0x3FF:SHL:8) ;- (EFC) Page Number
AT91C_MC_KEY              EQU (0xFF:SHL:24) ;- (EFC) Writing Protect Key
;- -------- MC_FSR : (EFC Offset: 0x8) MC Flash Command Register -------- 
AT91C_MC_SECURITY         EQU (0x1:SHL:4) ;- (EFC) Security Bit Status
AT91C_MC_GPNVM0           EQU (0x1:SHL:8) ;- (EFC) Sector 0 Lock Status
AT91C_MC_GPNVM1           EQU (0x1:SHL:9) ;- (EFC) Sector 1 Lock Status
AT91C_MC_GPNVM2           EQU (0x1:SHL:10) ;- (EFC) Sector 2 Lock Status
AT91C_MC_GPNVM3           EQU (0x1:SHL:11) ;- (EFC) Sector 3 Lock Status
AT91C_MC_GPNVM4           EQU (0x1:SHL:12) ;- (EFC) Sector 4 Lock Status
AT91C_MC_GPNVM5           EQU (0x1:SHL:13) ;- (EFC) Sector 5 Lock Status
AT91C_MC_GPNVM6           EQU (0x1:SHL:14) ;- (EFC) Sector 6 Lock Status
AT91C_MC_GPNVM7           EQU (0x1:SHL:15) ;- (EFC) Sector 7 Lock Status
AT91C_MC_LOCKS0           EQU (0x1:SHL:16) ;- (EFC) Sector 0 Lock Status
AT91C_MC_LOCKS1           EQU (0x1:SHL:17) ;- (EFC) Sector 1 Lock Status
AT91C_MC_LOCKS2           EQU (0x1:SHL:18) ;- (EFC) Sector 2 Lock Status
AT91C_MC_LOCKS3           EQU (0x1:SHL:19) ;- (EFC) Sector 3 Lock Status
AT91C_MC_LOCKS4           EQU (0x1:SHL:20) ;- (EFC) Sector 4 Lock Status
AT91C_MC_LOCKS5           EQU (0x1:SHL:21) ;- (EFC) Sector 5 Lock Status
AT91C_MC_LOCKS6           EQU (0x1:SHL:22) ;- (EFC) Sector 6 Lock Status
AT91C_MC_LOCKS7           EQU (0x1:SHL:23) ;- (EFC) Sector 7 Lock Status
AT91C_MC_LOCKS8           EQU (0x1:SHL:24) ;- (EFC) Sector 8 Lock Status
AT91C_MC_LOCKS9           EQU (0x1:SHL:25) ;- (EFC) Sector 9 Lock Status
AT91C_MC_LOCKS10          EQU (0x1:SHL:26) ;- (EFC) Sector 10 Lock Status
AT91C_MC_LOCKS11          EQU (0x1:SHL:27) ;- (EFC) Sector 11 Lock Status
AT91C_MC_LOCKS12          EQU (0x1:SHL:28) ;- (EFC) Sector 12 Lock Status
AT91C_MC_LOCKS13          EQU (0x1:SHL:29) ;- (EFC) Sector 13 Lock Status
AT91C_MC_LOCKS14          EQU (0x1:SHL:30) ;- (EFC) Sector 14 Lock Status
AT91C_MC_LOCKS15          EQU (0x1:SHL:31) ;- (EFC) Sector 15 Lock Status
;- -------- EFC_VR : (EFC Offset: 0xc) EFC version register -------- 
AT91C_EFC_VERSION         EQU (0xFFF:SHL:0) ;- (EFC) EFC version number
AT91C_EFC_MFN             EQU (0x7:SHL:16) ;- (EFC) EFC MFN

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
;-              SOFTWARE API DEFINITION  FOR Two-wire Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_TWI
TWI_CR          #  4 ;- Control Register
TWI_MMR         #  4 ;- Master Mode Register
TWI_SMR         #  4 ;- Slave Mode Register
TWI_IADR        #  4 ;- Internal Address Register
TWI_CWGR        #  4 ;- Clock Waveform Generator Register
                # 12 ;- Reserved
TWI_SR          #  4 ;- Status Register
TWI_IER         #  4 ;- Interrupt Enable Register
TWI_IDR         #  4 ;- Interrupt Disable Register
TWI_IMR         #  4 ;- Interrupt Mask Register
TWI_RHR         #  4 ;- Receive Holding Register
TWI_THR         #  4 ;- Transmit Holding Register
                # 200 ;- Reserved
TWI_RPR         #  4 ;- Receive Pointer Register
TWI_RCR         #  4 ;- Receive Counter Register
TWI_TPR         #  4 ;- Transmit Pointer Register
TWI_TCR         #  4 ;- Transmit Counter Register
TWI_RNPR        #  4 ;- Receive Next Pointer Register
TWI_RNCR        #  4 ;- Receive Next Counter Register
TWI_TNPR        #  4 ;- Transmit Next Pointer Register
TWI_TNCR        #  4 ;- Transmit Next Counter Register
TWI_PTCR        #  4 ;- PDC Transfer Control Register
TWI_PTSR        #  4 ;- PDC Transfer Status Register
;- -------- TWI_CR : (TWI Offset: 0x0) TWI Control Register -------- 
AT91C_TWI_START           EQU (0x1:SHL:0) ;- (TWI) Send a START Condition
AT91C_TWI_STOP            EQU (0x1:SHL:1) ;- (TWI) Send a STOP Condition
AT91C_TWI_MSEN            EQU (0x1:SHL:2) ;- (TWI) TWI Master Transfer Enabled
AT91C_TWI_MSDIS           EQU (0x1:SHL:3) ;- (TWI) TWI Master Transfer Disabled
AT91C_TWI_SVEN            EQU (0x1:SHL:4) ;- (TWI) TWI Slave mode Enabled
AT91C_TWI_SVDIS           EQU (0x1:SHL:5) ;- (TWI) TWI Slave mode Disabled
AT91C_TWI_SWRST           EQU (0x1:SHL:7) ;- (TWI) Software Reset
;- -------- TWI_MMR : (TWI Offset: 0x4) TWI Master Mode Register -------- 
AT91C_TWI_IADRSZ          EQU (0x3:SHL:8) ;- (TWI) Internal Device Address Size
AT91C_TWI_IADRSZ_NO       EQU (0x0:SHL:8) ;- (TWI) No internal device address
AT91C_TWI_IADRSZ_1_BYTE   EQU (0x1:SHL:8) ;- (TWI) One-byte internal device address
AT91C_TWI_IADRSZ_2_BYTE   EQU (0x2:SHL:8) ;- (TWI) Two-byte internal device address
AT91C_TWI_IADRSZ_3_BYTE   EQU (0x3:SHL:8) ;- (TWI) Three-byte internal device address
AT91C_TWI_MREAD           EQU (0x1:SHL:12) ;- (TWI) Master Read Direction
AT91C_TWI_DADR            EQU (0x7F:SHL:16) ;- (TWI) Device Address
;- -------- TWI_SMR : (TWI Offset: 0x8) TWI Slave Mode Register -------- 
AT91C_TWI_SADR            EQU (0x7F:SHL:16) ;- (TWI) Slave Address
;- -------- TWI_CWGR : (TWI Offset: 0x10) TWI Clock Waveform Generator Register -------- 
AT91C_TWI_CLDIV           EQU (0xFF:SHL:0) ;- (TWI) Clock Low Divider
AT91C_TWI_CHDIV           EQU (0xFF:SHL:8) ;- (TWI) Clock High Divider
AT91C_TWI_CKDIV           EQU (0x7:SHL:16) ;- (TWI) Clock Divider
;- -------- TWI_SR : (TWI Offset: 0x20) TWI Status Register -------- 
AT91C_TWI_TXCOMP_SLAVE    EQU (0x1:SHL:0) ;- (TWI) Transmission Completed
AT91C_TWI_TXCOMP_MASTER   EQU (0x1:SHL:0) ;- (TWI) Transmission Completed
AT91C_TWI_RXRDY           EQU (0x1:SHL:1) ;- (TWI) Receive holding register ReaDY
AT91C_TWI_TXRDY_MASTER    EQU (0x1:SHL:2) ;- (TWI) Transmit holding register ReaDY
AT91C_TWI_TXRDY_SLAVE     EQU (0x1:SHL:2) ;- (TWI) Transmit holding register ReaDY
AT91C_TWI_SVREAD          EQU (0x1:SHL:3) ;- (TWI) Slave READ (used only in Slave mode)
AT91C_TWI_SVACC           EQU (0x1:SHL:4) ;- (TWI) Slave ACCess (used only in Slave mode)
AT91C_TWI_GACC            EQU (0x1:SHL:5) ;- (TWI) General Call ACcess (used only in Slave mode)
AT91C_TWI_OVRE            EQU (0x1:SHL:6) ;- (TWI) Overrun Error (used only in Master and Multi-master mode)
AT91C_TWI_NACK_SLAVE      EQU (0x1:SHL:8) ;- (TWI) Not Acknowledged
AT91C_TWI_NACK_MASTER     EQU (0x1:SHL:8) ;- (TWI) Not Acknowledged
AT91C_TWI_ARBLST_MULTI_MASTER EQU (0x1:SHL:9) ;- (TWI) Arbitration Lost (used only in Multimaster mode)
AT91C_TWI_SCLWS           EQU (0x1:SHL:10) ;- (TWI) Clock Wait State (used only in Slave mode)
AT91C_TWI_EOSACC          EQU (0x1:SHL:11) ;- (TWI) End Of Slave ACCess (used only in Slave mode)
AT91C_TWI_ENDRX           EQU (0x1:SHL:12) ;- (TWI) End of Receiver Transfer
AT91C_TWI_ENDTX           EQU (0x1:SHL:13) ;- (TWI) End of Receiver Transfer
AT91C_TWI_RXBUFF          EQU (0x1:SHL:14) ;- (TWI) RXBUFF Interrupt
AT91C_TWI_TXBUFE          EQU (0x1:SHL:15) ;- (TWI) TXBUFE Interrupt
;- -------- TWI_IER : (TWI Offset: 0x24) TWI Interrupt Enable Register -------- 
;- -------- TWI_IDR : (TWI Offset: 0x28) TWI Interrupt Disable Register -------- 
;- -------- TWI_IMR : (TWI Offset: 0x2c) TWI Interrupt Mask Register -------- 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR PWMC Channel Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_PWMC_CH
PWMC_CMR        #  4 ;- Channel Mode Register
PWMC_CDTYR      #  4 ;- Channel Duty Cycle Register
PWMC_CPRDR      #  4 ;- Channel Period Register
PWMC_CCNTR      #  4 ;- Channel Counter Register
PWMC_CUPDR      #  4 ;- Channel Update Register
PWMC_Reserved   # 12 ;- Reserved
;- -------- PWMC_CMR : (PWMC_CH Offset: 0x0) PWMC Channel Mode Register -------- 
AT91C_PWMC_CPRE           EQU (0xF:SHL:0) ;- (PWMC_CH) Channel Pre-scaler : PWMC_CLKx
AT91C_PWMC_CPRE_MCK       EQU (0x0) ;- (PWMC_CH) 
AT91C_PWMC_CPRE_MCKA      EQU (0xB) ;- (PWMC_CH) 
AT91C_PWMC_CPRE_MCKB      EQU (0xC) ;- (PWMC_CH) 
AT91C_PWMC_CALG           EQU (0x1:SHL:8) ;- (PWMC_CH) Channel Alignment
AT91C_PWMC_CPOL           EQU (0x1:SHL:9) ;- (PWMC_CH) Channel Polarity
AT91C_PWMC_CPD            EQU (0x1:SHL:10) ;- (PWMC_CH) Channel Update Period
;- -------- PWMC_CDTYR : (PWMC_CH Offset: 0x4) PWMC Channel Duty Cycle Register -------- 
AT91C_PWMC_CDTY           EQU (0x0:SHL:0) ;- (PWMC_CH) Channel Duty Cycle
;- -------- PWMC_CPRDR : (PWMC_CH Offset: 0x8) PWMC Channel Period Register -------- 
AT91C_PWMC_CPRD           EQU (0x0:SHL:0) ;- (PWMC_CH) Channel Period
;- -------- PWMC_CCNTR : (PWMC_CH Offset: 0xc) PWMC Channel Counter Register -------- 
AT91C_PWMC_CCNT           EQU (0x0:SHL:0) ;- (PWMC_CH) Channel Counter
;- -------- PWMC_CUPDR : (PWMC_CH Offset: 0x10) PWMC Channel Update Register -------- 
AT91C_PWMC_CUPD           EQU (0x0:SHL:0) ;- (PWMC_CH) Channel Update

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Pulse Width Modulation Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_PWMC
PWMC_MR         #  4 ;- PWMC Mode Register
PWMC_ENA        #  4 ;- PWMC Enable Register
PWMC_DIS        #  4 ;- PWMC Disable Register
PWMC_SR         #  4 ;- PWMC Status Register
PWMC_IER        #  4 ;- PWMC Interrupt Enable Register
PWMC_IDR        #  4 ;- PWMC Interrupt Disable Register
PWMC_IMR        #  4 ;- PWMC Interrupt Mask Register
PWMC_ISR        #  4 ;- PWMC Interrupt Status Register
                # 220 ;- Reserved
PWMC_VR         #  4 ;- PWMC Version Register
                # 256 ;- Reserved
PWMC_CH         # 96 ;- PWMC Channel
;- -------- PWMC_MR : (PWMC Offset: 0x0) PWMC Mode Register -------- 
AT91C_PWMC_DIVA           EQU (0xFF:SHL:0) ;- (PWMC) CLKA divide factor.
AT91C_PWMC_PREA           EQU (0xF:SHL:8) ;- (PWMC) Divider Input Clock Prescaler A
AT91C_PWMC_PREA_MCK       EQU (0x0:SHL:8) ;- (PWMC) 
AT91C_PWMC_DIVB           EQU (0xFF:SHL:16) ;- (PWMC) CLKB divide factor.
AT91C_PWMC_PREB           EQU (0xF:SHL:24) ;- (PWMC) Divider Input Clock Prescaler B
AT91C_PWMC_PREB_MCK       EQU (0x0:SHL:24) ;- (PWMC) 
;- -------- PWMC_ENA : (PWMC Offset: 0x4) PWMC Enable Register -------- 
AT91C_PWMC_CHID0          EQU (0x1:SHL:0) ;- (PWMC) Channel ID 0
AT91C_PWMC_CHID1          EQU (0x1:SHL:1) ;- (PWMC) Channel ID 1
AT91C_PWMC_CHID2          EQU (0x1:SHL:2) ;- (PWMC) Channel ID 2
AT91C_PWMC_CHID3          EQU (0x1:SHL:3) ;- (PWMC) Channel ID 3
;- -------- PWMC_DIS : (PWMC Offset: 0x8) PWMC Disable Register -------- 
;- -------- PWMC_SR : (PWMC Offset: 0xc) PWMC Status Register -------- 
;- -------- PWMC_IER : (PWMC Offset: 0x10) PWMC Interrupt Enable Register -------- 
;- -------- PWMC_IDR : (PWMC Offset: 0x14) PWMC Interrupt Disable Register -------- 
;- -------- PWMC_IMR : (PWMC Offset: 0x18) PWMC Interrupt Mask Register -------- 
;- -------- PWMC_ISR : (PWMC Offset: 0x1c) PWMC Interrupt Status Register -------- 

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
;-              SOFTWARE API DEFINITION  FOR External Bus Interface 
;- *****************************************************************************
                ^ 0 ;- AT91S_EBI
EBI_CSA         #  4 ;- EBI Chip Select Assignment Register
;- -------- EBI_CSA : (EBI Offset: 0x0) Chip Select Assignment Register -------- 
AT91C_EBI_CS1A            EQU (0x1:SHL:1) ;- (EBI) Chip Select 1 Assignment
AT91C_EBI_CS1A_SMC        EQU (0x0:SHL:1) ;- (EBI) Chip Select 1 is assigned to the Static Memory Controller.
AT91C_EBI_CS1A_SDRAMC     EQU (0x1:SHL:1) ;- (EBI) Chip Select 1 is assigned to the SDRAM Controller.
AT91C_EBI_CS2A            EQU (0x1:SHL:2) ;- (EBI) Chip Select 2 Assignment
AT91C_EBI_CS2A_SMC        EQU (0x0:SHL:2) ;- (EBI) Chip Select 2 is assigned to the Static Memory Controller and NCS2, NCS5 and NCS6 behave as defined by the SMC.
AT91C_EBI_CS2A_SMC_CompactFlash EQU (0x1:SHL:2) ;- (EBI) Chip Select 2 is assigned to the Static Memory Controller and the CompactFlash Logic (second slot) is actived. Accesing the address space reserved to NCS5 and NCS6 may lead to an unpedictable outcome
AT91C_EBI_CS3A            EQU (0x1:SHL:3) ;- (EBI) Chip Select 3 Assignment
AT91C_EBI_CS3A_SMC        EQU (0x0:SHL:3) ;- (EBI) Chip Select 3 is only assigned to the Static Memory Controller and NCS3 behaves as defined by the SMC2.
AT91C_EBI_CS3A_SMC_NandFlash EQU (0x1:SHL:3) ;- (EBI) Chip Select 3 is assigned to the Static Memory Controller and the NAND Flash Logic is activated.
AT91C_EBI_CS4A            EQU (0x1:SHL:4) ;- (EBI) Chip Select 4 Assignment
AT91C_EBI_CS4A_SMC        EQU (0x0:SHL:4) ;- (EBI) Chip Select 4 is assigned to the Static Memory Controller and NCS2, NCS5 and NCS6 behave as defined by the SMC.
AT91C_EBI_CS4A_SMC_CompactFlash EQU (0x1:SHL:4) ;- (EBI) Chip Select 4 is assigned to the Static Memory Controller and the CompactFlash Logic (first slot) is actived. Accesing the address space reserved to NCS5 and NCS6 may lead to an unpedictable outcome
AT91C_EBI_NWPC            EQU (0x1:SHL:16) ;- (EBI) NWait Pin Configuration
AT91C_EBI_NWPC_OFF        EQU (0x0:SHL:16) ;- (EBI) The NWAIT device pin is not connected to the External Wait Request input of the Static Memory Controller ,this multiplexe pin can be used as a PIO.
AT91C_EBI_NWPC_ON         EQU (0x1:SHL:16) ;- (EBI) The NWAIT device pin is connected to the External Wait Request input of the Static Memory Controller.

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Static Memory Controller 2 Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_SMC2
SMC2_CSR        # 32 ;- SMC2 Chip Select Register
;- -------- SMC2_CSR : (SMC2 Offset: 0x0) SMC2 Chip Select Register -------- 
AT91C_SMC2_NWS            EQU (0x7F:SHL:0) ;- (SMC2) Number of Wait States
AT91C_SMC2_WSEN           EQU (0x1:SHL:7) ;- (SMC2) Wait State Enable
AT91C_SMC2_TDF            EQU (0xF:SHL:8) ;- (SMC2) Data Float Time
AT91C_SMC2_BAT            EQU (0x1:SHL:12) ;- (SMC2) Byte Access Type
AT91C_SMC2_DBW            EQU (0x1:SHL:13) ;- (SMC2) Data Bus Width
AT91C_SMC2_DBW_16         EQU (0x1:SHL:13) ;- (SMC2) 16-bit.
AT91C_SMC2_DBW_8          EQU (0x2:SHL:13) ;- (SMC2) 8-bit.
AT91C_SMC2_DRP            EQU (0x1:SHL:15) ;- (SMC2) Data Read Protocol
AT91C_SMC2_ACSS           EQU (0x3:SHL:16) ;- (SMC2) Address to Chip Select Setup
AT91C_SMC2_ACSS_STANDARD  EQU (0x0:SHL:16) ;- (SMC2) Standard, asserted at the beginning of the access and deasserted at the end.
AT91C_SMC2_ACSS_1_CYCLE   EQU (0x1:SHL:16) ;- (SMC2) One cycle less at the beginning and the end of the access.
AT91C_SMC2_ACSS_2_CYCLES  EQU (0x2:SHL:16) ;- (SMC2) Two cycles less at the beginning and the end of the access.
AT91C_SMC2_ACSS_3_CYCLES  EQU (0x3:SHL:16) ;- (SMC2) Three cycles less at the beginning and the end of the access.
AT91C_SMC2_RWSETUP        EQU (0x7:SHL:24) ;- (SMC2) Read and Write Signal Setup Time
AT91C_SMC2_RWHOLD         EQU (0x7:SHL:28) ;- (SMC2) Read and Write Signal Hold Time

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR SDRAM Controller Interface
;- *****************************************************************************
                ^ 0 ;- AT91S_SDRC
SDRC_MR         #  4 ;- SDRAM Controller Mode Register
SDRC_TR         #  4 ;- SDRAM Controller Refresh Timer Register
SDRC_CR         #  4 ;- SDRAM Controller Configuration Register
SDRC_SRR        #  4 ;- SDRAM Controller Self Refresh Register
SDRC_LPR        #  4 ;- SDRAM Controller Low Power Register
SDRC_IER        #  4 ;- SDRAM Controller Interrupt Enable Register
SDRC_IDR        #  4 ;- SDRAM Controller Interrupt Disable Register
SDRC_IMR        #  4 ;- SDRAM Controller Interrupt Mask Register
SDRC_ISR        #  4 ;- SDRAM Controller Interrupt Mask Register
SDRC_VER        #  4 ;- SDRAM Controller Version Register
;- -------- SDRC_MR : (SDRC Offset: 0x0) SDRAM Controller Mode Register -------- 
AT91C_SDRC_MODE           EQU (0xF:SHL:0) ;- (SDRC) Mode
AT91C_SDRC_MODE_NORMAL_CMD EQU (0x0) ;- (SDRC) Normal Mode
AT91C_SDRC_MODE_NOP_CMD   EQU (0x1) ;- (SDRC) NOP Command
AT91C_SDRC_MODE_PRCGALL_CMD EQU (0x2) ;- (SDRC) All Banks Precharge Command
AT91C_SDRC_MODE_LMR_CMD   EQU (0x3) ;- (SDRC) Load Mode Register Command
AT91C_SDRC_MODE_RFSH_CMD  EQU (0x4) ;- (SDRC) Refresh Command
AT91C_SDRC_DBW            EQU (0x1:SHL:4) ;- (SDRC) Data Bus Width
AT91C_SDRC_DBW_32_BITS    EQU (0x0:SHL:4) ;- (SDRC) 32 Bits datas bus
AT91C_SDRC_DBW_16_BITS    EQU (0x1:SHL:4) ;- (SDRC) 16 Bits datas bus
;- -------- SDRC_TR : (SDRC Offset: 0x4) SDRC Refresh Timer Register -------- 
AT91C_SDRC_COUNT          EQU (0xFFF:SHL:0) ;- (SDRC) Refresh Counter
;- -------- SDRC_CR : (SDRC Offset: 0x8) SDRAM Configuration Register -------- 
AT91C_SDRC_NC             EQU (0x3:SHL:0) ;- (SDRC) Number of Column Bits
AT91C_SDRC_NC_8           EQU (0x0) ;- (SDRC) 8 Bits
AT91C_SDRC_NC_9           EQU (0x1) ;- (SDRC) 9 Bits
AT91C_SDRC_NC_10          EQU (0x2) ;- (SDRC) 10 Bits
AT91C_SDRC_NC_11          EQU (0x3) ;- (SDRC) 11 Bits
AT91C_SDRC_NR             EQU (0x3:SHL:2) ;- (SDRC) Number of Row Bits
AT91C_SDRC_NR_11          EQU (0x0:SHL:2) ;- (SDRC) 11 Bits
AT91C_SDRC_NR_12          EQU (0x1:SHL:2) ;- (SDRC) 12 Bits
AT91C_SDRC_NR_13          EQU (0x2:SHL:2) ;- (SDRC) 13 Bits
AT91C_SDRC_NB             EQU (0x1:SHL:4) ;- (SDRC) Number of Banks
AT91C_SDRC_NB_2_BANKS     EQU (0x0:SHL:4) ;- (SDRC) 2 banks
AT91C_SDRC_NB_4_BANKS     EQU (0x1:SHL:4) ;- (SDRC) 4 banks
AT91C_SDRC_CAS            EQU (0x3:SHL:5) ;- (SDRC) CAS Latency
AT91C_SDRC_CAS_2          EQU (0x2:SHL:5) ;- (SDRC) 2 cycles
AT91C_SDRC_TWR            EQU (0xF:SHL:7) ;- (SDRC) Number of Write Recovery Time Cycles
AT91C_SDRC_TRC            EQU (0xF:SHL:11) ;- (SDRC) Number of RAS Cycle Time Cycles
AT91C_SDRC_TRP            EQU (0xF:SHL:15) ;- (SDRC) Number of RAS Precharge Time Cycles
AT91C_SDRC_TRCD           EQU (0xF:SHL:19) ;- (SDRC) Number of RAS to CAS Delay Cycles
AT91C_SDRC_TRAS           EQU (0xF:SHL:23) ;- (SDRC) Number of RAS Active Time Cycles
AT91C_SDRC_TXSR           EQU (0xF:SHL:27) ;- (SDRC) Number of Command Recovery Time Cycles
;- -------- SDRC_SRR : (SDRC Offset: 0xc) SDRAM Controller Self-refresh Register -------- 
AT91C_SDRC_SRCB           EQU (0x1:SHL:0) ;- (SDRC) Self-refresh Command Bit
;- -------- SDRC_LPR : (SDRC Offset: 0x10) SDRAM Controller Low-power Register -------- 
AT91C_SDRC_LPCB           EQU (0x1:SHL:0) ;- (SDRC) Low-power Command Bit
;- -------- SDRC_IER : (SDRC Offset: 0x14) SDRAM Controller Interrupt Enable Register -------- 
AT91C_SDRC_RES            EQU (0x1:SHL:0) ;- (SDRC) Refresh Error Status
;- -------- SDRC_IDR : (SDRC Offset: 0x18) SDRAM Controller Interrupt Disable Register -------- 
;- -------- SDRC_IMR : (SDRC Offset: 0x1c) SDRAM Controller Interrupt Mask Register -------- 
;- -------- SDRC_ISR : (SDRC Offset: 0x20) SDRAM Controller Interrupt Status Register -------- 
;- -------- IPB_VER : (SDRC Offset: 0x24) SDRAM Controller IP version Register -------- 
AT91C_SDRC_VERSION        EQU (0xFFF:SHL:0) ;- (SDRC) IP version of the macrocell
AT91C_SDRC_MFN            EQU (0x7:SHL:1) ;- (SDRC) 

;- *****************************************************************************
;-              SOFTWARE API DEFINITION  FOR Error Correction Code controller
;- *****************************************************************************
                ^ 0 ;- AT91S_ECC
ECC_CR          #  4 ;-  ECC reset register
ECC_MR          #  4 ;-  ECC Page size register
ECC_SR          #  4 ;-  ECC Status register
ECC_PR          #  4 ;-  ECC Parity register
ECC_NPR         #  4 ;-  ECC Parity N register
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
;- -------- ECC_VR : (ECC Offset: 0x14) ECC version register -------- 
AT91C_ECC_VERSION         EQU (0xFFF:SHL:0) ;- (ECC) ECC version number
AT91C_ECC_MFN             EQU (0x7:SHL:16) ;- (ECC) ECC MFN

;- *****************************************************************************
;-               REGISTER ADDRESS DEFINITION FOR AT91SAM7SE256
;- *****************************************************************************
;- ========== Register definition for SYS peripheral ========== 
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
AT91C_CKGR_PLLR           EQU (0xFFFFFC2C) ;- (CKGR) PLL Register
AT91C_CKGR_MCFR           EQU (0xFFFFFC24) ;- (CKGR) Main Clock  Frequency Register
;- ========== Register definition for PMC peripheral ========== 
AT91C_PMC_IDR             EQU (0xFFFFFC64) ;- (PMC) Interrupt Disable Register
AT91C_PMC_MOR             EQU (0xFFFFFC20) ;- (PMC) Main Oscillator Register
AT91C_PMC_PLLR            EQU (0xFFFFFC2C) ;- (PMC) PLL Register
AT91C_PMC_PCER            EQU (0xFFFFFC10) ;- (PMC) Peripheral Clock Enable Register
AT91C_PMC_PCKR            EQU (0xFFFFFC40) ;- (PMC) Programmable Clock Register
AT91C_PMC_MCKR            EQU (0xFFFFFC30) ;- (PMC) Master Clock Register
AT91C_PMC_SCDR            EQU (0xFFFFFC04) ;- (PMC) System Clock Disable Register
AT91C_PMC_PCDR            EQU (0xFFFFFC14) ;- (PMC) Peripheral Clock Disable Register
AT91C_PMC_SCSR            EQU (0xFFFFFC08) ;- (PMC) System Clock Status Register
AT91C_PMC_PCSR            EQU (0xFFFFFC18) ;- (PMC) Peripheral Clock Status Register
AT91C_PMC_MCFR            EQU (0xFFFFFC24) ;- (PMC) Main Clock  Frequency Register
AT91C_PMC_SCER            EQU (0xFFFFFC00) ;- (PMC) System Clock Enable Register
AT91C_PMC_IMR             EQU (0xFFFFFC6C) ;- (PMC) Interrupt Mask Register
AT91C_PMC_IER             EQU (0xFFFFFC60) ;- (PMC) Interrupt Enable Register
AT91C_PMC_SR              EQU (0xFFFFFC68) ;- (PMC) Status Register
;- ========== Register definition for RSTC peripheral ========== 
AT91C_RSTC_RCR            EQU (0xFFFFFD00) ;- (RSTC) Reset Control Register
AT91C_RSTC_RMR            EQU (0xFFFFFD08) ;- (RSTC) Reset Mode Register
AT91C_RSTC_RSR            EQU (0xFFFFFD04) ;- (RSTC) Reset Status Register
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
;- ========== Register definition for VREG peripheral ========== 
AT91C_VREG_MR             EQU (0xFFFFFD60) ;- (VREG) Voltage Regulator Mode Register
;- ========== Register definition for MC peripheral ========== 
AT91C_MC_ASR              EQU (0xFFFFFF04) ;- (MC) MC Abort Status Register
AT91C_MC_RCR              EQU (0xFFFFFF00) ;- (MC) MC Remap Control Register
AT91C_MC_PUP              EQU (0xFFFFFF50) ;- (MC) MC Protection Unit Peripherals
AT91C_MC_PUIA             EQU (0xFFFFFF10) ;- (MC) MC Protection Unit Area
AT91C_MC_AASR             EQU (0xFFFFFF08) ;- (MC) MC Abort Address Status Register
AT91C_MC_PUER             EQU (0xFFFFFF54) ;- (MC) MC Protection Unit Enable Register
;- ========== Register definition for EFC peripheral ========== 
AT91C_EFC_FCR             EQU (0xFFFFFF64) ;- (EFC) MC Flash Command Register
AT91C_EFC_FSR             EQU (0xFFFFFF68) ;- (EFC) MC Flash Status Register
AT91C_EFC_VR              EQU (0xFFFFFF6C) ;- (EFC) MC Flash Version Register
AT91C_EFC_FMR             EQU (0xFFFFFF60) ;- (EFC) MC Flash Mode Register
;- ========== Register definition for PDC_SPI peripheral ========== 
AT91C_SPI_PTCR            EQU (0xFFFE0120) ;- (PDC_SPI) PDC Transfer Control Register
AT91C_SPI_TPR             EQU (0xFFFE0108) ;- (PDC_SPI) Transmit Pointer Register
AT91C_SPI_TCR             EQU (0xFFFE010C) ;- (PDC_SPI) Transmit Counter Register
AT91C_SPI_RCR             EQU (0xFFFE0104) ;- (PDC_SPI) Receive Counter Register
AT91C_SPI_PTSR            EQU (0xFFFE0124) ;- (PDC_SPI) PDC Transfer Status Register
AT91C_SPI_RNPR            EQU (0xFFFE0110) ;- (PDC_SPI) Receive Next Pointer Register
AT91C_SPI_RPR             EQU (0xFFFE0100) ;- (PDC_SPI) Receive Pointer Register
AT91C_SPI_TNCR            EQU (0xFFFE011C) ;- (PDC_SPI) Transmit Next Counter Register
AT91C_SPI_RNCR            EQU (0xFFFE0114) ;- (PDC_SPI) Receive Next Counter Register
AT91C_SPI_TNPR            EQU (0xFFFE0118) ;- (PDC_SPI) Transmit Next Pointer Register
;- ========== Register definition for SPI peripheral ========== 
AT91C_SPI_IER             EQU (0xFFFE0014) ;- (SPI) Interrupt Enable Register
AT91C_SPI_SR              EQU (0xFFFE0010) ;- (SPI) Status Register
AT91C_SPI_IDR             EQU (0xFFFE0018) ;- (SPI) Interrupt Disable Register
AT91C_SPI_CR              EQU (0xFFFE0000) ;- (SPI) Control Register
AT91C_SPI_MR              EQU (0xFFFE0004) ;- (SPI) Mode Register
AT91C_SPI_IMR             EQU (0xFFFE001C) ;- (SPI) Interrupt Mask Register
AT91C_SPI_TDR             EQU (0xFFFE000C) ;- (SPI) Transmit Data Register
AT91C_SPI_RDR             EQU (0xFFFE0008) ;- (SPI) Receive Data Register
AT91C_SPI_CSR             EQU (0xFFFE0030) ;- (SPI) Chip Select Register
;- ========== Register definition for PDC_US1 peripheral ========== 
AT91C_US1_RNCR            EQU (0xFFFC4114) ;- (PDC_US1) Receive Next Counter Register
AT91C_US1_PTCR            EQU (0xFFFC4120) ;- (PDC_US1) PDC Transfer Control Register
AT91C_US1_TCR             EQU (0xFFFC410C) ;- (PDC_US1) Transmit Counter Register
AT91C_US1_PTSR            EQU (0xFFFC4124) ;- (PDC_US1) PDC Transfer Status Register
AT91C_US1_TNPR            EQU (0xFFFC4118) ;- (PDC_US1) Transmit Next Pointer Register
AT91C_US1_RCR             EQU (0xFFFC4104) ;- (PDC_US1) Receive Counter Register
AT91C_US1_RNPR            EQU (0xFFFC4110) ;- (PDC_US1) Receive Next Pointer Register
AT91C_US1_RPR             EQU (0xFFFC4100) ;- (PDC_US1) Receive Pointer Register
AT91C_US1_TNCR            EQU (0xFFFC411C) ;- (PDC_US1) Transmit Next Counter Register
AT91C_US1_TPR             EQU (0xFFFC4108) ;- (PDC_US1) Transmit Pointer Register
;- ========== Register definition for US1 peripheral ========== 
AT91C_US1_IF              EQU (0xFFFC404C) ;- (US1) IRDA_FILTER Register
AT91C_US1_NER             EQU (0xFFFC4044) ;- (US1) Nb Errors Register
AT91C_US1_RTOR            EQU (0xFFFC4024) ;- (US1) Receiver Time-out Register
AT91C_US1_CSR             EQU (0xFFFC4014) ;- (US1) Channel Status Register
AT91C_US1_IDR             EQU (0xFFFC400C) ;- (US1) Interrupt Disable Register
AT91C_US1_IER             EQU (0xFFFC4008) ;- (US1) Interrupt Enable Register
AT91C_US1_THR             EQU (0xFFFC401C) ;- (US1) Transmitter Holding Register
AT91C_US1_TTGR            EQU (0xFFFC4028) ;- (US1) Transmitter Time-guard Register
AT91C_US1_RHR             EQU (0xFFFC4018) ;- (US1) Receiver Holding Register
AT91C_US1_BRGR            EQU (0xFFFC4020) ;- (US1) Baud Rate Generator Register
AT91C_US1_IMR             EQU (0xFFFC4010) ;- (US1) Interrupt Mask Register
AT91C_US1_FIDI            EQU (0xFFFC4040) ;- (US1) FI_DI_Ratio Register
AT91C_US1_CR              EQU (0xFFFC4000) ;- (US1) Control Register
AT91C_US1_MR              EQU (0xFFFC4004) ;- (US1) Mode Register
;- ========== Register definition for PDC_US0 peripheral ========== 
AT91C_US0_TNPR            EQU (0xFFFC0118) ;- (PDC_US0) Transmit Next Pointer Register
AT91C_US0_RNPR            EQU (0xFFFC0110) ;- (PDC_US0) Receive Next Pointer Register
AT91C_US0_TCR             EQU (0xFFFC010C) ;- (PDC_US0) Transmit Counter Register
AT91C_US0_PTCR            EQU (0xFFFC0120) ;- (PDC_US0) PDC Transfer Control Register
AT91C_US0_PTSR            EQU (0xFFFC0124) ;- (PDC_US0) PDC Transfer Status Register
AT91C_US0_TNCR            EQU (0xFFFC011C) ;- (PDC_US0) Transmit Next Counter Register
AT91C_US0_TPR             EQU (0xFFFC0108) ;- (PDC_US0) Transmit Pointer Register
AT91C_US0_RCR             EQU (0xFFFC0104) ;- (PDC_US0) Receive Counter Register
AT91C_US0_RPR             EQU (0xFFFC0100) ;- (PDC_US0) Receive Pointer Register
AT91C_US0_RNCR            EQU (0xFFFC0114) ;- (PDC_US0) Receive Next Counter Register
;- ========== Register definition for US0 peripheral ========== 
AT91C_US0_BRGR            EQU (0xFFFC0020) ;- (US0) Baud Rate Generator Register
AT91C_US0_NER             EQU (0xFFFC0044) ;- (US0) Nb Errors Register
AT91C_US0_CR              EQU (0xFFFC0000) ;- (US0) Control Register
AT91C_US0_IMR             EQU (0xFFFC0010) ;- (US0) Interrupt Mask Register
AT91C_US0_FIDI            EQU (0xFFFC0040) ;- (US0) FI_DI_Ratio Register
AT91C_US0_TTGR            EQU (0xFFFC0028) ;- (US0) Transmitter Time-guard Register
AT91C_US0_MR              EQU (0xFFFC0004) ;- (US0) Mode Register
AT91C_US0_RTOR            EQU (0xFFFC0024) ;- (US0) Receiver Time-out Register
AT91C_US0_CSR             EQU (0xFFFC0014) ;- (US0) Channel Status Register
AT91C_US0_RHR             EQU (0xFFFC0018) ;- (US0) Receiver Holding Register
AT91C_US0_IDR             EQU (0xFFFC000C) ;- (US0) Interrupt Disable Register
AT91C_US0_THR             EQU (0xFFFC001C) ;- (US0) Transmitter Holding Register
AT91C_US0_IF              EQU (0xFFFC004C) ;- (US0) IRDA_FILTER Register
AT91C_US0_IER             EQU (0xFFFC0008) ;- (US0) Interrupt Enable Register
;- ========== Register definition for PDC_SSC peripheral ========== 
AT91C_SSC_TNCR            EQU (0xFFFD411C) ;- (PDC_SSC) Transmit Next Counter Register
AT91C_SSC_RPR             EQU (0xFFFD4100) ;- (PDC_SSC) Receive Pointer Register
AT91C_SSC_RNCR            EQU (0xFFFD4114) ;- (PDC_SSC) Receive Next Counter Register
AT91C_SSC_TPR             EQU (0xFFFD4108) ;- (PDC_SSC) Transmit Pointer Register
AT91C_SSC_PTCR            EQU (0xFFFD4120) ;- (PDC_SSC) PDC Transfer Control Register
AT91C_SSC_TCR             EQU (0xFFFD410C) ;- (PDC_SSC) Transmit Counter Register
AT91C_SSC_RCR             EQU (0xFFFD4104) ;- (PDC_SSC) Receive Counter Register
AT91C_SSC_RNPR            EQU (0xFFFD4110) ;- (PDC_SSC) Receive Next Pointer Register
AT91C_SSC_TNPR            EQU (0xFFFD4118) ;- (PDC_SSC) Transmit Next Pointer Register
AT91C_SSC_PTSR            EQU (0xFFFD4124) ;- (PDC_SSC) PDC Transfer Status Register
;- ========== Register definition for SSC peripheral ========== 
AT91C_SSC_RHR             EQU (0xFFFD4020) ;- (SSC) Receive Holding Register
AT91C_SSC_RSHR            EQU (0xFFFD4030) ;- (SSC) Receive Sync Holding Register
AT91C_SSC_TFMR            EQU (0xFFFD401C) ;- (SSC) Transmit Frame Mode Register
AT91C_SSC_IDR             EQU (0xFFFD4048) ;- (SSC) Interrupt Disable Register
AT91C_SSC_THR             EQU (0xFFFD4024) ;- (SSC) Transmit Holding Register
AT91C_SSC_RCMR            EQU (0xFFFD4010) ;- (SSC) Receive Clock ModeRegister
AT91C_SSC_IER             EQU (0xFFFD4044) ;- (SSC) Interrupt Enable Register
AT91C_SSC_TSHR            EQU (0xFFFD4034) ;- (SSC) Transmit Sync Holding Register
AT91C_SSC_SR              EQU (0xFFFD4040) ;- (SSC) Status Register
AT91C_SSC_CMR             EQU (0xFFFD4004) ;- (SSC) Clock Mode Register
AT91C_SSC_TCMR            EQU (0xFFFD4018) ;- (SSC) Transmit Clock Mode Register
AT91C_SSC_CR              EQU (0xFFFD4000) ;- (SSC) Control Register
AT91C_SSC_IMR             EQU (0xFFFD404C) ;- (SSC) Interrupt Mask Register
AT91C_SSC_RFMR            EQU (0xFFFD4014) ;- (SSC) Receive Frame Mode Register
;- ========== Register definition for TWI peripheral ========== 
AT91C_TWI_IER             EQU (0xFFFB8024) ;- (TWI) Interrupt Enable Register
AT91C_TWI_CR              EQU (0xFFFB8000) ;- (TWI) Control Register
AT91C_TWI_SR              EQU (0xFFFB8020) ;- (TWI) Status Register
AT91C_TWI_IMR             EQU (0xFFFB802C) ;- (TWI) Interrupt Mask Register
AT91C_TWI_THR             EQU (0xFFFB8034) ;- (TWI) Transmit Holding Register
AT91C_TWI_IDR             EQU (0xFFFB8028) ;- (TWI) Interrupt Disable Register
AT91C_TWI_IADR            EQU (0xFFFB800C) ;- (TWI) Internal Address Register
AT91C_TWI_MMR             EQU (0xFFFB8004) ;- (TWI) Master Mode Register
AT91C_TWI_CWGR            EQU (0xFFFB8010) ;- (TWI) Clock Waveform Generator Register
AT91C_TWI_RHR             EQU (0xFFFB8030) ;- (TWI) Receive Holding Register
AT91C_TWI_SMR             EQU (0xFFFB8008) ;- (TWI) Slave Mode Register
;- ========== Register definition for PWMC_CH3 peripheral ========== 
AT91C_CH3_CUPDR           EQU (0xFFFCC270) ;- (PWMC_CH3) Channel Update Register
AT91C_CH3_Reserved        EQU (0xFFFCC274) ;- (PWMC_CH3) Reserved
AT91C_CH3_CPRDR           EQU (0xFFFCC268) ;- (PWMC_CH3) Channel Period Register
AT91C_CH3_CDTYR           EQU (0xFFFCC264) ;- (PWMC_CH3) Channel Duty Cycle Register
AT91C_CH3_CCNTR           EQU (0xFFFCC26C) ;- (PWMC_CH3) Channel Counter Register
AT91C_CH3_CMR             EQU (0xFFFCC260) ;- (PWMC_CH3) Channel Mode Register
;- ========== Register definition for PWMC_CH2 peripheral ========== 
AT91C_CH2_Reserved        EQU (0xFFFCC254) ;- (PWMC_CH2) Reserved
AT91C_CH2_CMR             EQU (0xFFFCC240) ;- (PWMC_CH2) Channel Mode Register
AT91C_CH2_CCNTR           EQU (0xFFFCC24C) ;- (PWMC_CH2) Channel Counter Register
AT91C_CH2_CPRDR           EQU (0xFFFCC248) ;- (PWMC_CH2) Channel Period Register
AT91C_CH2_CUPDR           EQU (0xFFFCC250) ;- (PWMC_CH2) Channel Update Register
AT91C_CH2_CDTYR           EQU (0xFFFCC244) ;- (PWMC_CH2) Channel Duty Cycle Register
;- ========== Register definition for PWMC_CH1 peripheral ========== 
AT91C_CH1_Reserved        EQU (0xFFFCC234) ;- (PWMC_CH1) Reserved
AT91C_CH1_CUPDR           EQU (0xFFFCC230) ;- (PWMC_CH1) Channel Update Register
AT91C_CH1_CPRDR           EQU (0xFFFCC228) ;- (PWMC_CH1) Channel Period Register
AT91C_CH1_CCNTR           EQU (0xFFFCC22C) ;- (PWMC_CH1) Channel Counter Register
AT91C_CH1_CDTYR           EQU (0xFFFCC224) ;- (PWMC_CH1) Channel Duty Cycle Register
AT91C_CH1_CMR             EQU (0xFFFCC220) ;- (PWMC_CH1) Channel Mode Register
;- ========== Register definition for PWMC_CH0 peripheral ========== 
AT91C_CH0_Reserved        EQU (0xFFFCC214) ;- (PWMC_CH0) Reserved
AT91C_CH0_CPRDR           EQU (0xFFFCC208) ;- (PWMC_CH0) Channel Period Register
AT91C_CH0_CDTYR           EQU (0xFFFCC204) ;- (PWMC_CH0) Channel Duty Cycle Register
AT91C_CH0_CMR             EQU (0xFFFCC200) ;- (PWMC_CH0) Channel Mode Register
AT91C_CH0_CUPDR           EQU (0xFFFCC210) ;- (PWMC_CH0) Channel Update Register
AT91C_CH0_CCNTR           EQU (0xFFFCC20C) ;- (PWMC_CH0) Channel Counter Register
;- ========== Register definition for PWMC peripheral ========== 
AT91C_PWMC_IDR            EQU (0xFFFCC014) ;- (PWMC) PWMC Interrupt Disable Register
AT91C_PWMC_DIS            EQU (0xFFFCC008) ;- (PWMC) PWMC Disable Register
AT91C_PWMC_IER            EQU (0xFFFCC010) ;- (PWMC) PWMC Interrupt Enable Register
AT91C_PWMC_VR             EQU (0xFFFCC0FC) ;- (PWMC) PWMC Version Register
AT91C_PWMC_ISR            EQU (0xFFFCC01C) ;- (PWMC) PWMC Interrupt Status Register
AT91C_PWMC_SR             EQU (0xFFFCC00C) ;- (PWMC) PWMC Status Register
AT91C_PWMC_IMR            EQU (0xFFFCC018) ;- (PWMC) PWMC Interrupt Mask Register
AT91C_PWMC_MR             EQU (0xFFFCC000) ;- (PWMC) PWMC Mode Register
AT91C_PWMC_ENA            EQU (0xFFFCC004) ;- (PWMC) PWMC Enable Register
;- ========== Register definition for UDP peripheral ========== 
AT91C_UDP_IMR             EQU (0xFFFB0018) ;- (UDP) Interrupt Mask Register
AT91C_UDP_FADDR           EQU (0xFFFB0008) ;- (UDP) Function Address Register
AT91C_UDP_NUM             EQU (0xFFFB0000) ;- (UDP) Frame Number Register
AT91C_UDP_FDR             EQU (0xFFFB0050) ;- (UDP) Endpoint FIFO Data Register
AT91C_UDP_ISR             EQU (0xFFFB001C) ;- (UDP) Interrupt Status Register
AT91C_UDP_CSR             EQU (0xFFFB0030) ;- (UDP) Endpoint Control and Status Register
AT91C_UDP_IDR             EQU (0xFFFB0014) ;- (UDP) Interrupt Disable Register
AT91C_UDP_ICR             EQU (0xFFFB0020) ;- (UDP) Interrupt Clear Register
AT91C_UDP_RSTEP           EQU (0xFFFB0028) ;- (UDP) Reset Endpoint Register
AT91C_UDP_TXVC            EQU (0xFFFB0074) ;- (UDP) Transceiver Control Register
AT91C_UDP_GLBSTATE        EQU (0xFFFB0004) ;- (UDP) Global State Register
AT91C_UDP_IER             EQU (0xFFFB0010) ;- (UDP) Interrupt Enable Register
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
;- ========== Register definition for TCB peripheral ========== 
AT91C_TCB_BMR             EQU (0xFFFA00C4) ;- (TCB) TC Block Mode Register
AT91C_TCB_BCR             EQU (0xFFFA00C0) ;- (TCB) TC Block Control Register
;- ========== Register definition for PDC_ADC peripheral ========== 
AT91C_ADC_PTSR            EQU (0xFFFD8124) ;- (PDC_ADC) PDC Transfer Status Register
AT91C_ADC_PTCR            EQU (0xFFFD8120) ;- (PDC_ADC) PDC Transfer Control Register
AT91C_ADC_TNPR            EQU (0xFFFD8118) ;- (PDC_ADC) Transmit Next Pointer Register
AT91C_ADC_TNCR            EQU (0xFFFD811C) ;- (PDC_ADC) Transmit Next Counter Register
AT91C_ADC_RNPR            EQU (0xFFFD8110) ;- (PDC_ADC) Receive Next Pointer Register
AT91C_ADC_RNCR            EQU (0xFFFD8114) ;- (PDC_ADC) Receive Next Counter Register
AT91C_ADC_RPR             EQU (0xFFFD8100) ;- (PDC_ADC) Receive Pointer Register
AT91C_ADC_TCR             EQU (0xFFFD810C) ;- (PDC_ADC) Transmit Counter Register
AT91C_ADC_TPR             EQU (0xFFFD8108) ;- (PDC_ADC) Transmit Pointer Register
AT91C_ADC_RCR             EQU (0xFFFD8104) ;- (PDC_ADC) Receive Counter Register
;- ========== Register definition for ADC peripheral ========== 
AT91C_ADC_CDR2            EQU (0xFFFD8038) ;- (ADC) ADC Channel Data Register 2
AT91C_ADC_CDR3            EQU (0xFFFD803C) ;- (ADC) ADC Channel Data Register 3
AT91C_ADC_CDR0            EQU (0xFFFD8030) ;- (ADC) ADC Channel Data Register 0
AT91C_ADC_CDR5            EQU (0xFFFD8044) ;- (ADC) ADC Channel Data Register 5
AT91C_ADC_CHDR            EQU (0xFFFD8014) ;- (ADC) ADC Channel Disable Register
AT91C_ADC_SR              EQU (0xFFFD801C) ;- (ADC) ADC Status Register
AT91C_ADC_CDR4            EQU (0xFFFD8040) ;- (ADC) ADC Channel Data Register 4
AT91C_ADC_CDR1            EQU (0xFFFD8034) ;- (ADC) ADC Channel Data Register 1
AT91C_ADC_LCDR            EQU (0xFFFD8020) ;- (ADC) ADC Last Converted Data Register
AT91C_ADC_IDR             EQU (0xFFFD8028) ;- (ADC) ADC Interrupt Disable Register
AT91C_ADC_CR              EQU (0xFFFD8000) ;- (ADC) ADC Control Register
AT91C_ADC_CDR7            EQU (0xFFFD804C) ;- (ADC) ADC Channel Data Register 7
AT91C_ADC_CDR6            EQU (0xFFFD8048) ;- (ADC) ADC Channel Data Register 6
AT91C_ADC_IER             EQU (0xFFFD8024) ;- (ADC) ADC Interrupt Enable Register
AT91C_ADC_CHER            EQU (0xFFFD8010) ;- (ADC) ADC Channel Enable Register
AT91C_ADC_CHSR            EQU (0xFFFD8018) ;- (ADC) ADC Channel Status Register
AT91C_ADC_MR              EQU (0xFFFD8004) ;- (ADC) ADC Mode Register
AT91C_ADC_IMR             EQU (0xFFFD802C) ;- (ADC) ADC Interrupt Mask Register
;- ========== Register definition for EBI peripheral ========== 
AT91C_EBI_CSA             EQU (0xFFFFFF80) ;- (EBI) EBI Chip Select Assignment Register
;- ========== Register definition for SMC peripheral ========== 
AT91C_SMC_CSR             EQU (0xFFFFFF90) ;- (SMC) SMC2 Chip Select Register
;- ========== Register definition for SDRC peripheral ========== 
AT91C_SDRC_IDR            EQU (0xFFFFFFC8) ;- (SDRC) SDRAM Controller Interrupt Disable Register
AT91C_SDRC_TR             EQU (0xFFFFFFB4) ;- (SDRC) SDRAM Controller Refresh Timer Register
AT91C_SDRC_SRR            EQU (0xFFFFFFBC) ;- (SDRC) SDRAM Controller Self Refresh Register
AT91C_SDRC_MR             EQU (0xFFFFFFB0) ;- (SDRC) SDRAM Controller Mode Register
AT91C_SDRC_CR             EQU (0xFFFFFFB8) ;- (SDRC) SDRAM Controller Configuration Register
AT91C_SDRC_IMR            EQU (0xFFFFFFCC) ;- (SDRC) SDRAM Controller Interrupt Mask Register
AT91C_SDRC_LPR            EQU (0xFFFFFFC0) ;- (SDRC) SDRAM Controller Low Power Register
AT91C_SDRC_ISR            EQU (0xFFFFFFD0) ;- (SDRC) SDRAM Controller Interrupt Mask Register
AT91C_SDRC_VER            EQU (0xFFFFFFD4) ;- (SDRC) SDRAM Controller Version Register
AT91C_SDRC_IER            EQU (0xFFFFFFC4) ;- (SDRC) SDRAM Controller Interrupt Enable Register
;- ========== Register definition for HECC peripheral ========== 
AT91C_HECC_MR             EQU (0xFFFFFFE0) ;- (HECC)  ECC Page size register
AT91C_HECC_CR             EQU (0xFFFFFFDC) ;- (HECC)  ECC reset register
AT91C_HECC_SR             EQU (0xFFFFFFE4) ;- (HECC)  ECC Status register
AT91C_HECC_VR             EQU (0xFFFFFFF0) ;- (HECC)  ECC Version register
AT91C_HECC_NPR            EQU (0xFFFFFFEC) ;- (HECC)  ECC Parity N register
AT91C_HECC_PR             EQU (0xFFFFFFE8) ;- (HECC)  ECC Parity register

;- *****************************************************************************
;-               PIO DEFINITIONS FOR AT91SAM7SE256
;- *****************************************************************************
AT91C_PIO_PA0             EQU (1:SHL:0) ;- Pin Controlled by PA0
AT91C_PA0_PWM0            EQU (AT91C_PIO_PA0) ;-  
AT91C_PA0_A0_NBS0         EQU (AT91C_PIO_PA0) ;-  
AT91C_PIO_PA1             EQU (1:SHL:1) ;- Pin Controlled by PA1
AT91C_PA1_PWM1            EQU (AT91C_PIO_PA1) ;-  
AT91C_PA1_A1_NBS2         EQU (AT91C_PIO_PA1) ;-  
AT91C_PIO_PA10            EQU (1:SHL:10) ;- Pin Controlled by PA10
AT91C_PA10_DTXD           EQU (AT91C_PIO_PA10) ;-  
AT91C_PA10_A10            EQU (AT91C_PIO_PA10) ;-  
AT91C_PIO_PA11            EQU (1:SHL:11) ;- Pin Controlled by PA11
AT91C_PA11_NPCS0          EQU (AT91C_PIO_PA11) ;-  
AT91C_PA11_A11            EQU (AT91C_PIO_PA11) ;-  
AT91C_PIO_PA12            EQU (1:SHL:12) ;- Pin Controlled by PA12
AT91C_PA12_MISO           EQU (AT91C_PIO_PA12) ;-  
AT91C_PA12_A12            EQU (AT91C_PIO_PA12) ;-  
AT91C_PIO_PA13            EQU (1:SHL:13) ;- Pin Controlled by PA13
AT91C_PA13_MOSI           EQU (AT91C_PIO_PA13) ;-  
AT91C_PA13_A13            EQU (AT91C_PIO_PA13) ;-  
AT91C_PIO_PA14            EQU (1:SHL:14) ;- Pin Controlled by PA14
AT91C_PA14_SPCK           EQU (AT91C_PIO_PA14) ;-  
AT91C_PA14_A14            EQU (AT91C_PIO_PA14) ;-  
AT91C_PIO_PA15            EQU (1:SHL:15) ;- Pin Controlled by PA15
AT91C_PA15_TF             EQU (AT91C_PIO_PA15) ;-  
AT91C_PA15_A15            EQU (AT91C_PIO_PA15) ;-  
AT91C_PIO_PA16            EQU (1:SHL:16) ;- Pin Controlled by PA16
AT91C_PA16_TK             EQU (AT91C_PIO_PA16) ;-  
AT91C_PA16_A16_BA0        EQU (AT91C_PIO_PA16) ;-  
AT91C_PIO_PA17            EQU (1:SHL:17) ;- Pin Controlled by PA17
AT91C_PA17_TD             EQU (AT91C_PIO_PA17) ;-  
AT91C_PA17_A17_BA1        EQU (AT91C_PIO_PA17) ;-  
AT91C_PIO_PA18            EQU (1:SHL:18) ;- Pin Controlled by PA18
AT91C_PA18_RD             EQU (AT91C_PIO_PA18) ;-  
AT91C_PA18_NBS3_CFIOW     EQU (AT91C_PIO_PA18) ;-  
AT91C_PIO_PA19            EQU (1:SHL:19) ;- Pin Controlled by PA19
AT91C_PA19_RK             EQU (AT91C_PIO_PA19) ;-  
AT91C_PA19_NCS4_CFCS0     EQU (AT91C_PIO_PA19) ;-  
AT91C_PIO_PA2             EQU (1:SHL:2) ;- Pin Controlled by PA2
AT91C_PA2_PWM2            EQU (AT91C_PIO_PA2) ;-  
AT91C_PA2_A2              EQU (AT91C_PIO_PA2) ;-  
AT91C_PIO_PA20            EQU (1:SHL:20) ;- Pin Controlled by PA20
AT91C_PA20_RF             EQU (AT91C_PIO_PA20) ;-  
AT91C_PA20_NCS2_CFCS1     EQU (AT91C_PIO_PA20) ;-  
AT91C_PIO_PA21            EQU (1:SHL:21) ;- Pin Controlled by PA21
AT91C_PA21_RXD1           EQU (AT91C_PIO_PA21) ;-  
AT91C_PA21_NCS6_CFCE2     EQU (AT91C_PIO_PA21) ;-  
AT91C_PIO_PA22            EQU (1:SHL:22) ;- Pin Controlled by PA22
AT91C_PA22_TXD1           EQU (AT91C_PIO_PA22) ;-  
AT91C_PA22_NCS5_CFCE1     EQU (AT91C_PIO_PA22) ;-  
AT91C_PIO_PA23            EQU (1:SHL:23) ;- Pin Controlled by PA23
AT91C_PA23_SCK1           EQU (AT91C_PIO_PA23) ;-  
AT91C_PA23_NWR1_NBS1_CFIOR_NUB EQU (AT91C_PIO_PA23) ;-  
AT91C_PIO_PA24            EQU (1:SHL:24) ;- Pin Controlled by PA24
AT91C_PA24_RTS1           EQU (AT91C_PIO_PA24) ;-  
AT91C_PA24_SDA10          EQU (AT91C_PIO_PA24) ;-  
AT91C_PIO_PA25            EQU (1:SHL:25) ;- Pin Controlled by PA25
AT91C_PA25_CTS1           EQU (AT91C_PIO_PA25) ;-  
AT91C_PA25_SDCKE          EQU (AT91C_PIO_PA25) ;-  
AT91C_PIO_PA26            EQU (1:SHL:26) ;- Pin Controlled by PA26
AT91C_PA26_DCD1           EQU (AT91C_PIO_PA26) ;-  
AT91C_PA26_NCS1_SDCS      EQU (AT91C_PIO_PA26) ;-  
AT91C_PIO_PA27            EQU (1:SHL:27) ;- Pin Controlled by PA27
AT91C_PA27_DTR1           EQU (AT91C_PIO_PA27) ;-  
AT91C_PA27_SDWE           EQU (AT91C_PIO_PA27) ;-  
AT91C_PIO_PA28            EQU (1:SHL:28) ;- Pin Controlled by PA28
AT91C_PA28_DSR1           EQU (AT91C_PIO_PA28) ;-  
AT91C_PA28_CAS            EQU (AT91C_PIO_PA28) ;-  
AT91C_PIO_PA29            EQU (1:SHL:29) ;- Pin Controlled by PA29
AT91C_PA29_RI1            EQU (AT91C_PIO_PA29) ;-  
AT91C_PA29_RAS            EQU (AT91C_PIO_PA29) ;-  
AT91C_PIO_PA3             EQU (1:SHL:3) ;- Pin Controlled by PA3
AT91C_PA3_TWD             EQU (AT91C_PIO_PA3) ;-  
AT91C_PA3_A3              EQU (AT91C_PIO_PA3) ;-  
AT91C_PIO_PA30            EQU (1:SHL:30) ;- Pin Controlled by PA30
AT91C_PA30_IRQ1           EQU (AT91C_PIO_PA30) ;-  
AT91C_PA30_D30            EQU (AT91C_PIO_PA30) ;-  
AT91C_PIO_PA31            EQU (1:SHL:31) ;- Pin Controlled by PA31
AT91C_PA31_NPCS1          EQU (AT91C_PIO_PA31) ;-  
AT91C_PA31_D31            EQU (AT91C_PIO_PA31) ;-  
AT91C_PIO_PA4             EQU (1:SHL:4) ;- Pin Controlled by PA4
AT91C_PA4_TWCK            EQU (AT91C_PIO_PA4) ;-  
AT91C_PA4_A4              EQU (AT91C_PIO_PA4) ;-  
AT91C_PIO_PA5             EQU (1:SHL:5) ;- Pin Controlled by PA5
AT91C_PA5_RXD0            EQU (AT91C_PIO_PA5) ;-  
AT91C_PA5_A5              EQU (AT91C_PIO_PA5) ;-  
AT91C_PIO_PA6             EQU (1:SHL:6) ;- Pin Controlled by PA6
AT91C_PA6_TXD0            EQU (AT91C_PIO_PA6) ;-  
AT91C_PA6_A6              EQU (AT91C_PIO_PA6) ;-  
AT91C_PIO_PA7             EQU (1:SHL:7) ;- Pin Controlled by PA7
AT91C_PA7_RTS0            EQU (AT91C_PIO_PA7) ;-  
AT91C_PA7_A7              EQU (AT91C_PIO_PA7) ;-  
AT91C_PIO_PA8             EQU (1:SHL:8) ;- Pin Controlled by PA8
AT91C_PA8_CTS0            EQU (AT91C_PIO_PA8) ;-  
AT91C_PA8_A8              EQU (AT91C_PIO_PA8) ;-  
AT91C_PIO_PA9             EQU (1:SHL:9) ;- Pin Controlled by PA9
AT91C_PA9_DRXD            EQU (AT91C_PIO_PA9) ;-  
AT91C_PA9_A9              EQU (AT91C_PIO_PA9) ;-  
AT91C_PIO_PB0             EQU (1:SHL:0) ;- Pin Controlled by PB0
AT91C_PB0_TIOA0           EQU (AT91C_PIO_PB0) ;-  
AT91C_PB0_A0_NBS0         EQU (AT91C_PIO_PB0) ;-  
AT91C_PIO_PB1             EQU (1:SHL:1) ;- Pin Controlled by PB1
AT91C_PB1_TIOB0           EQU (AT91C_PIO_PB1) ;-  
AT91C_PB1_A1_NBS2         EQU (AT91C_PIO_PB1) ;-  
AT91C_PIO_PB10            EQU (1:SHL:10) ;- Pin Controlled by PB10
AT91C_PB10_NPCS2          EQU (AT91C_PIO_PB10) ;-  
AT91C_PB10_A10            EQU (AT91C_PIO_PB10) ;-  
AT91C_PIO_PB11            EQU (1:SHL:11) ;- Pin Controlled by PB11
AT91C_PB11_PWM0           EQU (AT91C_PIO_PB11) ;-  
AT91C_PB11_A11            EQU (AT91C_PIO_PB11) ;-  
AT91C_PIO_PB12            EQU (1:SHL:12) ;- Pin Controlled by PB12
AT91C_PB12_PWM1           EQU (AT91C_PIO_PB12) ;-  
AT91C_PB12_A12            EQU (AT91C_PIO_PB12) ;-  
AT91C_PIO_PB13            EQU (1:SHL:13) ;- Pin Controlled by PB13
AT91C_PB13_PWM2           EQU (AT91C_PIO_PB13) ;-  
AT91C_PB13_A13            EQU (AT91C_PIO_PB13) ;-  
AT91C_PIO_PB14            EQU (1:SHL:14) ;- Pin Controlled by PB14
AT91C_PB14_PWM3           EQU (AT91C_PIO_PB14) ;-  
AT91C_PB14_A14            EQU (AT91C_PIO_PB14) ;-  
AT91C_PIO_PB15            EQU (1:SHL:15) ;- Pin Controlled by PB15
AT91C_PB15_TIOA1          EQU (AT91C_PIO_PB15) ;-  
AT91C_PB15_A15            EQU (AT91C_PIO_PB15) ;-  
AT91C_PIO_PB16            EQU (1:SHL:16) ;- Pin Controlled by PB16
AT91C_PB16_TIOA2          EQU (AT91C_PIO_PB16) ;-  
AT91C_PB16_A16_BA0        EQU (AT91C_PIO_PB16) ;-  
AT91C_PIO_PB17            EQU (1:SHL:17) ;- Pin Controlled by PB17
AT91C_PB17_PCK1           EQU (AT91C_PIO_PB17) ;-  
AT91C_PB17_A17_BA1        EQU (AT91C_PIO_PB17) ;-  
AT91C_PIO_PB18            EQU (1:SHL:18) ;- Pin Controlled by PB18
AT91C_PB18_PCK2           EQU (AT91C_PIO_PB18) ;-  
AT91C_PB18_D16            EQU (AT91C_PIO_PB18) ;-  
AT91C_PIO_PB19            EQU (1:SHL:19) ;- Pin Controlled by PB19
AT91C_PB19_FIQ            EQU (AT91C_PIO_PB19) ;-  
AT91C_PB19_D17            EQU (AT91C_PIO_PB19) ;-  
AT91C_PIO_PB2             EQU (1:SHL:2) ;- Pin Controlled by PB2
AT91C_PB2_SCK0            EQU (AT91C_PIO_PB2) ;-  
AT91C_PB2_A2              EQU (AT91C_PIO_PB2) ;-  
AT91C_PIO_PB20            EQU (1:SHL:20) ;- Pin Controlled by PB20
AT91C_PB20_IRQ0           EQU (AT91C_PIO_PB20) ;-  
AT91C_PB20_D18            EQU (AT91C_PIO_PB20) ;-  
AT91C_PIO_PB21            EQU (1:SHL:21) ;- Pin Controlled by PB21
AT91C_PB21_PCK1           EQU (AT91C_PIO_PB21) ;-  
AT91C_PB21_D19            EQU (AT91C_PIO_PB21) ;-  
AT91C_PIO_PB22            EQU (1:SHL:22) ;- Pin Controlled by PB22
AT91C_PB22_NPCS3          EQU (AT91C_PIO_PB22) ;-  
AT91C_PB22_D20            EQU (AT91C_PIO_PB22) ;-  
AT91C_PIO_PB23            EQU (1:SHL:23) ;- Pin Controlled by PB23
AT91C_PB23_PWM0           EQU (AT91C_PIO_PB23) ;-  
AT91C_PB23_D21            EQU (AT91C_PIO_PB23) ;-  
AT91C_PIO_PB24            EQU (1:SHL:24) ;- Pin Controlled by PB24
AT91C_PB24_PWM1           EQU (AT91C_PIO_PB24) ;-  
AT91C_PB24_D22            EQU (AT91C_PIO_PB24) ;-  
AT91C_PIO_PB25            EQU (1:SHL:25) ;- Pin Controlled by PB25
AT91C_PB25_PWM2           EQU (AT91C_PIO_PB25) ;-  
AT91C_PB25_D23            EQU (AT91C_PIO_PB25) ;-  
AT91C_PIO_PB26            EQU (1:SHL:26) ;- Pin Controlled by PB26
AT91C_PB26_TIOA2          EQU (AT91C_PIO_PB26) ;-  
AT91C_PB26_D24            EQU (AT91C_PIO_PB26) ;-  
AT91C_PIO_PB27            EQU (1:SHL:27) ;- Pin Controlled by PB27
AT91C_PB27_TIOB2          EQU (AT91C_PIO_PB27) ;-  
AT91C_PB27_D25            EQU (AT91C_PIO_PB27) ;-  
AT91C_PIO_PB28            EQU (1:SHL:28) ;- Pin Controlled by PB28
AT91C_PB28_TCLK1          EQU (AT91C_PIO_PB28) ;-  
AT91C_PB28_D26            EQU (AT91C_PIO_PB28) ;-  
AT91C_PIO_PB29            EQU (1:SHL:29) ;- Pin Controlled by PB29
AT91C_PB29_TCLK2          EQU (AT91C_PIO_PB29) ;-  
AT91C_PB29_D27            EQU (AT91C_PIO_PB29) ;-  
AT91C_PIO_PB3             EQU (1:SHL:3) ;- Pin Controlled by PB3
AT91C_PB3_NPCS3           EQU (AT91C_PIO_PB3) ;-  
AT91C_PB3_A3              EQU (AT91C_PIO_PB3) ;-  
AT91C_PIO_PB30            EQU (1:SHL:30) ;- Pin Controlled by PB30
AT91C_PB30_NPCS2          EQU (AT91C_PIO_PB30) ;-  
AT91C_PB30_D28            EQU (AT91C_PIO_PB30) ;-  
AT91C_PIO_PB31            EQU (1:SHL:31) ;- Pin Controlled by PB31
AT91C_PB31_PCK2           EQU (AT91C_PIO_PB31) ;-  
AT91C_PB31_D29            EQU (AT91C_PIO_PB31) ;-  
AT91C_PIO_PB4             EQU (1:SHL:4) ;- Pin Controlled by PB4
AT91C_PB4_TCLK0           EQU (AT91C_PIO_PB4) ;-  
AT91C_PB4_A4              EQU (AT91C_PIO_PB4) ;-  
AT91C_PIO_PB5             EQU (1:SHL:5) ;- Pin Controlled by PB5
AT91C_PB5_NPCS3           EQU (AT91C_PIO_PB5) ;-  
AT91C_PB5_A5              EQU (AT91C_PIO_PB5) ;-  
AT91C_PIO_PB6             EQU (1:SHL:6) ;- Pin Controlled by PB6
AT91C_PB6_PCK0            EQU (AT91C_PIO_PB6) ;-  
AT91C_PB6_A6              EQU (AT91C_PIO_PB6) ;-  
AT91C_PIO_PB7             EQU (1:SHL:7) ;- Pin Controlled by PB7
AT91C_PB7_PWM3            EQU (AT91C_PIO_PB7) ;-  
AT91C_PB7_A7              EQU (AT91C_PIO_PB7) ;-  
AT91C_PIO_PB8             EQU (1:SHL:8) ;- Pin Controlled by PB8
AT91C_PB8_ADTRG           EQU (AT91C_PIO_PB8) ;-  
AT91C_PB8_A8              EQU (AT91C_PIO_PB8) ;-  
AT91C_PIO_PB9             EQU (1:SHL:9) ;- Pin Controlled by PB9
AT91C_PB9_NPCS1           EQU (AT91C_PIO_PB9) ;-  
AT91C_PB9_A9              EQU (AT91C_PIO_PB9) ;-  
AT91C_PIO_PC0             EQU (1:SHL:0) ;- Pin Controlled by PC0
AT91C_PC0_D0              EQU (AT91C_PIO_PC0) ;-  
AT91C_PIO_PC1             EQU (1:SHL:1) ;- Pin Controlled by PC1
AT91C_PC1_D1              EQU (AT91C_PIO_PC1) ;-  
AT91C_PIO_PC10            EQU (1:SHL:10) ;- Pin Controlled by PC10
AT91C_PC10_D10            EQU (AT91C_PIO_PC10) ;-  
AT91C_PC10_PCK0           EQU (AT91C_PIO_PC10) ;-  
AT91C_PIO_PC11            EQU (1:SHL:11) ;- Pin Controlled by PC11
AT91C_PC11_D11            EQU (AT91C_PIO_PC11) ;-  
AT91C_PC11_PCK1           EQU (AT91C_PIO_PC11) ;-  
AT91C_PIO_PC12            EQU (1:SHL:12) ;- Pin Controlled by PC12
AT91C_PC12_D12            EQU (AT91C_PIO_PC12) ;-  
AT91C_PC12_PCK2           EQU (AT91C_PIO_PC12) ;-  
AT91C_PIO_PC13            EQU (1:SHL:13) ;- Pin Controlled by PC13
AT91C_PC13_D13            EQU (AT91C_PIO_PC13) ;-  
AT91C_PIO_PC14            EQU (1:SHL:14) ;- Pin Controlled by PC14
AT91C_PC14_D14            EQU (AT91C_PIO_PC14) ;-  
AT91C_PC14_NPCS1          EQU (AT91C_PIO_PC14) ;-  
AT91C_PIO_PC15            EQU (1:SHL:15) ;- Pin Controlled by PC15
AT91C_PC15_D15            EQU (AT91C_PIO_PC15) ;-  
AT91C_PC15_NCS3_NANDCS    EQU (AT91C_PIO_PC15) ;-  
AT91C_PIO_PC16            EQU (1:SHL:16) ;- Pin Controlled by PC16
AT91C_PC16_A18            EQU (AT91C_PIO_PC16) ;-  
AT91C_PC16_NWAIT          EQU (AT91C_PIO_PC16) ;-  
AT91C_PIO_PC17            EQU (1:SHL:17) ;- Pin Controlled by PC17
AT91C_PC17_A19            EQU (AT91C_PIO_PC17) ;-  
AT91C_PC17_NANDOE         EQU (AT91C_PIO_PC17) ;-  
AT91C_PIO_PC18            EQU (1:SHL:18) ;- Pin Controlled by PC18
AT91C_PC18_A20            EQU (AT91C_PIO_PC18) ;-  
AT91C_PC18_NANDWE         EQU (AT91C_PIO_PC18) ;-  
AT91C_PIO_PC19            EQU (1:SHL:19) ;- Pin Controlled by PC19
AT91C_PC19_A21            EQU (AT91C_PIO_PC19) ;-  
AT91C_PIO_PC2             EQU (1:SHL:2) ;- Pin Controlled by PC2
AT91C_PC2_D2              EQU (AT91C_PIO_PC2) ;-  
AT91C_PIO_PC20            EQU (1:SHL:20) ;- Pin Controlled by PC20
AT91C_PC20_A22            EQU (AT91C_PIO_PC20) ;-  
AT91C_PC20_NCS7           EQU (AT91C_PIO_PC20) ;-  
AT91C_PIO_PC21            EQU (1:SHL:21) ;- Pin Controlled by PC21
AT91C_PC21_A23            EQU (AT91C_PIO_PC21) ;-  
AT91C_PC21_NWR0_NWE_CFWE  EQU (AT91C_PIO_PC21) ;-  
AT91C_PIO_PC22            EQU (1:SHL:22) ;- Pin Controlled by PC22
AT91C_PC22_A24            EQU (AT91C_PIO_PC22) ;-  
AT91C_PC22_NRD_CFOE       EQU (AT91C_PIO_PC22) ;-  
AT91C_PIO_PC23            EQU (1:SHL:23) ;- Pin Controlled by PC23
AT91C_PC23_A25_CFRNW      EQU (AT91C_PIO_PC23) ;-  
AT91C_PC23_NCS0           EQU (AT91C_PIO_PC23) ;-  
AT91C_PIO_PC3             EQU (1:SHL:3) ;- Pin Controlled by PC3
AT91C_PC3_D3              EQU (AT91C_PIO_PC3) ;-  
AT91C_PIO_PC4             EQU (1:SHL:4) ;- Pin Controlled by PC4
AT91C_PC4_D4              EQU (AT91C_PIO_PC4) ;-  
AT91C_PIO_PC5             EQU (1:SHL:5) ;- Pin Controlled by PC5
AT91C_PC5_D5              EQU (AT91C_PIO_PC5) ;-  
AT91C_PIO_PC6             EQU (1:SHL:6) ;- Pin Controlled by PC6
AT91C_PC6_D6              EQU (AT91C_PIO_PC6) ;-  
AT91C_PIO_PC7             EQU (1:SHL:7) ;- Pin Controlled by PC7
AT91C_PC7_D7              EQU (AT91C_PIO_PC7) ;-  
AT91C_PIO_PC8             EQU (1:SHL:8) ;- Pin Controlled by PC8
AT91C_PC8_D8              EQU (AT91C_PIO_PC8) ;-  
AT91C_PC8_RTS1            EQU (AT91C_PIO_PC8) ;-  
AT91C_PIO_PC9             EQU (1:SHL:9) ;- Pin Controlled by PC9
AT91C_PC9_D9              EQU (AT91C_PIO_PC9) ;-  
AT91C_PC9_DTR1            EQU (AT91C_PIO_PC9) ;-  

;- *****************************************************************************
;-               PERIPHERAL ID DEFINITIONS FOR AT91SAM7SE256
;- *****************************************************************************
AT91C_ID_FIQ              EQU ( 0) ;- Advanced Interrupt Controller (FIQ)
AT91C_ID_SYS              EQU ( 1) ;- System Peripheral
AT91C_ID_PIOA             EQU ( 2) ;- Parallel IO Controller A
AT91C_ID_PIOB             EQU ( 3) ;- Parallel IO Controller B
AT91C_ID_PIOC             EQU ( 4) ;- Parallel IO Controller C
AT91C_ID_SPI              EQU ( 5) ;- Serial Peripheral Interface 0
AT91C_ID_US0              EQU ( 6) ;- USART 0
AT91C_ID_US1              EQU ( 7) ;- USART 1
AT91C_ID_SSC              EQU ( 8) ;- Serial Synchronous Controller
AT91C_ID_TWI              EQU ( 9) ;- Two-Wire Interface
AT91C_ID_PWMC             EQU (10) ;- PWM Controller
AT91C_ID_UDP              EQU (11) ;- USB Device Port
AT91C_ID_TC0              EQU (12) ;- Timer Counter 0
AT91C_ID_TC1              EQU (13) ;- Timer Counter 1
AT91C_ID_TC2              EQU (14) ;- Timer Counter 2
AT91C_ID_ADC              EQU (15) ;- Analog-to-Digital Converter
AT91C_ID_16_Reserved      EQU (16) ;- Reserved
AT91C_ID_17_Reserved      EQU (17) ;- Reserved
AT91C_ID_18_Reserved      EQU (18) ;- Reserved
AT91C_ID_19_Reserved      EQU (19) ;- Reserved
AT91C_ID_20_Reserved      EQU (20) ;- Reserved
AT91C_ID_21_Reserved      EQU (21) ;- Reserved
AT91C_ID_22_Reserved      EQU (22) ;- Reserved
AT91C_ID_23_Reserved      EQU (23) ;- Reserved
AT91C_ID_24_Reserved      EQU (24) ;- Reserved
AT91C_ID_25_Reserved      EQU (25) ;- Reserved
AT91C_ID_26_Reserved      EQU (26) ;- Reserved
AT91C_ID_27_Reserved      EQU (27) ;- Reserved
AT91C_ID_28_Reserved      EQU (28) ;- Reserved
AT91C_ID_IRQ0             EQU (29) ;- Advanced Interrupt Controller (IRQ0)
AT91C_ID_IRQ1             EQU (30) ;- Advanced Interrupt Controller (IRQ1)
AT91C_ID_31_Reserved      EQU (31) ;- Reserved
AT91C_ALL_INT             EQU (0x6000FFFF) ;- ALL VALID INTERRUPTS

;- *****************************************************************************
;-               BASE ADDRESS DEFINITIONS FOR AT91SAM7SE256
;- *****************************************************************************
AT91C_BASE_SYS            EQU (0xFFFFF000) ;- (SYS) Base Address
AT91C_BASE_AIC            EQU (0xFFFFF000) ;- (AIC) Base Address
AT91C_BASE_PDC_DBGU       EQU (0xFFFFF300) ;- (PDC_DBGU) Base Address
AT91C_BASE_DBGU           EQU (0xFFFFF200) ;- (DBGU) Base Address
AT91C_BASE_PIOA           EQU (0xFFFFF400) ;- (PIOA) Base Address
AT91C_BASE_PIOB           EQU (0xFFFFF600) ;- (PIOB) Base Address
AT91C_BASE_PIOC           EQU (0xFFFFF800) ;- (PIOC) Base Address
AT91C_BASE_CKGR           EQU (0xFFFFFC20) ;- (CKGR) Base Address
AT91C_BASE_PMC            EQU (0xFFFFFC00) ;- (PMC) Base Address
AT91C_BASE_RSTC           EQU (0xFFFFFD00) ;- (RSTC) Base Address
AT91C_BASE_RTTC           EQU (0xFFFFFD20) ;- (RTTC) Base Address
AT91C_BASE_PITC           EQU (0xFFFFFD30) ;- (PITC) Base Address
AT91C_BASE_WDTC           EQU (0xFFFFFD40) ;- (WDTC) Base Address
AT91C_BASE_VREG           EQU (0xFFFFFD60) ;- (VREG) Base Address
AT91C_BASE_MC             EQU (0xFFFFFF00) ;- (MC) Base Address
AT91C_BASE_EFC            EQU (0xFFFFFF60) ;- (EFC) Base Address
AT91C_BASE_PDC_SPI        EQU (0xFFFE0100) ;- (PDC_SPI) Base Address
AT91C_BASE_SPI            EQU (0xFFFE0000) ;- (SPI) Base Address
AT91C_BASE_PDC_US1        EQU (0xFFFC4100) ;- (PDC_US1) Base Address
AT91C_BASE_US1            EQU (0xFFFC4000) ;- (US1) Base Address
AT91C_BASE_PDC_US0        EQU (0xFFFC0100) ;- (PDC_US0) Base Address
AT91C_BASE_US0            EQU (0xFFFC0000) ;- (US0) Base Address
AT91C_BASE_PDC_SSC        EQU (0xFFFD4100) ;- (PDC_SSC) Base Address
AT91C_BASE_SSC            EQU (0xFFFD4000) ;- (SSC) Base Address
AT91C_BASE_TWI            EQU (0xFFFB8000) ;- (TWI) Base Address
AT91C_BASE_PWMC_CH3       EQU (0xFFFCC260) ;- (PWMC_CH3) Base Address
AT91C_BASE_PWMC_CH2       EQU (0xFFFCC240) ;- (PWMC_CH2) Base Address
AT91C_BASE_PWMC_CH1       EQU (0xFFFCC220) ;- (PWMC_CH1) Base Address
AT91C_BASE_PWMC_CH0       EQU (0xFFFCC200) ;- (PWMC_CH0) Base Address
AT91C_BASE_PWMC           EQU (0xFFFCC000) ;- (PWMC) Base Address
AT91C_BASE_UDP            EQU (0xFFFB0000) ;- (UDP) Base Address
AT91C_BASE_TC0            EQU (0xFFFA0000) ;- (TC0) Base Address
AT91C_BASE_TC1            EQU (0xFFFA0040) ;- (TC1) Base Address
AT91C_BASE_TC2            EQU (0xFFFA0080) ;- (TC2) Base Address
AT91C_BASE_TCB            EQU (0xFFFA0000) ;- (TCB) Base Address
AT91C_BASE_PDC_ADC        EQU (0xFFFD8100) ;- (PDC_ADC) Base Address
AT91C_BASE_ADC            EQU (0xFFFD8000) ;- (ADC) Base Address
AT91C_BASE_EBI            EQU (0xFFFFFF80) ;- (EBI) Base Address
AT91C_BASE_SMC            EQU (0xFFFFFF90) ;- (SMC) Base Address
AT91C_BASE_SDRC           EQU (0xFFFFFFB0) ;- (SDRC) Base Address
AT91C_BASE_HECC           EQU (0xFFFFFFDC) ;- (HECC) Base Address

;- *****************************************************************************
;-               MEMORY MAPPING DEFINITIONS FOR AT91SAM7SE256
;- *****************************************************************************
;- ISRAM
AT91C_ISRAM               EQU (0x00200000) ;- Internal SRAM base address
AT91C_ISRAM_SIZE          EQU (0x00008000) ;- Internal SRAM size in byte (32 Kbytes)
;- IFLASH
AT91C_IFLASH              EQU (0x00100000) ;- Internal FLASH base address
AT91C_IFLASH_SIZE         EQU (0x00040000) ;- Internal FLASH size in byte (256 Kbytes)
AT91C_IFLASH_PAGE_SIZE    EQU (256) ;- Internal FLASH Page Size: 256 bytes
AT91C_IFLASH_LOCK_REGION_SIZE EQU (16384) ;- Internal FLASH Lock Region Size: 16 Kbytes
AT91C_IFLASH_NB_OF_PAGES  EQU (1024) ;- Internal FLASH Number of Pages: 1024 bytes
AT91C_IFLASH_NB_OF_LOCK_BITS EQU (16) ;- Internal FLASH Number of Lock Bits: 16 bytes


	END
