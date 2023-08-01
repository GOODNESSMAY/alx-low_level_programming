#include "main.h"
/**
* _strspn - starting point
* @s: input variable goodness
* @accept: input variable goodness
* Return: 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int z = 0;
	int g;

	while (*s)
	{
	for (g = 0; accept[g]; g++)
	{
	if (*s == accept[g])
	{
	z++;
	break;
	}
	else if (accept[g + 1] == '\0')
	return (z);
	}
	s++;
	}
	return (z);
}


