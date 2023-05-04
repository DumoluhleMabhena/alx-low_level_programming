#include "lists.h"

/**
 * find_listint_loop - fi the loop in a linked list
 * @head: linked list to sea
 * Return: address of the node e loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fudu = head;
	listint_t *mvundla = head;

	if (!head)
		return (NULL);

	while (fudu && mvundla && mvundla->next)
	{
		mvundla = mvundla->next->next;
		fudu = fudu->next;
		if (mvundla == fudu)
		{
			fudu = head;
			while (fudu != mvundla)
			{
				fudu = fudu->next;
				mvundla = mvundla->next;
			}
			return (mvundla);
		}
	}

	return (NULL);
}
