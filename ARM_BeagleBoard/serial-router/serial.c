#include <sys/ioctl.h>
#include "serial.h"

FILE *serial_port_open(char *serial_port_name) {
    FILE *fp = NULL;
    int fd = -1;

    fd = open(serial_port_name, O_RDWR | /* O_DIRECT | */ O_NONBLOCK, 0644);

    if (fd < 0)
        return NULL;

    fp = fdopen(fd, "w+");
    setvbuf(fp, (char *) NULL, _IONBF, 0);

    return fp;
}

int serial_port_set_params(FILE *serial_port, int speed) {
    struct termios termios_p;
    speed_t speed_constant = B1200;

    switch (speed) {
    case 300:
        speed_constant = B300;
        break;
    case 600:
        speed_constant = B600;
        break;
    case 1200:
        speed_constant = B1200;
        break;
    case 2400:
        speed_constant = B2400;
        break;
    case 4800:
        speed_constant = B4800;
        break;
    case 9600:
        speed_constant = B9600;
        break;
    case 19200:
        speed_constant = B19200;
        break;
    case 38400:
        speed_constant = B38400;
        break;
    case 57600:
        speed_constant = B57600;
        break;
    case 115200:
        speed_constant = B115200;
        break;
    case 230400:
        speed_constant = B230400;
        break;
    default:
        return -1;
    }

    if (tcgetattr(fileno(serial_port), &termios_p) < 0)
        return -1;

    termios_p.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP
                           | INLCR | IGNCR | ICRNL | IXON);
    termios_p.c_oflag &= ~OPOST;
    termios_p.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);
    termios_p.c_cflag &= ~(CSIZE);
    termios_p.c_cflag |= CS8;

    cfsetspeed(&termios_p, speed_constant);

    if (tcsetattr(fileno(serial_port), 0, &termios_p) < 0)
        return -1;

    return 0;
}

int serial_port_get_pins(FILE *serial_port) {
    unsigned int retval = 0;

    if (ioctl(fileno(serial_port), TIOCMGET, &retval) == 0)
        return retval;
    else
        return -1;
}

int serial_port_set_pins(FILE *serial_port, int pins) {
    return ioctl(fileno(serial_port), TIOCMSET, &pins);
}

int serial_port_close(FILE *serial_port) {
    return fclose(serial_port);
}

