#include "main.h"
/**
 * flip_bits - flip to get one number or another
 * @n: first num
 * @m: second num
 * Return: number of bits fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int differnce, result;
	unsigned int p, g;

	p = 0;

	result = 1;

	differnce = n ^ m;

	for (g = 0; g < (sizeof(unsigned long int) * 8); g++)
	{
		if (result == (differnce & result))
			p++;
		result <<= 1;
	}

	return (p);
}
