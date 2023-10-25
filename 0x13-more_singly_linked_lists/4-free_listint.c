#include "lists.h"

/**
 * free_listint - frees ad list
 * @head: listint_t list to be
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
