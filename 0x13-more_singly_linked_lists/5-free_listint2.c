#include "lists.h"

/**
 * free_listint2 - frees a l
 * @head: pointer to the lis
 */
void free_listint2(listint_t **head)
{
	listint_t *ima;

	if (head == NULL)
		return;

	while (*head)
	{
		ima = (*head)->next;
		free(*head);
		*head = ima;
	}

	*head = NULL;
}
