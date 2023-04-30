#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: pointer to the list_t list that is provided by the usser
 * Return: number of elements in h the linked list
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
 		x++;
		x = x->next;
	}


	return (x);
}
