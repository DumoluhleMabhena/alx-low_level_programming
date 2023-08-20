#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - fred array
 * @grid: 2d d
 * @height: heighension of grid
 * Description: frees grid
 * Return: nothing upon success.
 *
 */
void free_grid(int **grid, int height)
{
	int xi;

	for (xi = 0; xi < height; xi++)
	{
		free(grid[xi]);
	}
	free(grid);
}
