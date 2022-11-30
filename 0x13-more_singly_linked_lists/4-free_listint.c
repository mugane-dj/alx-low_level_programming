#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees listint_t list.
 * @head: pointer to listint_t list.
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
