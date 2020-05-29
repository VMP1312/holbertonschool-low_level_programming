#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table.
 * @ht: Hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int mv = 0;
	char *arr = "\0";

	if (ht == NULL)
		return;

	printf("{");
	while (mv < ht->size)
	{
		tmp = ht->array[mv];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", arr, tmp->key, tmp->value);
			arr = ", ";
			tmp = tmp->next;
		}
		mv++;
	}
	printf("}\n");
}
