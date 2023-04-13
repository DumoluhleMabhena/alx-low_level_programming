#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function
 * @ptr: pointer variable
 * @old_size: int variable
 * @new_size: int variable
 * Return: pointer variable
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *hldr1;
	char *old_hldr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	hldr1 = malloc(new_size);
	if (!hldr1)
		return (NULL);

	old_hldr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			hldr1[x] = old_hldr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			hldr1[x] = old_hldr[x];
	}

	free(ptr);
	return (hldr1);
}
