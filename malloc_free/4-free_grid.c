#include "main.h"

/**
 * free_grid - free alloc_grid array
 * @grid: previous grid
 * @height:
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
