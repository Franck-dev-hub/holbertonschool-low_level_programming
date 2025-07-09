#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: the old size of ptr
 * @new_size: the new size of ptr
 *
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *output;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	output = malloc(new_size);
	if (output == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		output[i] = ((char *)ptr)[i];

	free(ptr);
	return (output);
}
