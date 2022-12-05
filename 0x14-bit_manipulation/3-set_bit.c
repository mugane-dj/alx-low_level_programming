#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets bit at specified index
 *
 * @n: pointer to number to set bit.
 * @index: index of the bit.
 * Return: 1 on success, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = *n | 1 << index;

	return (1);
}
