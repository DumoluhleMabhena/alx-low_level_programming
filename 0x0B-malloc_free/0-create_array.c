#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked -ocates memorying malloc
 * @b: number of bytes to ale
 *
 * Return: a pointer tallocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *poter;

	poter = malloc(b);

	if (poter == NULL)
		exit(98);

	return (poter);
}
