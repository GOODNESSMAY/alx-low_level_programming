#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end - add node to the end of linked list program
* @head: pointer to first element
* @n: new element
* Return: pointer to new node, NULL if the program fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)

{
listint_t *may;
listint_t *tem = *head;

may = malloc(sizeof(listint_t));
if (!may)
return (NULL);

may->n = n;
may->next = NULL;

if (*head == NULL)

{
*head = may;
return (may);
}
while (tem->next)
tem = tem->next;
tem->next = may;

return (may);
}
