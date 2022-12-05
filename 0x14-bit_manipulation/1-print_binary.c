#include "main.h"
#include <stdlib.h>

/**
 * print_binary - print the binary representation of a number.
 *
 * @n: number.
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	while (n > 0)
	{
		_putchar((n & 1) + '0');
		n = n >> 1;
	}
}
