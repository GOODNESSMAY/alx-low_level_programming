#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - to free a linked list program
 * @head: pointer to the node which is to be freed
*/

void free_list(list_t *head)

{
list_t *tempyy;

while (head)

{
tempyy = head->next;
free(head->str);
free(head);
head = tempyy;
}
}
