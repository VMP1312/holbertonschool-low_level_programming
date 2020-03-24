#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n) of a list
 * @head: Node.
 * Return: Sum.
 */
int sum_listint(listint_t *head)
{
	int sum;

	i = 0;

	if (!head)
		return (sum);

	if (head->next)
		sum += sum_listint(head->next);

	sum += head->n;
	return (sum);
}

