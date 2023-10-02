#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of sind assign char c
 * @size: siof array
 * @c: char togn
 * Description: creay of size size and assign char c
 * Return: pointer to arraif fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *strin;
	unsigned int xi;

	strin = malloc(sizeof(char) * size);
	if (size == 0 || strin == NULL)
		return (NULL);

	for (xi = 0; xi < size; xi++)
		strin[xi] = c;
	return (strin);
}
