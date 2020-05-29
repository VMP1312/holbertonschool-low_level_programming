#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table.
 * @key: Key.
 * Return: the value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *mv;
	unsigned long int idx = 0;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	mv = ht->array[idx];
	while (mv != NULL)
	{
		if (strcmp(mv->key, key) == 0)
		{
			return (mv->value);
		}
		mv = mv->next;
	}
	return (NULL);
}
