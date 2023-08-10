#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates n bytes of a string to another string
* @s1: string
* @s2: string-concatenate
* @n: number of bytes from s2 - s1
*
* Return: pointer to result of the string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	char *u;
	unsigned int g = 0, w = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	len1++;
	while (s2 && s2[len2])
	len2++;
	if (n < len2)
	u = malloc(sizeof(char) * (len1 + n + 1));

	else
	u = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!u)
	return (NULL);
	while (g < len1)
	{
	u[g] = s1[g];
	g++;
	}
	while (n < len2 && g < (len1 + n))

	u[g++] = s2[w++];
	while (n >= len2 && g < (len1 + len2))
	u[g++] = s2[w++];
	u[g] = '\0';
	return (u);
}
