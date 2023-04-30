#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list that is needed
 * @h: pointer to the list
 * Return: number of elements in h that are requred
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}


	return (x);
}
