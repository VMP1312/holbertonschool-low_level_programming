#include "holberton.h"
/**
 * print_alphabet - Print the alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; letter <= 'z'; letter++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
