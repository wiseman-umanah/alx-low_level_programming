#include "main.h"

/**
* free_grid - frees the memory allocated to a grid
*
* @grid: grid pointer to free memory from
* @height: height of grid
*
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
