#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - function to add nodes at the begining of a program
 * @head : double pointer character
 * @str: string
 * Return: addr of new element or null if the program fails
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *begin;
	unsigned int len = 0;

	while (str[len])
	len++;

	begin = malloc(sizeof(list_t));

	if (!begin)

	return (NULL);

		begin->str = strdup(str);
		begin->len = len;
		begin->next = (*head);
		(*head) = begin;

	return (*head);
}
