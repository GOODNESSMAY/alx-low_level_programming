#include "main.h"

/**
* print_binary - print binary
* @n: num to print binay
*/

void print_binary(unsigned long int n)

{
int y, mayyy = 0;
unsigned long int begin;

for (y = 63; y >= 0; y--)

{
begin = n >> y;

if (begin & 1)
{
_putchar('1');
mayyy++;
}

else if (mayyy)
_putchar('0');
}

if (!mayyy)
_putchar('0');
}
