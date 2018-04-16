
#define PARPORT 0x378
#define RESET   0x01
#define TMS     0x04
#define TCK     0x02
#define TDI     0x08
#define TDO     0x40

#define DELAY   0
#define LO      0
#define HI      1

void jtag_init(char *name);
unsigned int jtag_set_ir(unsigned int new_ir, int num, int rti);
unsigned int jtag_set_dr(unsigned int new_dr, int num, int rti);
unsigned int *jtag_set_dr_38(unsigned int new_drh, unsigned int new_drl, int rti);
unsigned int *jtag_set_dr_96(unsigned int new_dr0, unsigned int new_dr1, unsigned int new_dr2, int rti);
unsigned int *jtag_set_dr_n(unsigned int *new_dr, unsigned int *old_dr, int size, int rti);
 
