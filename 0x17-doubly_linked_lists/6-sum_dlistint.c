#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a list.
 * @head: Head of the list.
 * Return: Sume
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *move = head;
	int sum = 0;

	if (head != NULL)
	{
		while (move != NULL)
		{
			sum += move->n;
			move = move->next;
		}
	}
	return (sum);
}