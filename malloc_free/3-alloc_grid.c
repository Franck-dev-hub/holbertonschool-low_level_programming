#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
