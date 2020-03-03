#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  creates an array of chars with a specific char.
 * @size: size of array
 * @c: character
 * Return: NULL if size 0 or j
 */

char *create_array(unsigned int size, char c)
{

	unsigned int n;
	char *j;

	if (size == 0)
	{
		return (NULL);
	}
	j = malloc(sizeof(char) * size);
	if (j == 0)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		*(n + j) = c;
	}
	return (j);
}
