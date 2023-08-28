#include "lists.h"
#include <stdio.h>

/**
* print_listint - print elements of the list in this program
* @h: head of the node
* Return: num of nodes
*/
size_t print_listint(const listint_t *h)

{
size_t may = 0;

while (h != NULL)

{
printf("%d\n", h->n);
h = h->next;
may++;
}

return (may);
}
