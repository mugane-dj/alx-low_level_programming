#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list_t list.
 * @head: pointer to list_t list.
 * Return: Void.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
