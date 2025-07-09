#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, len_name = 0, len_owner = 0;

	while (name && name[len_name])
		len_name++;
	while (owner && owner[len_owner])
		len_owner++;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = malloc(len_name + 1);
	new->owner = malloc(len_owner + 1);
	if (!new->name || !new->owner)
	{
		free(new->name);
		free(new->owner);
		free(new);
	}

	for (i = 0 ; i < len_name ; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	for (i = 0 ; i < len_owner ; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	new->age = age;

	return (new);
}
