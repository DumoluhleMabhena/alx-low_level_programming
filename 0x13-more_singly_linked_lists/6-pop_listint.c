#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * @head: pointer to the first element in the lin
 * Return: the data inside the elements that was deleted,
 * or
 */
int pop_listint(listint_t **head)
{
	listint_t *ima;
	int into;

	if (!head || !*head)
		return (0);

	into = (*head)->n;
	ima = (*head)->next;
	free(*head);
	*head = ima;

	return (into);
}
