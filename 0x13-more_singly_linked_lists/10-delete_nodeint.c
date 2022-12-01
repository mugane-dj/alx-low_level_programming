#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at specified index.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: specified index for node to be deleted.
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *node;
	unsigned int len;

	if (tmp == NULL)
		return (-1);

	/*Delete head node*/
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	/*Find previous node of the node to be deleted*/
	for (len = 0; tmp != NULL && len < (index - 1); len++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	/**
	 * Node tmp->next is the node to be deleted.
	 * Store pointer to next of node to be deleted (tmp->next)
	 */
	node = tmp->next->next;

	/*free space of node to be deleted*/
	free(tmp->next);

	/*store the next node to position of deleted node*/
	tmp->next = node;

	return (1);
}
