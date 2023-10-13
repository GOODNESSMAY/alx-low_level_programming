#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a new node at end of a dlistint_t list.
* @head: A pointer to a pointer to the head of the dlistint_t list.
* @n: int value to be added to the new node.
*
* Return: address of the new element if it succeeds, or NULL if it fails.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *current;

if (head == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

current = *head;
if (current == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

while (current->next != NULL)
current = current->next;

current->next = new_node;
new_node->prev = current;

return (new_node);
}
