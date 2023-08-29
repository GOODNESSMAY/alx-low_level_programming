#include "lists.h"

/**
* get_nodeint_at_index - return node at at some point in linked list
* @head: first node in the rannked linked list
* @index: the index of node
* Return: pointer to index or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int m;

if (head == NULL)
return (NULL);
for (m = 0; m < index; m++)

{
head = head->next;
if (head == NULL)
return (NULL);
}

return (head);
}
