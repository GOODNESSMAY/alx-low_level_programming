#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - correct function to perform
* operation needed by the user.
* @s: the argument.
*
* Return: pointer to the function corresponding
* operator parameter.
*/
	int (*get_op_func(char *s))(int, int)
	{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
	};

	int m = 0;

	while (ops[m].op != NULL && *(ops[m].op) != *s)
	m++;

	return (ops[m].f);
}
