#include "main.h"

/**
* _print_rev_recursion - Printing a string in a reverse.
* @s: string that would be printed.
*/

void _print_rev_recursion(char *s)

{

if (*s)

{

_print_rev_recursion(s + 1);

_putchar(*s);

}

}
