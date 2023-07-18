#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 *Return: void
 */

void print_alphabet_x10(void)
	{
	char e;
	int t = 0;

	while (t <= 9)
	{
	for (e = 'a'; e <= 'z'; e++)
	{
	_putchar(e);
	}
	_putchar('\n');
	t++;
}
}
