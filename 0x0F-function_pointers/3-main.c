#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - Prints simple operations.
* @argc: arguments supplied to the code.
* @argv: array of pointers to the code.
*
* Return: void.
*/
	int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num6, num8;
	char *ok;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	num6 = atoi(argv[1]);
	ok = argv[2];
	num8 = atoi(argv[3]);

	if (get_op_func(ok) == NULL || ok[1] != '\0')
	{
	printf("Error\n");
	exit(99);
	}

	if ((*ok == '/' && num8 == 0) ||
(*ok == '%' && num8 == 0))
	{
	printf("Error\n");
	exit(100);
	}

	printf("%d\n", get_op_func(ok)(num6, num8));

	return (0);
	}

