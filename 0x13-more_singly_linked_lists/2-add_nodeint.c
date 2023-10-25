#include "lists.h"

/**
 * add_nodeint - addw node at the beginning of a linked list
 * @head: pointer to the fnode in the list
 * @n: data to insert in that n
 *
 * Return: pointer to the new node, or fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
