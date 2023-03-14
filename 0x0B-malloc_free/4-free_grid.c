#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free array previously created
 * @grid: previous grid
 * @height: height of array
 *
 * Return: empty array
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
