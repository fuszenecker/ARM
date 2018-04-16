CROSS		= /opt/arm/bin/arm-elf-
CC			= $(CROSS)g++
CXX			= $(CROSS)g++
OPT			= 1
CFLAGS		= -mthumb -mcpu=cortex-m3 -Wall -O$(OPT) -g -I../library/inc
CXXFLAGS	= $(CFLAGS)
LD			= $(CROSS)ld
LDFLAGS		= -T stm32.ld

OBJDUMP		= $(CROSS)objdump
ODFLAGS		= -h -j .vectors -j .text -j .data -j .bss -dS 
OBJCOPY		= $(CROSS)objcopy
OCFLAGS		= -O binary -j .vectors -j .text -j .data -j .bss
NM			= $(CROSS)nm

PROG		= program
OBJS		= crt.o main.o swcall.o irq.o ../library/src/stm32f10x_gpio.o ../library/src/stm32f10x_rcc.o

all: $(OBJS)
	$(LD) $(LDFLAGS) -o $(PROG) $(OBJS)
	$(OBJDUMP) $(ODFLAGS) $(PROG) > $(PROG).list 
	$(OBJCOPY) $(OCFLAGS) $(PROG) $(PROG).bin
	$(NM) $(PROG) | sort > $(PROG).nm

clean:
	rm -rf $(OBJS) $(PROG) $(PROG).list $(PROG).hex $(PROG).nm $(PROG).bin

depend:
	rm depend
	$(CC) -MM *.c *.h > depend

include depend
