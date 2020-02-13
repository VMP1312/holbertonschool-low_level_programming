#include "holberton.h"
/**
 * _isupper - returns 1 if upercase alphabet and 0 if not
 * @c: character to print.
 * Return: 1 for uppercase, 1 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
