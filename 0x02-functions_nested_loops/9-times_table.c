#include "main.h"

/**
 * times_table - entry point
 *
 * Desc: Prints the 9 times table.
 */

void times_table(void)
{
	int n;
	int multiple;
	int product;

	for (n = 0; n <= 9; n++)
	{
		for (multiple = 0; multiple <= 9; multiple++)
		{
			product = n * multiple;

			if (multiple == 0)
				_putchar(product + '0');

			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
