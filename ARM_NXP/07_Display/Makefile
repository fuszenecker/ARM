# Here I can find my ARM cross-compiler:
PREFIX	= /usr/local/arm/bin

# C compiler is arm-gcc, in the perviously mentioned directory
CC		= $(PREFIX)/arm-gcc

# And it's arguments: all warnings on, with debug support, optimalization on 
# (1: a little bit "on", 3: very "on")
# little endian, ARM code

#CFLAGS	= -Wall -g -O0 -mlittle-endian -marm -mcpu=arm7tdmi-s
#CFLAGS	= -Wall -g -Os -mlittle-endian -marm -mcpu=arm7tdmi-s
CFLAGS	= -Wall -g -O1 -mlittle-endian -marm -mcpu=arm7tdmi-s
#CFLAGS	= -Wall -g -O0 -mlittle-endian -marm -mcpu=arm7tdmi-s

# The ARM linker and it's arguments: start code at entry point 0x00000000,
# and start data segment at 0x200000
LD		= $(PREFIX)/arm-ld
LDFLAGS	= -Ttext 0 -Tdata 0x40000000 ../LPC210x/library.a

# Program that produces Intel hex and binary outputs
OBJCOPY = /usr/local/arm/bin/arm-objcopy
OCFLAGS = -j .text -O

# Program that produces listing file (mixed C and assembly code, good for debugging)
OBJDUMP = /usr/local/arm/bin/arm-objdump
ODFLAGS = -j .text -j .data -dS

# The modules (only 1)
OBJS	= main.o

# What to do when the user starts "make" without any arguments...
# clean rubbush, compile C runtime module and the main program.
# Finally, link them, and create the binary and the listing files.
all:	clean crt.o $(OBJS)
		$(LD) -o program.elf crt.o $(OBJS) $(LDFLAGS)
		$(OBJCOPY) $(OCFLAGS) binary program.elf program.bin
		$(OBJDUMP) $(ODFLAGS) program.elf > program.list
	
# Remove rubbish
clean:
		rm -f *core *.o *.hex *.bin *.list *.img *.elf *.img
