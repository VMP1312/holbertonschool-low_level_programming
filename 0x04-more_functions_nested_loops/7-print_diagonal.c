#include "holberton.h"

/**
 * print_diagonal - print a diagonal line
 * @n: number of characters
 */

void print_diagonal(int n)
{
	int line;
	int i;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (i = 1; i < line; ie++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
