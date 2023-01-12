#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a specified position.
 *
 * @h: A pointer to a pointer to a doubly linked list.
 * @idx: specified index to insert node.
 * @n: data variable.
 * Return: address of the new node, NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *curr = *h;
	unsigned int pos;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free_dlistint(new_node);
		return (NULL);
	}

	new_node->n = n;
	pos = 0;

	while (pos < idx && curr != NULL)
	{
		curr = curr->next;
		pos++;
	}

	if (curr != NULL)
	{
		new_node->next = curr;
		new_node->prev = curr->prev;

		if (curr->prev != NULL)
		{
			curr->prev->next = new_node;
		}
		curr->prev = new_node;

		if (idx == 0)
			*h = new_node;
	}

	return (new_node);
}
