#include "holberton.h"
/**
 * _strlen - return the length of a string
 * @s: pointer of the array
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
	}
	return (c);
}

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++, j--;
	}
}
