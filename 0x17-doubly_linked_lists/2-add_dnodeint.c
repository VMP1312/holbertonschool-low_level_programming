#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list.
 * @head: Head.
 * @n: New node.
 * Return: New node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;
		
	*head = new;
	
	return (*head);
}