#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a node
 * @head: pointer to the first
 * @n: data to insert
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *entsha;
	listint_t *mana = *head;

	entsha = malloc(sizeof(listint_t));
	if (!entsha)
		return (NULL);

	entsha->n = n;
	entsha->next = NULL;

	if (*head == NULL)
	{
		*head = entsha;
		return (entsha);
	}

	while (entsha->next)
		mana = mana->next;

	mana->next = entsha;

	return (entsha);
}
