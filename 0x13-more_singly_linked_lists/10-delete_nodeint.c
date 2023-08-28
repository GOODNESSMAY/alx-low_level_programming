#include "lists.h"
#include <stdlib.h>

/**
*delete_nodeint_at_index - delete node at index
* @head: a pointer to first element in linked list
* @index: index of the node
* Return: 1 for sucess || -1 for fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
unsigned int h = 0;
listint_t *tem = *head;
listint_t *niw = NULL;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tem);
return (1);
}

while (h < index - 1)

{
if (!tem || !(tem->next))
return (-1);
tem = tem->next;
h++;
}
niw = tem->next;
tem->next = niw->next;
free(niw);

return (1);
}
