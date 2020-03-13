#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *@separator: char to separate the int line
 *@n: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(s, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(s);

}
