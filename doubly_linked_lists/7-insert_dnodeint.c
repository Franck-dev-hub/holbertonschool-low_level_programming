#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at a position.
 * @h: Head.
 * @idx: Node position.
 * @n: Value.
 *
 * Return: 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current && i < idx)
	{
		current = current->next;
		i++;
	}

	if (!current && i == idx)
		return (add_dnodeint_end(h, n));
	else if (!current)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = current->prev;
	new->next = current;

	if (current->prev)
		current->prev->next = new;
	current->prev = new;

	return (new);
}

