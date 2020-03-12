#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Execute the calc
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n1, n2, val;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	val = func(n1, n2);
	printf("%d\n", val);
	return (0);
}
