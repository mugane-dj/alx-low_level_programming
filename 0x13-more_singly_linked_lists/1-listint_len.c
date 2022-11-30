#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - check the number of elements in a linked list.
 * @h: linked list of type listint_t.
 * Return: number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;

	return (len);
}
