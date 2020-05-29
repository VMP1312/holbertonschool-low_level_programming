#include "hash_tables.h"

/**
 * hash_table_delete -
 *
 * Return: 
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *now, *del;
	unsigned int mv = 0;

	if (ht == NULL)
		return;
	while (mv < ht->size)
	{
		if (ht->array[mv] != NULL)
		{
			now = ht->array[mv];
			while (now != NULL)
			{
				del = now;
				free(now->key);
				if (now->value != NULL)
					free(now->value);
				now = now->next;
				free(del);
			}
		}
		mv++;
	}
	free(ht->array);
	free(ht);
}
