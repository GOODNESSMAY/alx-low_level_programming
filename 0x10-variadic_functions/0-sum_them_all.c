#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns sum of paramters.
* @n: The number of paramters to a function.
* @...: variable number to calculate the sum.
*
* Return: If n == 0 - 0.
* Otherwise - the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
	{
	va_list qp;
	unsigned int p, sum = 0;

	va_start(qp, n);

	for (p = 0; p < n; p++)
	sum += va_arg(qp, int);

	va_end(qp);

	return (sum);
	}
