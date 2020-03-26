#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Binary number.
 * Return: Int.
 */
unsigned int binary_to_uint(const char *b)
{
	int count = 0;
	int convert = 0;

	if (!b)
	{
		return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] == '0' || b[count] == '1')
		{
			convert = (convert * 2) + (b[count] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (convert);
}
