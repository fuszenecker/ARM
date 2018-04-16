# ----------------------------------------------------------------------------
# This is the Makefile for ST's STM32 (ARM-Cortex based) Microcontollers
#
# Change CROSS parameter if you want to use a different C/C++ compiler or 
# the path to the C/C++ compiler is different.
# ----------------------------------------------------------------------------

CROSS		= arm-none-eabi-
CC			= $(CROSS)gcc
CXX			= $(CROSS)g++
AS			= $(CC)
OPT			= 0
CFLAGS		= -mthumb -mcpu=cortex-m3 -Wall -O$(OPT) -g3 -I. -I.. -I../inc
CFLAGS		+= -I../driverlib
CXXFLAGS	= $(CFLAGS)
LD			= $(CROSS)ld
LDFLAGS		= -T cortex_m3.ld 
DRIVER		= ../driverlib/gcc/libdriver.a

OBJDUMP		= $(CROSS)objdump
ODFLAGS		= -h -j .stack_pointer -j .vectors -j .text -j .data -j .bss -dS 
OBJCOPY		= $(CROSS)objcopy
OCFLAGS		= -O binary -j .stack_pointer -j .vectors -j .text -j .data -j .bss
NM			= $(CROSS)nm

PROG		= cortex-m3

# ----------------------------------------------------------------------------
# Core modules of the formware application
# ----------------------------------------------------------------------------

OBJS		= cortex-m3.o main.o

# ----------------------------------------------------------------------------
# Compile the firmware
# ----------------------------------------------------------------------------

all: clean $(OBJS)
	$(LD) $(LDFLAGS) -o $(PROG) $(OBJS) $(DRIVER) $(EXT_LIBS)
	$(OBJDUMP) $(ODFLAGS) $(PROG) > $(PROG).list 
	$(OBJCOPY) $(OCFLAGS) $(PROG) $(PROG).bin
	$(NM) $(PROG) | sort > $(PROG).nm

# ----------------------------------------------------------------------------
# Clean unnecessary files
# ----------------------------------------------------------------------------

clean:
	rm -rf $(OBJS) $(PROG) $(PROG).list $(PROG).hex $(PROG).nm $(PROG).bin

