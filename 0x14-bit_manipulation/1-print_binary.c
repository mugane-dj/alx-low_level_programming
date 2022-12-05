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
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');

	n = n >> 1;

	while (n > 0)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		n = n >> 1;
	}
}
