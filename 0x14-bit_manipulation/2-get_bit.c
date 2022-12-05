#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit ofint n based on an index.
 *
 * @n: number to get bit.
 * @index: index of the bit.
 * Return: value of bit on success, -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;

	if (n & 1)
		return (1);
	else
		return (0);

	return (-1);
}
