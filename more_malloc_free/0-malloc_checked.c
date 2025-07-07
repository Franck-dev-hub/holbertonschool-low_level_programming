#include "main.h"

/**
 * malloc_checked - change malloc size
 * @b: input array
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
