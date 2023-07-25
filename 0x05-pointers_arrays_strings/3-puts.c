#include"main.h"

/**
* _puts - prints a string
* @str: print a string
* return: 0
*/

void _puts(char *str)

{
while (*str != '\0')

{
_putchar(*str++);
}
_putchar('\n');
}

