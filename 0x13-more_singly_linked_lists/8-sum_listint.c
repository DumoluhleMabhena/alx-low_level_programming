#include "lists.h"

/**
 * sum_listint - calculates the sum of all the daistint_t list
 * @head: first node in thked list
 *
 * Return: resultng sum
 */
int sum_listint(listint_t *head)
{
int xsum = 0;
listint_t *temp = head;

while (temp)
{
xsum += temp->n;
temp = temp->next;
}

return (xsum);
}
