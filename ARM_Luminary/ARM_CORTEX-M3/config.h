/* ---------------------------------------------------------------------------
 * This is a comfiguration file (header file) of the oprtating system.
 * ------------------------------------------------------------------------ */

#ifndef __CONFIG_H__
#define __CONFIG_H__

/* The size of the main stack located at the end of the RAM area */
#define	K		        * 1024  /* Definition of "1 kilobyte" */

/* ---------------------------------------------------------------------------
 * Stack definitions: the origin and the size
 * ------------------------------------------------------------------------ */

#define RAM_BASE        0x20000000
#define RAM_SIZE        (2 K)

#define MAIN_STACK      (RAM_BASE + RAM_SIZE)

#endif
