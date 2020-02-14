#include "holberton.h"

/**
 * print_diagonal - print a diagonal line
 * @n: number of characters
 */
void print_diagonal(int n)
{
	int space;
	int line;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

