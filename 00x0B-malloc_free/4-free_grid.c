#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *	(previously allocated by alloc_grid)
 * @grid: the grid
 * @height: the height
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int **row = grid;

	while (height--)
	{
		free(*row);
		row++;
	}
	free(grid);
}
