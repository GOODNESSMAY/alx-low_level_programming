#include "lists.h"

/**
* dlistint_len - Returns number of elements in dlistint_t list.
* @h: pointer the head of the dlistint_t list
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}

