#include "lists.h"

/**
 * add_node - Add a node at the begin
 * @head: head
 * @str: node's data
 *
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;

	*head = new;

	return (new);
}
