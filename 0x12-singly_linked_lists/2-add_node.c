#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list.
 * @head: pointer
 * @str: pointer
 * Return: address of the new element. 
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *j = malloc(sizeof(list_t));

	i = 0;
	if (j == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	j->str = strdup(str);
	j->len = i;
	j->next = *head;
	*head = j;
	return (j);
}
