#include "lists.h"

/**
 * print_list -  prints all the elements of a list.
 * @h: pointer
 * Return: element of the list to print.
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *j;

	i = 0;
	j = (list_t *)h;
	while (j != NULL)
	{
		if (j->str == NULL)
		{

			printf("[0] (nil)\n");
		}
		else
		printf("[%d] %s\n", j->len, j->str);
		j = j->next;
		i++;
	}
	return (i);
}
