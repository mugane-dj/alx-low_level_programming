#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: list_t list.
 * @str: str variable.
 * Return: Address to the new element, else NULL on failure.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	int len;
	char *new_str;

	for (len = 0; str[len]; len++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}
