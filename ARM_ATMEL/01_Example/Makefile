PREFIX	= /usr/local/arm/bin

CC		= $(PREFIX)/arm-gcc
LD		= $(PREFIX)/arm-ld
CFLAGS	= -Wall -g -O3 -mlittle-endian -marm 
CFLAGS	= -Wall -g -O0 -mlittle-endian -marm 
LDFLAGS	= -Ttext 0 -L/usr/local/arm/lib/gcc/arm-ATMEL-elf/4.0.3 -lgcc

OBJCOPY = /usr/local/arm/bin/arm-objcopy
OCFLAGS = -j .text -j .data -O

OBJDUMP = /usr/local/arm/bin/arm-objdump
ODFLAGS = -j .text -j .data -dS

PROG	= program
OBJS	= $(PROG).o
MODS	= #_udivsi3.o

all:	crt.o $(OBJS)
		$(LD) -o $(PROG) crt.o $(OBJS) $(LDFLAGS)
		$(OBJCOPY) $(OCFLAGS) binary $(PROG) $(PROG).bin
		$(OBJCOPY) $(OCFLAGS) ihex $(PROG) $(PROG).hex
		$(OBJDUMP) $(ODFLAGS) $(PROG) > $(PROG).list
	
clean:
		rm -f *core *.o *.hex *.bin *.list $(PROG)
