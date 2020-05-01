
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a list.
 * @h: Head.
 * Return: The times it prints.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt = 0;

	for (cnt = 0; h != NULL; cnt++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}
