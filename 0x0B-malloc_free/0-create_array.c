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
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
