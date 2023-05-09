#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - searches for an element within an array using linear search.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 * Return: index of element if it exists within the array
 *	   -1 if array is NULL or element does not exist.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size < 1)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}
	return (-1);
}
