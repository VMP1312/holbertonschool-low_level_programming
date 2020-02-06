#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Gives a random rumber and sais if is positive, negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is greater than 5\n", last);
	}
	else if (last < 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d and is less than 6 and not 0\n", last);
	}
	else
	{
		printf("Last digit of %d", n);
		printf(" is %d and is 0\n", last);
	}
	return (0);
}
