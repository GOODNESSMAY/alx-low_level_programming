#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - print a num followed by a new line.
* @separator: The string to be used toprint the new line.
* @n: The number of int in this func.
* @...: A variable num to be printed in this code.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int may;

	va_start(nums, n);

	for (may = 0; may < n; may++)
	{
	printf("%d", va_arg(nums, int));

	if (may != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
	}

