#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by the function alloc_grid
 * @grid: grid to free
 * @height: grid height
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL && height <= 0)
		return;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
