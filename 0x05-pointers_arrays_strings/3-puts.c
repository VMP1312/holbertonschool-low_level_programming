#include "holberton.h"
/**
 * _puts - print string
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
