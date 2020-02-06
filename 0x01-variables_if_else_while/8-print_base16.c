#include <stdio.h>

/**
 *main - prints hexadecimal base
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = '0';
	char let = 'a';

	while (n <= '9') 
	{
		putchar(n);
		n++;
	}

	while (let <= 'f')
	{
		putchar(let);
		let++;
	}

	putchar('\n');

	return (0);
}
