#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - check the number of elements in a doubly linked list.
 * @h: linked list of type dlistint_t.
 * Return: lenght of the doubly linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}
