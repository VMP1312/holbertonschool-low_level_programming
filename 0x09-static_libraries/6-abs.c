#include "holberton.h"

/**
 * _abs - calculate absolute value of a number
 * @n: number
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (-n);

	return (0);
}
