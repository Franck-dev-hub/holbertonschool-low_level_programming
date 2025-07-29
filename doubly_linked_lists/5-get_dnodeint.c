#include "lists.h"

/**
 * get_dnodeint_at_index - Get a node position.
 * @head: Head.
 * @index: Node position.
 *
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int position = 0;

	while (current)
	{
		if (position == index)
			return (current);

		current = current->next;
		position++;
	}

	return (NULL);
}
