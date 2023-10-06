#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory bsing malloc and free
 * @ptr: pointer to the memoryouly allocated by malloc
 * @old_size: size of thcated memory for ptr
 * @new_size: new sif the new memory block
 *
 * Return: pointer t newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int di;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (di = 0; di < new_size; di++)
			ptr1[di] = old_ptr[di];
	}

	if (new_size > old_size)
	{
		for (di = 0; di < old_size; di++)
			ptr1[di] = old_ptr[di];
	}

	free(ptr);
	return (ptr1);
}
