#include "main.h"
#include <stdlib.h>


/**
 * binary_to_uint - converts binary input string to unsigned int.
 *
 * @b: binary input string.
 * Return: unsigned int representation of binary string.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, index;
	unsigned int uint = 0;

	/*check if char string in NULL*/
	if (b == NULL)
		return (0);

	/*Find the len of char string*/
	for (len = 0; b[len]; len++)
		;

	/**
	 * Check if binary string is empty or too long
	 * to be represented as an unsigned int.
	 */
	if (len == 0)
		return (0);

	/*Iterate over char string*/
	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		uint = (uint << 1) | (b[index] - '0');
	}

	return (uint);
}
