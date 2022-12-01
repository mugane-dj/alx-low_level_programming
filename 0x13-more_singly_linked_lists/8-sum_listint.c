#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all data(n) in linked list.
 *
 * @head: pointer to linked list
 * Return: sum of n members in linked list.
 */

int sum_listint(listint_t *head)
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
