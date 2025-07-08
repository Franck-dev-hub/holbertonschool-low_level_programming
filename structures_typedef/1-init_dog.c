#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init dog informations
 * @d: dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
