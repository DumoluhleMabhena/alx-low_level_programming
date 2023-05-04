#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a nodked list at a certain index
 * @head: pointer to element in the list
 * @index: index of the node t
 * Return: 1 or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ima = *head;
	listint_t *nou = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ima);
		return (1);
	}

	while (x < index - 1)
	{
		if (!ima || !(ima->next))
			return (-1);
		ima = ima->next;
		x++;
	}


	nou = ima->next;
	ima->next = nou->next;
	free(nou);

	return (1);
}
