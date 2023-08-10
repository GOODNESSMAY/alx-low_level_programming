#include <stdlib.h>
#include "main.h"

/**
* malloc_checked -To allocate memory using malloc
* @b: variable used to locate memory
*
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)

{

	char *g;

	g = malloc(b);
	if (g == NULL)

	exit(98);

	return (g);

}

