#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: Node.
 * @n: Number.
 * Return: Node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pnt, *recv;

	pnt = malloc(sizeof(listint_t));
	if (pnt == NULL)
	{
		return (NULL);
	}

	pnt->n = n;
	pnt->next = NULL;

	if (*head == NULL)
		*head = pnt;
	else
	{
		recv = *head;
		while (recv->next != NULL)
		{
			recv = recv->next;
		}
		recv->next = pnt;
	}
	return (*head);
}
