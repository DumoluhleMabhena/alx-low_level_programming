#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees a list
 * @head: list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *mana;

	while (head)
	{
		mana = head->next;
		free(head);
		head = mana;
	}
}
