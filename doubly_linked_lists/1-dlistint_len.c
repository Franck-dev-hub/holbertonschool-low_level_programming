#include "lists.h"

/**
 * dlistint_len - print dlistint_t length
 * @h: head
 *
 * Return: 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
