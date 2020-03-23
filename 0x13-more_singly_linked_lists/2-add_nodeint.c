#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list.
 * @head: Node.
 * @n: Number. 
 * Return: Node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	
	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}