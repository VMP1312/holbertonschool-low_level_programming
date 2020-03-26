#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @index: Index.
 * @n: Number.
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits;

	bits = (sizeof(n) * 8);

	if (index > bits)
	{
		return (-1);
	}

	n = n >> index & 1;

	if (n != 0)
		return (1);
	return (0);
}
