#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table.
 * @size: size.
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hstable;

	hstable = malloc(sizeof(hash_table_t) * 1);
	if (hstable == NULL)
		return (NULL);
	hstable->size = size;
	hstable->array = malloc(sizeof(hash_node_t *) * size);
	if (hstable->array == NULL)
	{
		free(hstable);
		return (NULL);
	}
	return (hstable);
}
