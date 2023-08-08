#include "main.h"
#include <stdlib.h>

/**
* argstostr - start entry
* @ac: int input value
* @av: double pointer array
* Return: nothing
*/

char *argstostr(int ac, char **av)

{

int d, c, v = 0, q = 0;

	char *str;

	if (ac == 0 || av == NULL)

	return (NULL);
	for (d = 0; d < ac; d++)
	{
	for (c = 0; av[d][c]; c++)
	q++;
	}
	q += ac;
	str = malloc(sizeof(char) * q + 1);

	if (str == NULL)
	return (NULL);
	for (d = 0; d < ac; d++)
	{
	for (c = 0; av[d][c]; c++)
	{
	str[v] = av[d][c];
	v++;
	}
	if (str[v] == '\0')
	{
	str[v++] = '\n';
	}
	}
	return (str);

}
