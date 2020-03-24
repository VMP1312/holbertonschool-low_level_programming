#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list.
 * @head: Node.
 * @index: Index of the node.
 * Return: Addr. of the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *ptr;

	if (!head)
	{
		return (NULL);
	}
	ptr = head;
	for (count = 0; ; count++)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
