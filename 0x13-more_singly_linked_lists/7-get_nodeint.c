#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certaiin a linked list
 * @head: first node in the lin list
 * @index: index of the node to re
 *
 * Return: pointer to the node we're l for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int ix = 0;
listint_t *temp = head;

while (temp && ix < index)
{
temp = temp->next;
ix++;
}

return (temp ? temp : NULL);
}
