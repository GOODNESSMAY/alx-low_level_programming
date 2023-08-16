#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print a name pointer to a function
* @name: string to use for this code
* @f: pointing to a function
* Return: 0 always
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)

	return;

	f(name);
	}
