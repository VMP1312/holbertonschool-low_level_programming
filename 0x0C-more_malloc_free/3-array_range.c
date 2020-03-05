#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: min size.
 * @max: max size.
 * Return: Min > Max: Null also on fail NULL
 **/
int *array_range(int min, int max)
{
	int *c;
	int i, j;

	i = max - min;
	if (min > max)
	{
		return (NULL);
	}
	c = malloc(sizeof(int) * (i + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= (i); j++, min++)
	{
		c[j] = min;
	}
	return (c);

}
