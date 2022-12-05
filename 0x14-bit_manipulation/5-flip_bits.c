#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - gets the number of bits to flip to get
 *		from one number to another.
 *
 * @n: the number.
 * @m: the number to flip n to.
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
