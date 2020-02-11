#include "holberton.h"

/**
 * print_last_digit - print last digit of number
 * @n: number
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int ln = n % 10;

	if (n < 0)
		ln = ln * -1;

	_putchar('0' + ln);

	return (ln);
}
