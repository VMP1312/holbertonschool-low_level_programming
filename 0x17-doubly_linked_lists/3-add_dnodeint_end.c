#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list.
 * @head: Head.
 * @n: New node
 * Return: New node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
