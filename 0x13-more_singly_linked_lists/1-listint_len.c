#include "lists.h"

/**
 * listint_len - Function that return the number of elements on list.
 *@h: Node.
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}

