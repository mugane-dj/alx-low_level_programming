#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"


/**
 * print_array - prints array with specified format.
 *
 * @array: array to be printed.
 * @left: element at the start of the array.
 * @right: element at the end of the array.
 * Return: void.
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf(" %d", array[i]);

		if (i != right)
			printf(",");
	}
	printf("\n");
}


/**
 * binary_search_recursive - binary search using recursive method.
 *
 * @array: a pointer to the first element of the array to search in.
 * @left: element at the start of the array.
 * @right: element at the end of the array.
 * @value: the value to search for
 * Return: index of element if it exists within the array
 *	   -1 if array is NULL or element does not exist.
 */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);
	else if (value < array[mid]) /*Search left sub-array*/
	{
		print_array(array, left, right);
		return (binary_search_recursive(array, left, mid - 1, value));
	}
	else
	{
		print_array(array, left, right);
		return (binary_search_recursive(array, mid + 1, right, value));
	}
}
/**
 * binary_search - searches for an element within an array using linear search.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 * Return: index of element if it exists within the array
 *	   -1 if array is NULL or element does not exist.
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL ||  size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
