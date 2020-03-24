#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Node.
 * @idx: Address.
 * @n: Content.
 * Return: New node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int move;
	listint_t *node1, *node2;

	node1 = malloc(sizeof(listint_t));
	if (!node1 || (!(*head) && idx > 0))
		return (NULL);

	node1->n = n;

	if (idx == 0)
	{
		node1->next = *head;
		*head = node1;
		return (node1);
	}

	node2 = *head;

	for (move = 0; node2 && move < idx; move++)
	{
		if (move == idx - 1)
		{
			node1->next = node2->next;
			node2->next = node1;
			return (node1);
		}
		node2 = node2->next;
	}
	free(node1);
	return (NULL);
}
