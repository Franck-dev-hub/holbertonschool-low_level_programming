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
	int len = 0;

	if (!str)
		return (NULL);

	temp = strdup(str);
	if (!temp)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	while (temp[len])
		len++;

	new->str = temp;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
