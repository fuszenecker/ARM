
#define REG_AVR_RESET       0x0c
#define REG_PROG_ENABLE     0x04
#define REG_PROG_COMMANDS   0x05
#define REG_PAGE_LOAD       0x06
#define REG_PAGE_READ       0x07

#define PROG_SIGN           0xA370

#define ERASE1              0x2380
#define ERASE2              0x3180
#define ERASE3              0x3380
#define ERASE_BUSY          0x20

#define FLASH_WRITE         0x2310
#define LOAD_ADDR_LO        0x0300
#define LOAD_ADDR_HI        0x0700
#define LOAD_DATA_LO        0x1300
#define LOAD_DATA_HI        0x1700
#define LATCH_DATA0         0x3700
#define LATCH_DATA1         0x7700
#define WRITE_FLASH_PAGE0   0x3700
#define WRITE_FLASH_PAGE1   0x3500

#define FLASH_READ          0x2302
#define READ_FLASH          0x3200
#define READ_LO             0x3600
#define READ_HI             0x3700

#define RTI                 0

void avr_init();
void avr_chip_erase();
void avr_flash_write(unsigned int start, unsigned int *buffer, int size);
void avr_flash_read(unsigned int start, unsigned int *buffer, int size);
