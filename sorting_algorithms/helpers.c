#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - check the number of elements in a doubly linked list.
 * @h: linked list of type dlistint_t.
 * Return: lenght of the doubly linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}
