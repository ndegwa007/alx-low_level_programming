#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid created by alloc_grid
 * @grid: a pointer to pointer
 * @height: height of the grid
 **/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i += 1)
		free(grid[i]);
	free(grid);
}
