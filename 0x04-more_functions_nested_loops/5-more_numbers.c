#include "holberton.h"
/**
 *more_numbers - Print from 0 to 14
 */
void more_numbers(void)
{
	int n;
	int n1;
	int n2;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			n1 = n % 10;
			n2 = n / 10;
			if (n > 9)
			{
				_putchar(n2 + '0');
			}
			_putchar(n1 + '0');
		}
		_putchar('\n');
	}
}
