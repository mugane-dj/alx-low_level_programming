#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: list_t list.
 * @str: str variable.
 * Return: Address to the new element, else NULL on failure.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;
	char *new_str;

	for (len = 0; str[len]; len++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	free(new_node);

	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	free(new_str);

	new_node->str = new_str;
	new_node->len = len;

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
