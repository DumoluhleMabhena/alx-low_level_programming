#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node
 * @head: pointer to the first node
 * @n: data to insert
 * Return: pointer to the new link
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *entsha;

	entsha = malloc(sizeof(listint_t));
	if (!entsha)
		return (NULL);

	entsha->n = n;
	entsha->next = *head;
	*head = entsha;

	return (entsha);
}

