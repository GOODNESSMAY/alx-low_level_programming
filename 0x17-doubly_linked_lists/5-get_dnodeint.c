#include "lists.h"

/**
* get_dnodeint_at_index - finds specific node of a linked list
* @head: pointer
* @index: index of the node
*
* Return: pointer to the indexed node, or NULL on failure
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int g;

	if (head == NULL)
	return (NULL);
	if (index == 0)
		return (head);
	for (g = 0; g < index; g++)
	{
		if (head->next == NULL)
		return (NULL);
		head = head->next;
	}
	return (head);
}
