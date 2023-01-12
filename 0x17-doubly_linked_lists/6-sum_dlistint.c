#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums all data in the linked list.
 *
 * @head: pointer to linked list.
 * Return: sum, 0 if linked  list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
