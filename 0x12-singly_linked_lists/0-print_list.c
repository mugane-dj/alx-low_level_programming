#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints each element in a linked list.
 * @h: variable of type struct list_t.
 * Return: number of nodes of the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*point to the next node*/

		h = h->next;
	}

	return (nodes);
}
