
#define DCCR    4
#define DCDR    5

#define RW_SH   5
#define RD      0
#define WR      (1 << RW_SH)
#define	R	1
#define	W	2

#define READ            0x0011
#define WP              0x0012
#define EA              0x0013
#define GET_VERSION     0x001E
#define EWP             0x0032
#define	SFB		0x0034
#define	CFB		0x0044
#define	GFB		0x0025

#define FLASH_ADDR      0x0000

#define	RTI	0

int sam7_init();
unsigned int sam7_get_version();
int sam7_read_flash(unsigned int *buffer, int size);
int sam7_write_flash(unsigned int *buffer, int size);
unsigned int sam7_read_fuses();
int sam7_write_fuses(unsigned int fuses);

