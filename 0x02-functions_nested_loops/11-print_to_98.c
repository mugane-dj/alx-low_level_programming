#include "main.h"

/**
 * print_to_98 - entry point
 * @n: integer to start off with
 *
 * Desc: prints all natural numbers between n and 98.
 */

void print_to_98(int n)
{
	if (n >= 0)
	{
		for (n = 0; n <= 98; n++)
		{
			_putchar(n);

			if (n == 98)
				continue;

			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}
