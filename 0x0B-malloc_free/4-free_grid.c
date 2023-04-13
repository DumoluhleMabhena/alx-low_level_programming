#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function
 * @grid: pointer
 * @height: int var
 * Return: 0
 *
 */
void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}

	free(grid);
}
