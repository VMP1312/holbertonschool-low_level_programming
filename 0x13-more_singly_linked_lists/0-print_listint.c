#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *@h: node
 * Return: Number of nodes
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
