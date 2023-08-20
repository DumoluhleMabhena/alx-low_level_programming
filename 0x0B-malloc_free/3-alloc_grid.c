#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to maid
 * @width: width t
 * @height: het input
 * Return: pnter to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **metr;
	int zx, zy;

	if (width <= 0 || height <= 0)
		return (NULL);

	metr = malloc(sizeof(int *) * height);

	if (metr == NULL)
		return (NULL);

	for (zx = 0; zx < height; zx++)
	{
		metr[zx] = malloc(sizeof(int) * width);

		if (metr[zx] == NULL)
		{
			for (; zx >= 0; zx--)
				free(metr[zx]);

			free(metr);
			return (NULL);
		}
	}

	for (zx = 0; zx < height; zx++)
	{
		for (zy = 0; zy < width; zy++)
			metr[zx][zy] = 0;
	}

	return (metr);
}
