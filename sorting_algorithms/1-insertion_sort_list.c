#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * swap_nodes - swaps nodes of a doubly linked list.
 *
 * @list: Double pointer to doubly linked list.
 * @curr_node: current node to be swapped.
 * @prev_node: previous node pointed to by curr_node.
 *
 * Return: void.
 */

void swap_nodes(listint_t **list, listint_t *curr_node, listint_t *prev_node)
{
	if (prev_node->prev != NULL)
	{
		curr_node->prev->next = curr_node->next;
		if (curr_node->next)
			curr_node->next->prev = curr_node->prev;
		prev_node->prev->next = curr_node;
		curr->prev = prev_node->prev;
		prev_node->prev = curr_node;
		curr_node->next = prev_node;
	}
	else
	{
		prev_node->prev = curr_node;
		curr_node->prev->next = curr_node->next;
		if (curr_node->next)
			curr_node->next->prev = curr_node->prev;
		curr_node->next = prev_node;
		curr_node->prev = NULL;
		/*set head to curr_node*/
		*list = curr_node;
	}
}

/**
 * insertion_sort_list - sorts a doubly linked list
 *			 in ascending order using insertion sort algorithm.
 *
 * @list: Double pointer to doubly linked list.
 *
 * Return: void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr_node = (*list)->next;
	listint_t *prev_node = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (curr_node != NULL)
	{
		if (curr_node->n < curr_node->prev->n)
		{
			prev_node = curr_node->prev;

			while (prev_node && (curr_node->n < prev_node->n))
			{
				swap_nodes(list, curr_node, prev_node);
				print_list(*list);
				prev_node = curr_node->prev;
			}
		}
		curr_node = curr_node->next;
	}
}
