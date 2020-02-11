#include "holberton.h"

/**
 * jack_bauer - print minutes of the day
 */

void jack_bauer(void)
{
	int hora = 0;
	int min = 0;

	while (hora < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hora / 10));
			_putchar('0' + (hora % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hora++;
	}
}
