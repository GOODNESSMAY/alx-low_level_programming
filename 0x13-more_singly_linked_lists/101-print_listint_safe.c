#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory to nodes  list
 *
 * @list: old list to append
 * @size: size of the new list
 * @new: new node to add
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **maymay;
	size_t m;

	maymay = malloc(size * sizeof(listint_t *));
	if (maymay == NULL)
	{
		free(list);
		exit(98);
	}
	for (m = 0; m < size - 1; m++)
		maymay[m] = list[m];
	maymay[m] = new;
	free(list);
	return (maymay);
}

/**
 * print_listint_safe - to print listint_t linked list
 * @head: pointer to start of node
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m, sum = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (m = 0; m < sum; m++)
		{
			if (head == list[m])
			{
			printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (sum);
			}
		}
		sum++;
		list = _r(list, sum, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (sum);
}
