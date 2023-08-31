#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: num  of g
 * @index: start from 0 of the bit you want
 * Return: 1 || -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int g;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	g = ~(1 << index);

	*n = *n & g;

	return (1);
}
