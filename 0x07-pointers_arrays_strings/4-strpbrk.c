#include "main.h"
/**
* _strpbrk - starting here
* @s: input variable goodness
* @accept: input variable goodness
* Return: 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
	return (s);
	}
	s++;
	}
	return ('\0');
}

