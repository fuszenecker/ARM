# Here I can find my ARM cross-compiler:
PREFIX	= /usr/local/arm/bin

# C compiler is arm-gcc, in the perviously mentioned directory
CC		= $(PREFIX)/arm-gcc

# And it's arguments: all warnings on, with debug support, optimalization on 
# (1: a little bit "on", 3: very "on")
# little endian, ARM code

#CFLAGS	= -Wall -g -O3 -mlittle-endian -marm 
CFLAGS	= -Wall -g -O0 -mlittle-endian -marm 

# The ARM linker and it's arguments: start code at entry point 0x00000000
LD		= $(PREFIX)/arm-ld
LDFLAGS	= -Ttext 0

# Program that produces Intel hex and binary outputs
OBJCOPY = /usr/local/arm/bin/arm-objcopy
OCFLAGS = -j .text -j .data -O

# Program that produces listing file (mixed C and assembly code, good for debug)
OBJDUMP = /usr/local/arm/bin/arm-objdump
ODFLAGS = -j .text -j .data -dS

# Program name and the modules (only 1)
PROG	= program
OBJS	= $(PROG).o

# What to do when the user starts "make" without any arguments...
# clean rubbush, compile C runtime module and the main program.
# Finally, link them, and create HEX, BIN, and Listing files.
all:	clean crt.o $(OBJS)
		$(LD) -o $(PROG) crt.o $(OBJS) $(LDFLAGS)
		$(OBJCOPY) $(OCFLAGS) binary $(PROG) $(PROG).bin
		$(OBJCOPY) $(OCFLAGS) ihex $(PROG) $(PROG).hex
		$(OBJDUMP) $(ODFLAGS) $(PROG) > $(PROG).list
	
# Remove rubbish
clean:
		rm -f *core *.o *.hex *.bin *.list $(PROG)
