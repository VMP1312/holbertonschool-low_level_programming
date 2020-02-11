#include "holberton.h"
/**
 *print_sign - print if possitive, negative or zero
 *@n: number
 *Return: 1 if positive, 0 if is zero or -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
