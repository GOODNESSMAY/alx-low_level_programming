#include "main.h"

/**
 * binary_to_uint - convert binary num to unsigned int
 * @b: pointer to a string
 *
 * Return: the num that was converted || empty
*/
unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int p;

	p = 0;
	if (!b)
		return (0);
	for (f = 0; b[f] != '\0'; f++)
	{
		if (b[f] != '0' && b[f] != '1')
			return (0);
	}
	for (f = 0; b[f] != '\0'; f++)
	{
		p <<= 1;
		if (b[f] == '1')
			p += 1;
	}
	return (p);
}
