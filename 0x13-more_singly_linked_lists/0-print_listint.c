#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints each element in a linked list.
 * @h: linked list of type listint_t.
 * Return: number of nodes of the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	for (node = 0; h; node++)
	{
		if (h == NULL)
			printf("0");
		else
			printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}
