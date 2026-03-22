#include "user.h"

void main(void)
{
    *((volatile int *)0x80200000) = 0x1234; // Forbidden write to kernel owned memory, causes a "Store/AMO page fault" (scause=15)
    for (;;)
        ;
}