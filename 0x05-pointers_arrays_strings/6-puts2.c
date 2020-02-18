#include "holberton.h"
/**
 * _strlen - return the length of a string
 * @s: pointer of the array
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	return (c);
}

/**
 * puts2 - prints the every other character of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i = i + 2)
		_putchar(str[i]);

	_putchar('\n');
}
