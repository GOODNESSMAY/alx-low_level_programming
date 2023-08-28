#include "lists.h"
#include <stdlib.h>

/**
* free_listint - free listint_t list
* @head: head of the list
* Return: Null if error
*/
void free_listint(listint_t *head)

{
listint_t *tem;

while (head != NULL)
{
tem = head->next;
free(head);
head = tem;
}
}
