#include "lists.h"

/**
 * list_len - print list_t's length
 * @h: head
 *
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}

