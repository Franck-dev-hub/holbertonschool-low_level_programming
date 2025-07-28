#include "lists.h"

/**
 * add_node_end - Add a node at the end
 * @head: head
 * @str: node's data
 *
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *temp;

	if (!str)
		return (NULL);

	temp = strdup(str);
	if (!temp)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(temp);
		return (NULL);
	}

	new->str = temp;	
	new->len = strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new;
	}

	return (new);
}

