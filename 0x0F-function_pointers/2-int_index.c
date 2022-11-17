#include <stdlib.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer.
*
* @array: pointer to int array.
* @size: number of elements in array.
* @cmp: function pointer for comparison.
* Return: index of element.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int value;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (value = 0; value < size; value++)
	{
		if (cmp(array[value]) != 0)
			return (value);
	}

	return (-1);
}
