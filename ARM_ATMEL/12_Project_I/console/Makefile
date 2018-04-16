PREFIX	= 
CC		= $(PREFIX)gcc
CFLAGS	= -Wall -g -O1 
#CFLAGS	+= -D_DEBUG
LDFLAGS	= -lreadline

PROGRAM	= console

OBJS	= main.o usart.o

all:	clean $(OBJS)
		$(CC) $(CFLAGS) $(LDFLAGS) -o $(PROGRAM) $(OBJS)
	
clean:
		rm -f *core *.o *.hex *.bin *.list *.img *.elf $(PROGRAM)
