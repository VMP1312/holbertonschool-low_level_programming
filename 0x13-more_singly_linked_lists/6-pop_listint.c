#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list.
 * @head: Node.
 * Return: deleted head node
 */
int pop_listint(listint_t **head)
{
	int backup;

	if (!(*head))
	{
		return (0);
	}

	backup = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (backup);
}
