#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* add_node_end - function to add new nodes at the end of a program
* @head : double pointer character
* @str: string
* Return: addr of new element or null if the program fails
*/

list_t *add_node_end(list_t **head, const char *str)

{
list_t *begin;
list_t *hold = *head;
unsigned int len = 0;

while (str[len])
len++;

begin = malloc(sizeof(list_t));

if (!begin)

return (NULL);

begin->str = strdup(str);
begin->len = len;
begin->next = NULL;

if (*head == NULL)

{
*head = begin;
return (begin);
}

while (hold->next)

hold = hold->next;

hold->next = begin;

return (begin);
}


