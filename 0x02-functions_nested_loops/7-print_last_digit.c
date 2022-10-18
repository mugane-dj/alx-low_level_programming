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
	_putchar('0' + (n % 10));
	return (n % 10);
}
