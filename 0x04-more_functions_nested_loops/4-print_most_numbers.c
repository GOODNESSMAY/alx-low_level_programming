#include "main.h"
/**
* print_most_numbers - print the numbers 0 up to 9
* description: prints the numbers excluding 4 and 2
* return: the numbers up to 0 to 9
*/

void print_most_numbers(void)
{
	int s = 0;

	for (; s <= 9; s++)

	{
	if (s == 2 || s == 4)
	{
	continue;
	}
	_putchar (s + '0');
	}
	
	_putchar ('\n');
}
