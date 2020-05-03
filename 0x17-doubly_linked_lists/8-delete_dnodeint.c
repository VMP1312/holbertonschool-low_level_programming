#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a list.
 * @head: Head.
 * @index: Index.
 * Return: 1 on Success or -1 on error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *h;
	unsigned int cnt = 0;

	del = *head;
	if (del == NULL)
		return (-1);
	while (cnt < index && del != NULL)
	{
		h = del, del = del->next;
		cnt++;
	}
	if (del != NULL)
	{
		free(del);
		del = del->next;
		if (cnt != 0)
		{
			if (del != NULL)
				del->prev = h;
			h->next = del;
		}
		else
		{
			if (del != NULL)
				del->prev = NULL;
			*head = del;
		}
		return (1);
	}
	return (-1);
}
