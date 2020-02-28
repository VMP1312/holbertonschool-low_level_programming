#include "holberton.h"
/**
 * _isdigit - returns 1 if upercase alphabet and 0 if not
 * @c: character to print.
 * Return: 1 for number, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
