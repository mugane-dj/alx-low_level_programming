#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the nth node of a linked list.
 *
 * @head: pointer to the linked list.
 * @index: index of the nth node.
 * Return: the address of the nth node,
 *	   NULL on failure.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth_node = head;
	unsigned int len;

	for (len = 0; len < index; len++)
	{
		if (nth_node == NULL)
			return (NULL);
		nth_node = nth_node->next;
	}

	return (nth_node);
}
