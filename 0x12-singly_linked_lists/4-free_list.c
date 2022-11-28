#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list_t list.
 * @head: pointer to list_t list.
 * Return: Void.
 */

void free_list(list_t *head)
{
	list_t temp;

	while (temp)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
