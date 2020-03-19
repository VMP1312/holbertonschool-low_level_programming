#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list.
 *@h: pointer.
 * Return: element of the list
 */
size_t list_len(const list_t *h)
{
	size_t i;
	list_t *j;

	i = 0;
	j = (list_t *)h;
	while (j != NULL)
	{

		j = j->next;
		i++;
	}
	return (i);
}
