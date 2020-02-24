#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: pointer
 * @c: char
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
