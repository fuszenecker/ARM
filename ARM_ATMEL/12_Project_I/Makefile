PREFIX	= /usr/local/arm/

CC		= $(PREFIX)/bin/arm-gcc
LD		= $(PREFIX)/bin/arm-ld
#CFLAGS	= -Wall -g -O0 -mlittle-endian -marm 
CFLAGS	= -Wall -g -O3 -mlittle-endian -marm 
#CFLAGS	= -Wall -g -O1 -mlittle-endian -marm 
#LDFLAGS	= -Ttext 0 -Tdata 0x200000
LDFLAGS	= -Ttext 0x100000 -Tdata 0x200000
LIBGCC	= $(PREFIX)/lib/gcc/arm-ATMEL-elf/4.0.3/libgcc.a

OBJCOPY = $(PREFIX)/bin/arm-objcopy
OCFLAGS = -j .text -O

OBJDUMP = $(PREFIX)/bin/arm-objdump
ODFLAGS = -h -j .text -j .data -dS

PROG	= program
OBJS	= main.o messages.o

all:	clean messages $(OBJS)
		$(LD) $(LDFLAGS) -o $(PROG) $(OBJS) $(LIBGCC)
		$(OBJCOPY) $(OCFLAGS) binary $(PROG) $(PROG).bin
		$(OBJCOPY) $(OCFLAGS) ihex $(PROG) $(PROG).hex
		$(OBJDUMP) $(ODFLAGS) $(PROG) > $(PROG).list

messages:
		./make_messages_h

clean:
		rm -f *core *.o *.hex *.bin *.list $(PROG) messages.h
