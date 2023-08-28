#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - delete head node program
* @head: double pointer
* Return: void
*/

int pop_listint(listint_t **head)

{
listint_t *begin;
int g;

if (head == NULL || *head == NULL)
return (0);

begin = *head;
*head = begin->next;
g = begin->n;
free(begin);
return (g);
}

