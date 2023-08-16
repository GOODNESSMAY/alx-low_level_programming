#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - prints each array element on another line.
* @array: array calling it self haha
* @size: to print many elements
* @action: pointer to be used to print regular or hex
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
	return;

	for (q = 0; q < size; q++)
	{
	action(array[q]);
	}
	}

