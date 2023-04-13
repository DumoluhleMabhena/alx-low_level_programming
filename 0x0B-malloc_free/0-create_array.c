#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of size and assign char c
 * @size: size of ary
 * @c: char var
 * Return: pointer to ary,0 if fail
 */
char *create_array(unsigned int size, char c)
{
	char *br;
	unsigned int d;

	br = malloc(sizeof(char) * size);

	if (size == 0 || br == NULL)

		return (NULL);

	for (d = 0; d < size; d++)

		br[d] = c;

	return (br);
}
