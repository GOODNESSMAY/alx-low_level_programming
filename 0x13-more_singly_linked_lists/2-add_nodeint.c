#include "lists.h"

/**
* add_nodeint - add new node at the beginning of a linked list in this code
* @head: pointer to the first node in this program
* @n: variable to the new node
* Return: pointer to new node, NULL if the program fails
*/
listint_t *add_nodeint(listint_t **head, const int n)

{
listint_t *may;

may = malloc(sizeof(listint_t));

if (!may)
return (NULL);
may->n = n;
may->next = *head;
*head = may;

return (may);
}

