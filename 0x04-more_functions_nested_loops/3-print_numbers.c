#include "holberton.h"
/**
 *print_numbers-print from 0 to 9
 */
void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

