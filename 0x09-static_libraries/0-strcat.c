 #include "holberton.h"
/**
 * _strcat - appends 2 strings overwriting the terminating null byte
 * @src: q = to the s1
 * @dest: p = to the s2
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char *q;
	char *p;

	for (q = dest; *q != '\0'; q++)
		;

	for (p = src; *p != '\0'; p++, q++)
		*q = *p;

	*q = '\0';

	return (dest);
}
