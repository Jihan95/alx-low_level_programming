#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by your alloc_grid function.
 * @grid: the 2 dimentional array
 * @height: number or rows of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
