#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function
 * @width: var
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **de;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	de = malloc(sizeof(int *) * height);

	if (de == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		de[i] = malloc(sizeof(int) * width);

		if (de[i] == NULL)
		{
			for (; i >= 0; i--)

				free(de[i]);

			free(de);

			return (NULL);
		}
	}


	for (i = 0; i < height; i++)

	{
		for (j = 0; j < width; j++)

			de[i][j] = 0;

	}

	return (de);
}
