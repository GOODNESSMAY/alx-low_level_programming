#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - duplicate new memory space
* @str: char
* Return: nothing
*/

char *_strdup(char *str)

{

	char *uuu;

	int t, y = 0;

	if (str == NULL)

	return (NULL);

	t = 0;

	while (str[t] != '\0')
	t++;

	uuu = malloc(sizeof(char) * (t + 1));

	if (uuu == NULL)

	return (NULL);

	for (y = 0; str[y]; y++)

	uuu[y] = str[y];

	return (uuu);

}

