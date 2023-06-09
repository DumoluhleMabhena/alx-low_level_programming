#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to the head of the list thst we need
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    if (!h)
        return 0;

    printf("[%d] %s\n", h->len, (h->str ? h->str : "(nil)"));

    return 1 + print_list(h->next);
}
