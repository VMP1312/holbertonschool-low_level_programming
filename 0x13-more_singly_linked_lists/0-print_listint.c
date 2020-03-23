#include "lists.h"

/**
 * print_listint -
 *
 * Return: 
 */
size_t print_listint(const listint_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}