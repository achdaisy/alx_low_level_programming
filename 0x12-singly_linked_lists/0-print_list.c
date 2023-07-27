#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements in a list named list_t
 * @h: the linked list
 *
 * Return: no of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	no_of_nodes++;
	}
	return (no_of_nodes);
}
