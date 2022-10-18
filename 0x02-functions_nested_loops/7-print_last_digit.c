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
	int digit = n % 10;

	if (digit < 0)
		digit *= -1;

	_putchar(digit + '0');

	return (digit);
}
