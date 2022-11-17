#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes a function on each element.
*
* @array: integer array.
* @size: size of array.
* @action: function pointer.
* Return: void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;

	/**
	 * if min_value of size is > 0, iterate.
	 * increment array to move to next block in memory.
	 */

	for (; size-- > 0; array++)
	{
		/*derefence int array to provide action with param*/

		(*action)(*array);
	}
}
