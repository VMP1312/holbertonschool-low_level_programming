#include "lists.h"

/**
 * get_nodeint_at_index -
 *
 * Return: 
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
	do
	{
		ptr = ptr->next;
		count++;
	}while (count == index)
	return (ptr);
}
	/*{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
	}

	return (NULL);
}*/
