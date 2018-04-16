PREFIX	= /usr/local/arm/bin
CC		= $(PREFIX)/arm-gcc
CFLAGS	= -Wall -g -O3 -mlittle-endian -marm -mcpu=arm7tdmi-s
#CFLAGS	= -Wall -g -O2 -mlittle-endian -marm -mcpu=arm7tdmi-s
#CFLAGS	= -Wall -g -O1 -mlittle-endian -marm -mcpu=arm7tdmi-s
#CFLAGS	= -Wall -g -O0 -mlittle-endian -marm -mcpu=arm7tdmi-s

AR		= $(PREFIX)/arm-ar
ARFLAGS	= -cru

OBJS	= pll.o interrupts.o pwm.o usart.o adc.o 7_seg.o

all:	clean $(OBJS)
		$(AR) $(ARFLAGS) library.a $(OBJS)
	
# Remove rubbish
clean:
		rm -f *core *.o *.hex *.bin *.list *.img *.elf *.a
