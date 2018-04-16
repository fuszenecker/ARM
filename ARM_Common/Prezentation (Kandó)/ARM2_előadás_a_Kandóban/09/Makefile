# ----------------------------------------------------------------------------
# This is the Makefile for ST's STM32 (ARM-Cortex based) Microcontollers
#
# Change CROSS parameter if you want to use a different C/C++ compiler or 
# the path to the C/C++ compiler is different.
# ----------------------------------------------------------------------------

CROSS		  =
CC			  = clang
CXX			  = clang++
LLC       = llc
LLLINK    = llvm-ld
LD			  = arm-none-eabi-ld
AS        = arm-none-eabi-as

OPT			  = -O1
CFLAGS		= -Wall $(OPT) -g3 -I. -I.. -I../inc
CFLAGS		+= -I../driverlib
CXXFLAGS	= $(CFLAGS)
LLCFLAGS  = -march=thumb -mcpu=cortex-m3
LDFLAGS		= -T cortex_m3.ld 
DRIVER		= ../driverlib/gcc/libdriver.a

OBJDUMP		= arm-none-eabi-objdump
ODFLAGS		= -h -j .stack_pointer -j .vectors -j .text -j .data -j .bss -dS 
OBJCOPY		= arm-none-eabi-objcopy
OCFLAGS		= -O binary -j .stack_pointer -j .vectors -j .text -j .data -j .bss
NM			  = arm-none-eabi-nm

PROG		  = cortex-m3

# ----------------------------------------------------------------------------
# Core modules of the formware application
# ----------------------------------------------------------------------------

OBJS		  = cortex-m3.o main.o

# ----------------------------------------------------------------------------
# Compile the firmware
# ----------------------------------------------------------------------------

.c.o:
	$(CC) -emit-llvm $(CFLAGS) -c -o $<.ll $<
	$(LLC) $(LLCFLAGS) -o $<.s $<.ll
	$(AS) -o $@ $<.s

all: clean $(OBJS)
	$(LD) -T cortex_m3.ld -o $(PROG) $(OBJS) $(DRIVER)
	$(OBJDUMP) $(ODFLAGS) $(PROG) > $(PROG).list 
	$(OBJCOPY) $(OCFLAGS) $(PROG) $(PROG).bin
	$(NM) $(PROG) | sort > $(PROG).nm

# ----------------------------------------------------------------------------
# Clean unnecessary files
# ----------------------------------------------------------------------------

clean:
	rm -rf $(OBJS) $(PROG) $(PROG).list $(PROG).hex $(PROG).nm $(PROG).bin *.ll* $(PROG).s *.c.s

