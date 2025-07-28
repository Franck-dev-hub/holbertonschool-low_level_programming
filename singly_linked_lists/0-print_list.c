#include "lists.h"

/**
 * print_list - print number of list_t elements
 * @h: head
 *
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;
	char *data;

	while (h)
	{
		if (!h->str)
			data = "(nil)";
		else
			data = h->str;
		printf("[%u] %s\n", h->len, data);
		len++;
		h = h->next;
	}

	return (len);
}
