#include <stdio.h>
#include "log.h"

int sd_log_init() {
    return 0;
}

int sd_log(char *message) {
    puts(message);
    return 0;
}

