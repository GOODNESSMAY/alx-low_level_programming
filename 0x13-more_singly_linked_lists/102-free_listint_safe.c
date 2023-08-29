#include "lists.h"

/**
* free_listint_safe - free a linked list program
* @h: pointer to first node
* Return: num of element in the free linked list
*/

size_t free_listint_safe(listint_t **h)

{

size_t len = 0;
int may;


if (!h || !*h)

return (0);

while (*h)

{
may = *h - (*h)->next;
if (may > 0)

{

free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
