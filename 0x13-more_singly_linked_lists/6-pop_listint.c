#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - delete node that holds the head.
 *
 * @head: pointer to pointer of list listint_t.
 * Return: Head node's n member, else 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (head == NULL)
		return (0);

	/*set node to old head*/
	node = *head;

	/*set data as member n in linked list*/
	data = (*head)->n;

	/*mark next node as new head*/
	*head = (*head)->next;

	free(node);

	return (data);
}
