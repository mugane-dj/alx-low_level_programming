#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees listint_t list.
 * @head: pointer to listint_t list.
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
