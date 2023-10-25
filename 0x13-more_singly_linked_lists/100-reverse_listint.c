#include "lists.h"

/**
 * reverse_listint - reverses a linkeist
 * @head: pointer to the first node ist
 *
 * Return: pointer to the first node in the 
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;

return (*head);
}
