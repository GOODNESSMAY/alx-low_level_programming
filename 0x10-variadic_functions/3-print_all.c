#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints everything
* @format: list of types of arguments used in this function
*/

void print_all(const char * const format, ...)
	{
	int i = 0;
	char *may, *pep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
	while (format[i])
	{
	switch (format[i])
	{
	case 'c':
	printf("%s%c", pep, va_arg(list, int));
	break;
	case 'i':
	printf("%s%d", pep, va_arg(list, int));
	break;
	case 'f':
	printf("%s%f", pep, va_arg(list, double));
	break;
	case 's':
	may = va_arg(list, char *);
	if (!may)
	may = "(nil)";
	printf("%s%s", pep, may);
	break;
	default:
	i++;
	continue;
	}
	pep = ", ";
	i++;
	}
	}

	printf("\n");
	va_end(list);
	}
