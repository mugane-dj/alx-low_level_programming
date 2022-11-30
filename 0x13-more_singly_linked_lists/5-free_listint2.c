#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees listint_t list.
 * @head: pointer to listint_t list.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}

	head = NULL;
}
