#include "holberton.h"
/**
 *_isalpha - checks if is an alphabetic character
 *@c: character
 *Return 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
