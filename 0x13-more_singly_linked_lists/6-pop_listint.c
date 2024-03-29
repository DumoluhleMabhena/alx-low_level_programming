#include "lists.h"

/**
 * pop_listint - deletes the head node of a lit
 * @head: pointer to first element in the linked list
 *
 * Return: the data inside that was deleted,
 * or 0 if the list is e
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
