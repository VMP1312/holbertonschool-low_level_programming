#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Head.
 * @idx: Index.
 * @n: Int.
 * Return: New node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;
	dlistint_t *prev = *h;
	unsigned int cnt;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (h == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new->n = n, new->next = NULL, new->prev = NULL;
		*h = new;
		return (new);
	}
	for (cnt = 0; prev != NULL && cnt < idx; cnt++)
	{
		tmp = prev, prev = prev->next;
	}
	if (prev != NULL || cnt == idx)
	{
		new->n = n;
		if (idx != 0)
		{
			new->next = prev, new->prev = tmp, tmp->next = new;

			if (prev != NULL)
				prev->prev = new;
			else
				prev->prev = prev;
		}
		else
		{
			new->next = *h, new->prev = NULL, *h != NULL ? (*h)->prev = new : *h;
			*h = new;
		}
		return (new);
	}
	return (NULL);
}
