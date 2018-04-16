#ifndef __SOCKET_H__
#define __SOCKET_H__

#include <stdio.h>

int tcp_init_socket(int port_num);
FILE *tcp_accept(int tcp_socket_handler);
int tcp_close(FILE *tcp_file_descriotor);
int tcp_close_socket(int tcp_socket_handler);

#endif
