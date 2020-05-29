#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht:  hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value:  is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *old, *new;
	unsigned long int idx;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	old = ht->array[idx];
	while (old)
	{
		if (strcmp(old->key, key) == 0)
		{
			free(old->value);
			old->value = strdup(value);
			if (old->value == NULL)
				return (0);
			else
				return (1);
		}
		old = old->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL  || new->key == NULL)
		return (0);

	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
