#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of the array
 * @c: character
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);

	array = malloc(size);

	if (array == 0)
	{
		free(array);
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}
