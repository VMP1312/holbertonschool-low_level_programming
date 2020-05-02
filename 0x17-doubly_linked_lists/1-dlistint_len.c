#include "lists.h"

/**
 * dlistint_len - Returns the number of elements of a list.
 * @h: Head.
 * Return: Number of elements of a list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	for (cnt = 0; h != NULL; cnt++)
	{
		h = h->next;
	}
	return (cnt);
}
