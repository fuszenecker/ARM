PREFIX	= 
CC		= $(PREFIX)gcc
CFLAGS	= -Wall -O3 -g
#CFLAGS  += -D_DEBUG_PINS
CFLAGS  += -D_DEBUG_JTAG
#CFLAGS  += -D_ERASE_BEFORE_WRITE
#CFLAGS  += -D_DEBUG_SAM7
CFLAGS  += -D_DEBUG_ATMEGA16
LDFLAGS	=

PROG	= jtag
JTAG	= jtag
#OBJS	= main.o $(JTAG).o at91sam7s.o
OBJS	= main.o $(JTAG).o atmega16.o




all:	$(OBJS)
		$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROG) $(OBJS)

clean:
	rm -rf $(PROG) *.o *core*

depend:
		$(CC) -MM *.c *.h > .depend

include depend
