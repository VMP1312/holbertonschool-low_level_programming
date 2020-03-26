#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @index: Index.
 * @n: Number.
 * Return: 1 or -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n += 1 << index;
	return (1);
}
