#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: Key.
 * @size: Size.
 * Return: index at which the key/value pair should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = 0;

	if (size == 0 || key == NULL)
		return (idx);

	idx = (hash_djb2(key) % size);

	return (idx);
}
