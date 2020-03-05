#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concat 2 strings
 *@s1: string
 *@s2: string
 *@n: pos of the string
 *Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, m;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
	n = j;
	}
	c = malloc(sizeof(*c) * (i + n + 1));
		if (c == NULL)
		{
			return (NULL);
		}
	for (k = 0; k < i; k++)
	{
		c[k] = s1[k];
	}
	for (m = 0; m < n; m++)
	{
		c[i + m] = s2[m];
	}
	c[i + m] = '\0';
	return (c);
}
