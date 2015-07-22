#if 0
#include <stdio.h>
#include <sel4/sel4.h>
//#include "../../plat_internal.h"

#include "serial.h"

/*struct ps_chardevice*
ps_cdev_init(enum chardev_id id, const ps_io_ops_t* o, struct ps_chardevice* d) {
    platsupport_serial_setup_simple(0,0,0);
    return NULL;
}*/

__plat_serial_init()
{
}

void
__plat_serial_input_init_IRQ(void)
{
}

__plat_putchar(char c)
{
   seL4_DebugPutChar(c);

   if (c == '\n') { 
        __plat_putchar('\r');
    }  
}

int
__plat_getchar(void)
{
    return EOF;
}

#endif
