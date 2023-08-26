#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * list_len - return element of the list
 * @h: pointer of the list_t to be printed in this program
 * Return: num of element in h for this code
 */
size_t list_len(const list_t *h)
{
size_t g = 0;

while (h)

{
	h = h->next;
	g++;
}
	return (g);
}

