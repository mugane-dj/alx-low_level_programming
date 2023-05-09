#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"


/**
 * print_array - prints array with specified format.
 *
 * @array: array to be printed.
 * @size: size of the array to print.
 * Return: void.
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);

		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
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
	int right_sub;
	size_t mid;


	if (size == 0)
		return (-1);
	print_array(array, size);
	mid = size / 2;
	if (array[mid] == value)
		return (mid);
	else if (value < array[mid]) /*Search the left sub-array*/
		return (binary_search(array, mid, value));

	/*Search the right sub-array*/
	right_sub = binary_search(array + mid + 1, size - mid - 1, value);
	if (right_sub == -1)
		return (-1);
	else
		return (right_sub + mid + 1);
}
