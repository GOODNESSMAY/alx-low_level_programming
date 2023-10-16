#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: input value
* @src: input value
*
* Return: void
*/

char *_strcat(char *dest, char *src)

{

int h;
int g;

	h = 0;
	while (dest[h] != '\0')
	{
	h++;
	}
	g = 0;
	while (src[g] != '\0')
	{
	dest[h] = src[g];
	h++;
	g++;
	}

	dest[h] = '\0';
	return (dest);
}

