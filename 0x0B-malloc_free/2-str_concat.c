#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: Array.
 * @s2: Array.
 * Return: Return NULL if empty
 **/
char *str_concat(char *s1, char *s2)
{
	int j;
	int i;
	int k;
	int a;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
		;
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		return ('\0');
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (a = 0; a < j; a++)
	{
		s[i + a] = s2[a];
	}
	return (s);
}
