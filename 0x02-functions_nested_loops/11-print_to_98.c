#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: integer to start off with
 *
 * Desc: prints all natural numbers between n and 98.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n++);
		}
		print("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n--);
		}
		print("%d\n", n);
	}

}