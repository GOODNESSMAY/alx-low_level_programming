#include "lists.h"

/**
* find_listint_loop - find loop in this program
* @head: search linked list
* Return: address of node || NULL
*/

listint_t *find_listint_loop(listint_t *head)

{
listint_t *lazy = head;
listint_t *quick = head;

if (!head)

return (NULL);

while (lazy && quick && quick->next)

{
quick = quick->next->next;
lazy = lazy->next;

if (quick == lazy)
{
lazy = head;
while (lazy != quick)
{
lazy = lazy->next;
quick = quick->next;
}

return (quick);
}
}

return (NULL);
}
