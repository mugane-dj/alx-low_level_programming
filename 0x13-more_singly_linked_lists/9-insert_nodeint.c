#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at specified index.
 *
 * @head: pointer to a pointer to linked list of type listint_t.
 * @idx: specified index;
 * @n: member n;
 * Return: address to new node, else NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *node;
	unsigned int len;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = tmp;
		*head = node;
		return (node);
	}

	for (len = 0; len < (idx - 1); len++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
