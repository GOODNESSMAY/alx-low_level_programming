#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings.
* @separator: The string.
* @n: number of strings passed to a function.
* @...: variable number.
*
* Description: If separator is NULL, don't print.
* If strings if NULL, (nil) should be printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
	{
	va_list strings;
	char *stray;
	unsigned int may;

	va_start(strings, n);

	for (may = 0; may < n; may++)
	{
	stray = va_arg(strings, char *);

	if (stray == NULL)
	printf("(nil)");
	else
	printf("%s", stray);

	if (may != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
	}
