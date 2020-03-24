#include "lists.h"

/**
 * free_listint2 - unction that frees a list
 * @head: node
 */
void free_listint2(listint_t **head)
{
	if (!head)
	{
		return;
	}

	if ((*head)->next)
	{
		free_listint2(&(*head)->next);
	}
	free((*head));
	*head = NULL;
}
