#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: head
 *
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

