#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new neginning of a linked list
 * @head: double po the list_t list
 * @str: new string in the node
 * Return: the address new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *okusha;
	unsigned int ntambo = 0;

	while (str[ntambo])
		ntambo++;

	okusha = malloc(sizeof(list_t));
	if (!okusha)
		return (NULL);

	okusha->str = strdup(str);
	okusha->ntambo = ntambo;
	okusha->next = (*head);
	(*head) = okusha;

	return (*head);
}
