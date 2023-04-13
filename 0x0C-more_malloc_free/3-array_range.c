#include <stdlib.h>
#include "main.h"
/**
 * array_range - function
 * @min: int
 * @max: int
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *hldr;
	int x, asize;

	if (min > max)
		return (NULL);

	asize = max - min + 1;

	hldr = malloc(sizeof(int) * asize);

	if (hldr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		hldr[x] = min++;

	return (hldr);
}
