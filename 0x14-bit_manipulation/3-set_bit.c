#include "main.h"

/**
 * set_bit - value of bit to 1
 * @index: start from 0 of the bit
 * @n: pointer num of e
 * Return: 1, || -1 error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int e;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	e = 1 << index;
	*n = *n | e;

	return (1);
}
