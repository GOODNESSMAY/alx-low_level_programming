#include "main.h"
#include <stdlib.h>

/**
* create_array - create an array and assign char c
* @size: size of array
* @c: char
* Description: creating an array then assign a character c
* Return: pointer to array, NULL if fail
*
*/

char *create_array(unsigned int size, char c)
{

	char *str;

	unsigned int m;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	return (NULL);

	for (m = 0; m < size; m++)

	str[m] = c;

	return (str);

}

