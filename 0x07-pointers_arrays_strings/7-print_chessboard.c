#include "main.h"

/**
* print_chessboard - starting here
* @a: array variable goody
* Return: 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	int h;
	int u;

	for (h = 0; h < 8; h++)
	{
	for (u = 0; u < 8; u++)
	_putchar(a[h][u]);
	_putchar('\n');
	}
}

