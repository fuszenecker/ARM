PREFIX	= /usr/local/arm/bin

CC		= $(PREFIX)/arm-gcc
LD		= $(PREFIX)/arm-ld
#CFLAGS	= -Wall -g -O1 -mlittle-endian -marm 
CFLAGS	= -Wall -g -O0 -mlittle-endian -marm 
LDFLAGS	= -Ttext 0 -Tdata 0x200000

OBJCOPY = /usr/local/arm/bin/arm-objcopy
OCFLAGS = -j .text -j .data -O

OBJDUMP = /usr/local/arm/bin/arm-objdump
ODFLAGS = -j .text -j .data -dS

PROG	= program
OBJS	= $(PROG).o


all:	crt.o $(OBJS)
		$(LD) $(LDFLAGS) -o $(PROG) crt.o $(OBJS)
		$(OBJCOPY) $(OCFLAGS) binary $(PROG) $(PROG).bin
		$(OBJCOPY) $(OCFLAGS) ihex $(PROG) $(PROG).hex
		$(OBJDUMP) $(ODFLAGS) $(PROG) > $(PROG).list
	
clean:
		rm -f *core *.o *.hex *.bin *.list $(PROG)
