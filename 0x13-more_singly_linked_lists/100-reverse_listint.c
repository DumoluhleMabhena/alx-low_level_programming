#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first node in t
 * Return: pointerhe first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *izol = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = izol;
		izol = *head;
		*head = next;
	}

	*head = izol;

	return (*head);
}
