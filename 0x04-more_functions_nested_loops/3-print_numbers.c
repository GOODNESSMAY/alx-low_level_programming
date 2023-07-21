#include "main.h"

/**
* print_numbers - print the numbers 0 up to 9
* return: the numbers from 0 to 9
*/

void print_numbers(void)

{
	int b;

	for (b = 0; b <= 9; b++)
	{
	_putchar(b + '0');
	}
	_putchar('\n');
}
