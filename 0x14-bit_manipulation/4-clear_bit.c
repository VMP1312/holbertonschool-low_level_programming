#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @index: Index.
 * @n: Number.
 * Return: 1 or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 63)
	{
		return (-1);
	}

	*n = *n & ~mask;
	return (1);
}
