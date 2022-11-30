#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: listint_t list.
 * @n: int variable.
 * Return: Address to the new node, else NULL on failure.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (head == NULL)
		node->next = NULL;
	else
		node->next = *head;

	*head = node;

	return (node);
}
