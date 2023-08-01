#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Entry point
* @a: input variable g
* @size: input variable g
* Return: 0 (Success)
*/
void print_diagsums(int *a, int size)
{
	int num1, num2, f;

	num1 = 0;
	num2 = 0;

	for (f = 0; f < size; f++)
	{
	num1 = num1 + a[f * size + f];
	}
	for (f = size - 1; f >= 0; f--)
	{
	num2 += a[f * size + (size - f - 1)];
	}
	printf("%d, %d\n", num1, num2);
}

