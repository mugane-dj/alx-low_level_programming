#include "main.h"

/**
 * print_sign - entry point
 * @n: integer to be checked
 *
 * Desc: Checks if an integer is positive or negative
 * Return: 1 if n is greater than zero, 0 is n is zero, and -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
