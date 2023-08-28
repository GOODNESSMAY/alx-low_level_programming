#include "lists.h"

/**
* listint_len - num of elements in a linked list to be printed
* @h: head of the pointer
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
size_t may = 0;

while (h != NULL)

{
h = h->next;
may++;
}
return (may);
}

