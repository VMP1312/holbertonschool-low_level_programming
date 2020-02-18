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
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int half;
	int i = _strlen(str);

	if (i % 2 != 0)
		half = (i / 2) + 1;
	else
		half = (i / 2);
	
	while (half < i)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}

