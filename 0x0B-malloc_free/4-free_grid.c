#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional grid created by alloc_grid
 *
 * @grid: input gird
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int count;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}

	free(grid);
}
