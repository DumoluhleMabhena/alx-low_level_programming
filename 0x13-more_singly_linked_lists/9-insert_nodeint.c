#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * atn position
 * @head: poer to the first node in the list
 * @idx: index where w node is added
 * @n: data to  in the new node
 *
 * Return: poin the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ent;
	listint_t *ima = *head;

	ent = malloc(sizeof(listint_t));
	if (!ent || !head)
		return (NULL);

	ent->n = n;
	ent->next = NULL;

	if (idx == 0)
	{
		ent->next = *head;
		*head = ent;
		return (ent);
	}

	for (x = 0; ima && x < idx; x++)
	{
		if (x == idx - 1)
		{
			ent->next = ima->next;
			ima->next = ent;
			return (ima);
		}
		else
			ima = ima->next;
	}

	return (NULL);
}
