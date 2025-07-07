#include "main.h"

/**
 * array_range - array from min to max
 * @min: min value
 * @max: max value
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i, len;
	int *array;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(len * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = min + i;

	return (array);
}
