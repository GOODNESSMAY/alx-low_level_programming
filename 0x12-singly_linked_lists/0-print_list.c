#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* print_lst : print elemet of the list.
* @h: pointer of the list_t to be printed in this program
* return: num of nodes that would be printed.
*/

size_t print_list(const list_t *h)
{
	size_t s = 0;

while (h)

{

	if (h->str != NULL)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	h = h->next;

	s++;

}
	return (s);

}
