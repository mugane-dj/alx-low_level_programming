#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers.
* 
* @min: minimum range.
* @max: maximum range.
* Return - pointer to integer array.
*/

int *array_range(int min, int max)
{
	int *arr, size, index;

	if (min > max)
		return (NULL);

	size = (max - min + 1);

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
		arr[index] = min++;

	return (arr);
}
