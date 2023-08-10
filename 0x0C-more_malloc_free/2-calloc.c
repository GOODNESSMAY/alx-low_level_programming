#include <stdlib.h>
#include "main.h"

/**
* _memset - filling memory with byte
* @s: memory to fill
* @b: char to copy
* @n: number of times
*
* Return: pointer to the memory s
*/

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int y;

	for (y = 0; y < n; y++)

	{
	s[y] = b;
	}
	return (s);
}
/**
* _calloc - allocates memo to an array
* @nmemb: number of elements array
* @size: element size
*
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *t;

	if (nmemb == 0 || size == 0)

	return (NULL);
	t = malloc(size * nmemb);

	if (t == NULL)
	return (NULL);
	_memset(t, 0, nmemb * size);
	return (t);
	}
