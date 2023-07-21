#include "main.h"

/**
* more_numbers - print 10 times the numbers 0 up to 14
* return: 10 times of the numbers 0 up to 14
*/

void more_numbers(void)

{
	int r, t;

	for (r = 0; r < 10; r++)

	{
	for (t = 0; t <= 14; t++)
	{

	if (t > 0)

	{
	_putchar((t / 10) + '0');
	}
	_putchar((t % 10) + '0');
	}
	_putchar('\n');
	}
}
