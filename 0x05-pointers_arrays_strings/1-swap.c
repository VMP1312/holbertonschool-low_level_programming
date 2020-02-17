#include "holberton.h"
/**
 * swap_int - Swap the value of two integers
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
