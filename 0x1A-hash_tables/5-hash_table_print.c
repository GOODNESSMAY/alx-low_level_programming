#include "hash_tables.h"

/**
* hash_table_print - prints hash table
* @ht: the hash table to be printed
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *tmp;
	char flag = 0; /* 0 while no data has been printed yet */

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		tmp = ht->array[n];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
