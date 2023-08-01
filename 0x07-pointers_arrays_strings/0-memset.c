#include"main.h"

/**
* _memset - starting place
* @s: points to a destination
* @b: the constant value
* @n: number of bytes to be changed
* return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int p;

	for (p = 0; p < n;)
	p++;

	s[p] = b;

return (s);
}
