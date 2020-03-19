#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer
 * @str: pointer
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *j, *k;

	i = 0;
	j = malloc(sizeof(list_t));
	if (j == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}
	j->str = strdup(str);
	j->len = i;
	j->next = NULL;

	if (*head != NULL)
	{
		k = *head;
		while (k->next != NULL)
			k = k->next;
		k->next = j;
	}
	else
	{
		*head = j;
	}
	return (j);
}
