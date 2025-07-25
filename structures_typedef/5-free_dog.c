#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - doggy is free !
 * @d: doggy pointer
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
