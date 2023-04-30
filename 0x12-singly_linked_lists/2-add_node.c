#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head:pointer to list because that is how we should do it
 * @str: new string added
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *omusha;
	unsigned int ntam = 0;

	while (str[ntam])
	ntam++;

	omusha = malloc(sizeof(list_t));
	if (!omusha)
	return (NULL);

	omusha->str = strdup(str);
	omusha->len = len;
	omusha->next = (*head);
	(*head) = omusha;

	return (*head);
}
