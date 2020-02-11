#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c, nl;

	for (nl = 0; nl < 10; nl++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
