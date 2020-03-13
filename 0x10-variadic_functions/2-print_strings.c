#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 *@separator: separator
 *@n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	char *c;

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(lista, char*);

		if (c == NULL)
			printf("(nil)");

		else if (i < n - 1 && separator != NULL)
			printf("%s%s", c, separator);

		else
			printf("%s", c);
	}
	printf("\n");
	va_end(lista);

}
