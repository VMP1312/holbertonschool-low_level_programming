#include "holberton.h"
/**
 * _strcpy - Copies the string pointed to by src, including the null byte
 * @dest: char dest
 * @src: char src
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char c;

	for (i = 0; src[i] != '\0'; i++)
	{
		c = src[i];
		dest[i] = c;
	}
	dest[i] = '\0';
	return (dest);
}
