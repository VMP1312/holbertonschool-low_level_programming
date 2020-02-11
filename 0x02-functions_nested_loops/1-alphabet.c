#include "holberton.h"
/**
 * print_alphabet - Print the alphabet
 *
 * Return: Always 0
 */
void print_alphabet()
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
