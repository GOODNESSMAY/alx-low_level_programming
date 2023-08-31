#include "main.h"

/**
 * get_bit - return the value of bit
 * @n: check bits
 * @index: use to check bit
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int may, ate;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	may = 1 << index;
	ate = n & may;
	if (ate == may)
		return (1);

	return (0);
}
