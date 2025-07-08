#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new pet
 * @name: of dog
 * @age: of dog
 * @owner: of dog
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, len;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	length = 0;

	while (name[len] != '\0')
		len++;

	new->name = malloc(sizeof(char) * (len + 1));

	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0 ; i < len ; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	new->age = age;

	len = 0;

	while (owner[len] != '\0')
		len++;

	new->owner = malloc(sizeof(char) * (len + 1));

	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0 ; i < len ; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	return (new);
}
