#******************************************************************************
#
# Makefile - Rules for building the driver library.
#
# Copyright (c) 2005 Luminary Micro, Inc.  All rights reserved.
# Luminary Micro Confidential - For Use Under NDA Only
#
#******************************************************************************

#
# The base directory for DriverLib.
#
ROOT=..

#
# Include the common make definitions.
#
include ${ROOT}/makedefs

#
# Augment the CFLAGS based on the compiler in use.
#
ifeq (${COMPILER}, codered)
AFLAGS += -ffunction-sections -fdata-sections
CFLAGS += -ffunction-sections -fdata-sections
endif
ifeq (${COMPILER}, ewarm)
CFLAGS += --library_module
endif
ifeq (${COMPILER}, gcc)
AFLAGS += -ffunction-sections -fdata-sections
CFLAGS += -ffunction-sections -fdata-sections
endif
ifeq (${COMPILER}, rvmdk)
CFLAGS += --split-sections
endif
ifeq (${COMPILER}, sourcerygxx)
AFLAGS += -ffunction-sections -fdata-sections
CFLAGS += -ffunction-sections -fdata-sections
endif

#
# The default rule, which causes the driver library to be built.
#
all: ${COMPILER}
all: ${COMPILER}/libdriver.a

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${COMPILER} settings
	@rm -rf ${wildcard *~} ${wildcard *.Bak} ${wildcard *.dep}

#
# The rule to create the target directory.
#
${COMPILER}:
	@mkdir -p ${COMPILER}

#
# Rules for building the driver library.
#
${COMPILER}/libdriver.a: ${COMPILER}/adc.o
${COMPILER}/libdriver.a: ${COMPILER}/can.o
${COMPILER}/libdriver.a: ${COMPILER}/comp.o
${COMPILER}/libdriver.a: ${COMPILER}/cpu.o
${COMPILER}/libdriver.a: ${COMPILER}/ethernet.o
${COMPILER}/libdriver.a: ${COMPILER}/flash.o
${COMPILER}/libdriver.a: ${COMPILER}/gpio.o
${COMPILER}/libdriver.a: ${COMPILER}/hibernate.o
${COMPILER}/libdriver.a: ${COMPILER}/i2c.o
${COMPILER}/libdriver.a: ${COMPILER}/interrupt.o
${COMPILER}/libdriver.a: ${COMPILER}/mpu.o
${COMPILER}/libdriver.a: ${COMPILER}/pwm.o
${COMPILER}/libdriver.a: ${COMPILER}/qei.o
${COMPILER}/libdriver.a: ${COMPILER}/ssi.o
${COMPILER}/libdriver.a: ${COMPILER}/sysctl.o
${COMPILER}/libdriver.a: ${COMPILER}/systick.o
${COMPILER}/libdriver.a: ${COMPILER}/timer.o
${COMPILER}/libdriver.a: ${COMPILER}/uart.o
${COMPILER}/libdriver.a: ${COMPILER}/udma.o
${COMPILER}/libdriver.a: ${COMPILER}/usb.o
${COMPILER}/libdriver.a: ${COMPILER}/watchdog.o

#
# The rule for building the set of object files from each C source file when
# using ewarm.  Unique --module-name= arguments must be supplied to each
# invocation of the compiler (to avoid the filename based default, which would
# unnecessarily restrict the file namespace), mandating this rule.
#
ifeq (${COMPILER}, ewarm)
${COMPILER}/%.o: %.c
	@if [ 'x${VERBOSE}' = x ];                           \
	 then                                                \
	     echo "  CC    ${<}";                            \
	 else                                                \
	     echo ${CC} ${CFLAGS} -D${COMPILER}              \
	          -o ${@} --module_name=__lib_${<:.c=} ${<}; \
	 fi
	@${CC} ${CFLAGS} -D${COMPILER}                 \
	     -o ${@} --module_name=__lib_${<:.c=} ${<}
	@sed -e "s,.*\.o:,${@}:,g" -e "s,\\\\,/,g" -e "s, ,\\\\ ,g" \
	     -e "s,:\\\\ ,: ,g" ${notdir ${<:.c=.d}} > ${@:.o=.d}
	@rm ${notdir ${<:.c=.d}}
ifneq ($(findstring CYGWIN, ${os}), )
	@perl -i.bak -p -e 's/ ([A-Za-z]):/ \/cygdrive\/\1/g' ${@:.o=.d}
	@rm -f ${@:.o=.d.bak}
endif
endif

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
