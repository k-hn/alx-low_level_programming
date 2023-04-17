#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - generates a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: generated array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int width_count, height_count, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (height_count = 0; height_count < height; height_count++)
	{
		/* allocate memory for row */
		grid[height_count] = malloc(sizeof(int) * width);
		if (grid[height_count] == NULL)
		{
			free(grid);
			for (i = 0; i <= height_count; i++)
				free(grid[i]);
			return (NULL);
		}
		for (width_count = 0; width_count < width; width_count++)
		{
			grid[height_count][width_count] = 0;
		}
	}
	return (grid);
}
