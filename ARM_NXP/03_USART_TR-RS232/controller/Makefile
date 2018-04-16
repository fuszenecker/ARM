PREFIX	= 
CC		= $(PREFIX)gcc

#CFLAGS	= -Wall -g -O3 
#CFLAGS	= -Wall -g -O2 
CFLAGS	= -Wall -g -O1 
#CFLAGS	= -Wall -g -O0 

PROGRAM	= controller

OBJS	= main.o usart.o

all:	clean $(OBJS)
		$(CC) $(CFLAGS) -o $(PROGRAM) $(OBJS)
	
clean:
		rm -f *core *.o *.hex *.bin *.list *.img *.elf $(PROGRAM)
