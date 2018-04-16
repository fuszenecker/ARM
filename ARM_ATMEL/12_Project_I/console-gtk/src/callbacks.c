
#include <termios.h>
#include <unistd.h>
#include <stdio.h>

#include "../../console/commands.h"
#include "../../console/usart.h"

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

FILE *setup_usart0(char *tty_name) {
    FILE *tty; 
    struct termios term;

    tty = fopen(tty_name, "r+");

    if (tty == NULL) {
        return NULL;
    }                                                                                                                          
    tcgetattr(fileno(tty), &term);
    cfsetispeed(&term, B9600);
    cfsetospeed(&term, B9600);
    term.c_cflag &= ~(CSIZE|PARENB);
    term.c_cflag |= CS8;
    tcsetattr(fileno(tty), TCSANOW, &term);
    
    return tty;
}

int send_packet(FILE *tty, struct Packet *packet) {
    calc_checksum(packet);
    fwrite(packet, sizeof(struct Packet), 1,  tty);
    fflush(tty);

#ifdef _DEBUG
    printf("\n\n---- Sent packet ----\n");
    printf("Destination:\t%02X\n", packet->dst);
    printf("Command:\t%02X\n", packet->command);
    printf("Parameter:\t%02X\n", packet->param);
    printf("Checksum:\t%02X\n", packet->chsum);
    fflush(stdout);
#endif

    return 0;
}

int receive_packet(FILE *tty, struct Packet *packet) {
    int c;
    unsigned char *packet_ptr = (unsigned char *) packet;
    unsigned char sum;

    fread(packet, sizeof(struct Packet), 1,  tty);

#ifdef _DEBUG
    printf("\n\n---- Received packet ----\n");
    printf("Destination:\t%02X\n", packet->dst);
    printf("Command:\t%02X\n", packet->command);
    printf("Answer:\t\t%02X\n", packet->param);
    printf("Checksum:\t%02X\n", packet->chsum);
    fflush(stdout);
#endif

    for (c = 0, sum = 0; c < sizeof(struct Packet); c++)        // Calculating checksum
        sum += packet_ptr[c];

    if (sum == 0) {                         // If checksum is 0 (data has been perfectly received)...
#ifdef _DEBUG
        printf("\n\nChecksum OK.");
#endif
    } else {
        printf("\n\nChecksum error!");
        return -1;                          // If the checksum is not correct, make some error report processing
    }

    return 0;
}

void calc_checksum(struct Packet *packet) {
    unsigned char sum;
    unsigned char *packet_ptr = (unsigned char *) packet;
    int c;

    packet->chsum = 0;

    for (c = 0, sum = 0; c < sizeof(struct Packet); c++)        // Calculating checksum
        sum += packet_ptr[c];

    packet->chsum = -sum;
}

int get_chain_length(FILE *tty) {
    struct Packet packet = {0xff, COMM_HELLO << COMM_SHIFT, 0, 1};
    
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    return 0xff - packet.dst;
}

extern GtkWidget *ref0;
extern GtkWidget *ref1;
extern GtkWidget *ref2;
extern GtkWidget *rref0;
extern GtkWidget *rref1;
extern GtkWidget *rref2;
extern GtkWidget *out0;
extern GtkWidget *out1;
extern GtkWidget *out2;
extern GtkWidget *a00;
extern GtkWidget *a01;
extern GtkWidget *a02;
extern GtkWidget *rcl0;
extern GtkWidget *rcl1;
extern GtkWidget *rcl2;
extern GtkWidget *cl0;
extern GtkWidget *cl1;
extern GtkWidget *cl2;

void
on_update_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
    FILE *tty = setup_usart0("/dev/ttyS0");
    struct Packet packet;
    int value;
    double voltage;
    char str[128];

    packet.dst = 0;
    value = gtk_spin_button_get_value(ref0) * 10.0;
    packet.command = (COMM_SET_OUTPUT_VALUE << COMM_SHIFT) | ((value >> 8) & 3);
    packet.param = value & 0xff;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    packet.dst = 1;
    value = gtk_spin_button_get_value(ref1) * 10.0;
    packet.command = (COMM_SET_OUTPUT_VALUE << COMM_SHIFT) | ((value >> 8) & 3);
    packet.param = value & 0xff;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    packet.dst = 2;
    value = gtk_spin_button_get_value(ref2) * 10.0;
    packet.command = (COMM_SET_OUTPUT_VALUE << COMM_SHIFT) | ((value >> 8) & 3);
    packet.param = value & 0xff;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    packet.dst = 0;
    value = gtk_spin_button_get_value(cl0);
    packet.command = (COMM_SET_CURRENT_LIMIT << COMM_SHIFT) | ((value >> 8) & 3);
    packet.param = value & 0xff;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    packet.dst = 1;
    value = gtk_spin_button_get_value(cl1);
    packet.command = (COMM_SET_CURRENT_LIMIT << COMM_SHIFT) | ((value >> 8) & 3);
    packet.param = value & 0xff;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    packet.dst = 2;
    value = gtk_spin_button_get_value(cl2);
    packet.command = (COMM_SET_CURRENT_LIMIT << COMM_SHIFT) | ((value >> 8) & 3);
    packet.param = value & 0xff;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);

    packet.dst = 0;
    packet.command = COMM_GET_OUTPUT_VALUE << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(rref0, str);
    
    packet.dst = 1;
    packet.command = COMM_GET_OUTPUT_VALUE << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(rref1, str);
    
    packet.dst = 2;
    packet.command = COMM_GET_OUTPUT_VALUE << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(rref2, str);
    
    packet.dst = 0;
    packet.command = COMM_GET_ANALOG1 << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(out0, str);
    
    packet.dst = 1;
    packet.command = COMM_GET_ANALOG1 << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(out1, str);
    
    packet.dst = 2;
    packet.command = COMM_GET_ANALOG1 << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(out2, str);
    
    packet.dst = 0;
    packet.command = COMM_GET_ANALOG0 << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(a00, str);
    
    packet.dst = 1;
    packet.command = COMM_GET_ANALOG0 << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(a01, str);
    
    packet.dst = 2;
    packet.command = COMM_GET_ANALOG0 << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    voltage = (((packet.command & 3) << 8) | packet.param) / 10.0;
    sprintf(str, "%0.1f V", voltage);
    gtk_label_set_text(a02, str);
    
    packet.dst = 0;
    packet.command = COMM_GET_CURRENT_LIMIT << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    value = (((packet.command & 3) << 8) | packet.param);
    sprintf(str, "%d mA", value);
    gtk_label_set_text(rcl0, str);
    
    packet.dst = 1;
    packet.command = COMM_GET_CURRENT_LIMIT << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    value = (((packet.command & 3) << 8) | packet.param);
    sprintf(str, "%d mA", value);
    gtk_label_set_text(rcl1, str);
    
    packet.dst = 2;
    packet.command = COMM_GET_CURRENT_LIMIT << COMM_SHIFT;
    packet.param = 0;
    send_packet(tty, &packet);
    receive_packet(tty, &packet);
    value = (((packet.command & 3) << 8) | packet.param);
    sprintf(str, "%d mA", value);
    gtk_label_set_text(rcl2, str);
    
    fclose(tty);
}

