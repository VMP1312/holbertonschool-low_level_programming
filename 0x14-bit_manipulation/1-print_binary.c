#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	bin = bin << 63;
	while (!(n & bin))
	{
		bin = bin >> 1;
	}

	while (bin)
	{
		if ((n & bin) != 0)
		{
			_putchar('1');
			bin = bin >> 1;
		}
		else
		{
			_putchar('0');
			bin = bin >> 1;
		}
	}
}
