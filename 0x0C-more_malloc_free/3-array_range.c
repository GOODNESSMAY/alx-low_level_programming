#include <stdlib.h>
#include "main.h"

/**
* array_range - create an array of integers here
* @min: minimum range of values
* @max: maximum range of values stored
*
* Return: pointer to new array in this code block
*/

int *array_range(int min, int max)
{
	int *good;
	int e, size;

	if (min > max)

	return (NULL);
	size = max - min + 1;

	good = malloc(sizeof(int) * size);

	if (good == NULL)
	return (NULL);

	for (e = 0; min <= max; e++)

	good[e] = min++;
	return (good);
}

