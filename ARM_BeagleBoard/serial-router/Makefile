CROSS       = 
CC          = $(CROSS)gcc
CXX         = $(CROSS)g++
OPT         = -O3 -g3
CFLAGS      = -Wall -Werror -O0 $(OPT)
CXXFLAGS    = $(CFLAGS)
LDFLAGS     =

PROG        = seriald
OBJS        = main.o socket.o serial.o log.o

all:        $(OBJS)
			$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

clean:
			rm -rf *core* *~ $(OBJS) $(PROG)
