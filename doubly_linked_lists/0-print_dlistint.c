#include "lists.h"

/**
 * print_dlistint - print all the elements of dlisint_t
 * @h: head
 *
 * Return: 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%i\n", h->n);
		len++;
		h = h->next;
	}

	return (len);
}
