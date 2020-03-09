#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies
* @argc: Numbers of paremeters.
* @argv: The parameter to put in the cmd.
* Return: return 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}