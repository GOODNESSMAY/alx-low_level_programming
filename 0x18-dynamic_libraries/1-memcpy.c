#include "main.h"
/**
* _memcpy - a function that copies memory area
* @dest: input
* @src: input
* @n: number of bytes
*
* Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int e = n;

	for (; d < e; d++)
	{
	dest[d] = src[d];
	n--;
	}
	return (dest);
}

