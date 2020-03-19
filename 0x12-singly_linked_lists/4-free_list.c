#include "lists.h"

/**
 * free_list - Frees a list
 *@head: pointer.
 * Return: Free head.
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	if (head->next)
		free_list(head->next);

	free(head->str);
	free(head);
}
