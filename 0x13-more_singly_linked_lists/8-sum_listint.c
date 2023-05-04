#include "lists.h"

/**
 * sum_listint - csum of all the data in a listint_t list
 * @head: first node in the link
 * Return: reng sum
 */
int sum_listint(listint_t *head)
{
	int tata = 0;
	listint_t *into = head;

	while (into)
	{
		tata += into->n;
		into = into->next;
	}

	return (tata);
}
