#include "holberton.h"
/**
 * factorial - calculate the factorial of a number
 * @n: number
 * Return: -1 if error, if not, return the factorial value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
