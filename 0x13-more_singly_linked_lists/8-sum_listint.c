#include "lists.h"

/**
* sum_listint - cal sum of data in this program
* @head: firt node
* Return: sum of the data
*/

int sum_listint(listint_t *head)

{
int num = 0;

while (head != NULL)
{
num += head->n;
head = head->next;
}
return (num);
}

