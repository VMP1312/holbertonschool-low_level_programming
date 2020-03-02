#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numbers
 * @argc: Argc
 * @argv: Argv.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int k;
	int l;

	l = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[i]);
		l = l + j;
	}
	printf("%d\n", l);
	return (0);
}
