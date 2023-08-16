#include "function_pointers.h"

/**
* int_index - to return index place when the comparison is true or else -1
* @array: array calling itself again (funny man)
* @size: size - elements in array
* @cmp: pointer to a function
* Return: void always
*/
int int_index(int *array, int size, int (*cmp)(int))
{

	int w;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

	for (w = 0; w < size; w++)
	{
	if (cmp(array[w]))
	return (w);
	}
	return (-1);
	}
