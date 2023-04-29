#include "lists.h"
#include "stdio.h"
/**
 * print_list - Prints all the elements of a singly-linked list in the C-lang.
 * @h: A pointer to the head of the linked list in the C-lang.
 * Return: The number of nodes in the linked list in the C-lang.
 */
size_t print_list(const list_t *h)
{
	size_t cnt_index = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		if (curr->str != NULL)
			printf("[%d] %s\n", curr->len, curr->str);
		else
			printf("[0] (nil)\n");

		cnt_index++;
		curr = curr->next;
	}

	return (cnt_index);
}
