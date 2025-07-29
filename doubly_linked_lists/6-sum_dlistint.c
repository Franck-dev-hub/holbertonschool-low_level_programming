#include "lists.h"

/**
 * sum_dlistint - Get the sum of all nodes.
 * @head: Head.
 *
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	unsigned int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
