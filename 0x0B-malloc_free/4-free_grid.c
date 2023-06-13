#include "main.h"

/**
 * free_grid - frees a 2 dimensional arry
 * @grid: pointer to 2D array.
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
