#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list.
 * @head: Head.
 * @index: Index.
 * Return: Head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt;

	cnt = 0;
	if (head != NULL)
	{
		while (cnt < index && head != NULL)
		{
			head = head->next;
			cnt++;
		}
		return (head);
	}
	return (NULL);
}
