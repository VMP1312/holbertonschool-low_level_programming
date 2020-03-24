#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: Node.
 * Return: Node
 */
void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}

	if (head->next)
	{
		free_listint(head->next);
	}
	free(head);
}
