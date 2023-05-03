#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: linked list
 * Return: all nodes a list
 */
size_t listint_len(const listint_t *h)
{
	size_t into = 0;

	while (h)
	{
		into++;
		h = h->next;
	}

	return (into);
}
