#ifndef __SERIAL_H__
#define __SERIAL_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>

FILE *serial_port_open(char *port_name);
int serial_port_set_params(FILE *serial_port, int speed);
int serial_port_get_pins(FILE *serial_port);
int serial_port_set_pins(FILE *serial_port, int pins);
int serial_port_close();

#endif
