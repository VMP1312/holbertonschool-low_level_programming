#include "holberton.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: value
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	root = _sqroot(n, 0);
	return (root);
}

/**
 * _sqroot - Find the square root
 * @n: value
 * @base: value
 * Return: result of the sqare root of n
 */
int _sqroot(int n, int base)
{
	int root = 0;

	if (base * base > n)
		return (-1);
	if (base * base == n)
		return (base);
	root = _sqroot(n, base + 1);
	return (root);
}
