#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 *
 * @head: A pointer to the doubly linked list.
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
