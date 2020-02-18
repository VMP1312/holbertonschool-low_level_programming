#include "holberton.h"

/**
 * print_rev - prints a string backwards
 * @s: string
 */

void print_rev(char *s)
{

	int i = 0;

	while (*s != '\0')
	{
		len++;
		++s;
	}

	s--;

	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}

	_putchar('\n');
}
