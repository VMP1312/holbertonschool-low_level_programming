#include "holberton.h"
/**
 *_strlen_recursion - Return the lenght of a string
 *@s: string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check - check if is a palindrome
 * @s: string
 * @fwd: string
 * @bwd: backward string
 * Return: palindrome
 */

int check(char *s, int fwd, int bwd)
{
	if (*(s + fwd) == *(s + bwd))
	{
		if (fwd == bwd || fwd == bwd + 1)
		{
			return (1);
		}
		return (0 + check(s, fwd + 1, bwd - 1));
	}
	return (0);
}

/**
 * is_palindrome - return if is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check(s, 0, _strlen_recursion(s) - 1));
}
