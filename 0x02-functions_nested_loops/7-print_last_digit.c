#include "main.h"

/**
 * print_last_digit - entry point
 * @n: integer with last digit
 *
 * Desc: Prints the last digit of a number
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	else if (n > 0)
		n *= 1;

	_putchar('0' + (n % 10));

	return (n % 10);
}
