#include <stdlib.h>
#include "main.h"

/**
 * *array_range - cres an array of integers
 * @min: minim range of values stored
 * @max: maximum e of values stored and number of elements
 *
 * Return: pointerthe new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int ix, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (ix = 0; min <= max; ix++)
		ptr[ix] = min++;

	return (ptr);
}
