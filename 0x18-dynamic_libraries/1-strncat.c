#include "main.h"

/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input value
* @src: input value
* @n: input value
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int o;
	int y;

	o = 0;
	while (dest[o] != '\0')
	{
	o++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[o] = src[y];
	o++;
	y++;
	}
	dest[o] = '\0';
	return (dest);
}


