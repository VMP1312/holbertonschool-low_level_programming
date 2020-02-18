#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{

	int i = 0;

	while (*s != '\0')
	{
		i++;
		++s;
	}

	s--;

	while ( i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}

	_putchar('\n');
}
