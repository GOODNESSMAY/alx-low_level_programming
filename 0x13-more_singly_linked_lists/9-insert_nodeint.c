#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - insert new nodes into linked list in the code
* @head: pointer to first program
* @idx: where new node is added
* @n: new node value in this program
* Return: pointer to new node or NULL
*/

insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)


listint_t *may;
listint_t *tem = *head;
unsigned int d;

may = malloc(sizeof(listint_t));
if (!may || !head)
return (NULL);

may->n = n;
may->next = NULL;

if (idx == 0)
{
may->next = *head;
*head = may;
return (may);
}

for (d = 0; tem && d < idx; d++)

{
if (d == idx - 1)
{
may->next = tem->next;
tem->next = may;
return (may);
}
else
tem = tem->next;
}
return (NULL);
}
