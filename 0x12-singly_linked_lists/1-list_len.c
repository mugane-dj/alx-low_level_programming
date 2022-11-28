#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list.
 * @h: variable of type struct list_t.
 * Return: number of elements within the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h; len++)
	{
		h = h->next;
	}

	return (len);
}
