#include "holberton.h"
/**
 * print_line - print n lines
 * @n: number of lines
 */
void print_line(int n)
{
	int line;

	for (line = n; line > 0; line--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
