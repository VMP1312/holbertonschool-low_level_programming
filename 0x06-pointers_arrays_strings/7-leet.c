#include "holberton.h"
/**
 * leet - replace aplha into numbers
 * @s: string
 * Return: char
 */
char *leet(char *s)
{
	int i;
	int j;

	char chars[] = "aAeEoOtTlL";
	char encrypt[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; encrypt[j] != '\0'; j++)
		{
			if (s[i] == chars[j])
			{
				s[i] = encrypt[j];
			}
		}
		i++;
	}
	return (s);
}
