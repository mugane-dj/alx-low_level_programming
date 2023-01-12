#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a specified position.
 *
 * @head: A pointer to a pointer to a doubly linked list.
 * @index: specified index to insert node.
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next_node, *prev_node;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0 && tmp != NULL)
	{
		tmp = tmp->next;
		index--;
	}

	/*Delete head node*/
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	else
	{

		/*Mark previous and next node of the node to be deleted*/
		prev_node = tmp->prev;
		next_node = tmp->next;

		prev_node->next = next_node;

		if (tmp->next != NULL)
			next_node->prev = prev_node;
	}
	free(tmp);
	return (1);
}
