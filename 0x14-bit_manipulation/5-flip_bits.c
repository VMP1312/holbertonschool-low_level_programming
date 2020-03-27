#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to flip.
 * @n: Number.
 * @m: Number.
 * Return: Changes needs.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (!(n == m))
	{
		if (n == 0 && m == 0)
		{
			break;
		}

		if (!((n & 1) == (m & 1)))
		{
			count++;
		}

		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
