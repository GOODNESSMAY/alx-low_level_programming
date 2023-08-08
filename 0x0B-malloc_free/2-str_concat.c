#include "main.h"
#include <stdlib.h>

/**
* str_concat - get ends of input add up
* @s1: input one
* @s2: input two
* Return: concat of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *conct;

	int g, cl;

	if (s1 == NULL)

	s1 = "";

	if (s2 == NULL)

	s2 = "";

	g = cl = 0;

	while (s1[g] != '\0')

	g++;

	while (s2[cl] != '\0')

	cl++;
	conct = malloc(sizeof(char) * (g + cl + 1));

	if (conct == NULL)

	return (NULL);

	g = cl = 0;
	while (s1[g] != '\0')
	{
	conct[g] = s1[g];
	g++;
	}
	while (s2[cl] != '\0')
	{
	conct[g] = s2[cl];
	g++, cl++;
	}
	conct[g] = '\0';
	return (conct);
}

