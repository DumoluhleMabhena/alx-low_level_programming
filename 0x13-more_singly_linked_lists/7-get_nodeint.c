#include "lists.h"

/**
 * get_nodeint_at_index - returns the nodain index in a linked list
 * @head: first node in thist
 * @index: index of the node
 * Return: pointer to for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *ima = head;

	while (ima && x < index)
	{
		ima = ima->next;
		x++;
	}

	return (ima ? ima : NULL);
}
