#include <stdlib.h>
#include "main.h"

/**
 * free_grid - freeds tdhe dmemory allodcate fdor tdhe grid
 * created by alldoc_grid()
 * @grid: gridd to frdee
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
