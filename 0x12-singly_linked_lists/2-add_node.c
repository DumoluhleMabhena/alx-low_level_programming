#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer to the pointer to the first node
 * @str: string to be duplicated and added as the content of the new node..
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	if (head == NULL || str == NULL)
		return (NULL);

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}

	n->next = *head;
	*head = n;

	return (n);
}
