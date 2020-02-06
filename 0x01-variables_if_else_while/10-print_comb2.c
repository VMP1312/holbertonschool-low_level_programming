#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0
 **/
int main(void)
{
	int fir;
	int sec, sum;

	for (fir = 0; fir <= 9; fir++)
	{
		for (sec = 0; sec <= 9; sec++)
		{
			putchar(fir  + '0');
                        putchar(sec + '0');
                        if (sum < 99)
                        {
                                putchar(',');
                                putchar(' ');
                        }
                        sum++;
		}
	}
	putchar('\n');
	return (0);
}
