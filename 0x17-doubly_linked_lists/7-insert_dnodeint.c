#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes a node at a specific index
* @h: double pointer to the linked list
* @index: index at which to delete node
*
* Return: 1 on success, -1 on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp;
dlistint_t *new_node;
unsigned int count;

temp = *h;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->prev = NULL;
new_node->next = NULL;
new_node->n = n;
if (idx == 0)
{
*h = new_node;
return (new_node);
}
else
{
count = 0;
while (temp != NULL && count != idx - 1)
{
temp = temp->next;
count++;
}
if (count != idx - 1)
{
return (NULL);
}
temp->next = new_node;
new_node->next = temp;
new_node->prev = temp;
return (new_node);
}
}

