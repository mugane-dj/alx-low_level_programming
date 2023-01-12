#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints each element in a linked list.
 * @h: linked list of type listint_t.
 * Return: number of nodes of the linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
