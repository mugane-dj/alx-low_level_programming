#include "main.h"

/**
 * times_table - entry point
 *
 * Desc: Prints the 9 times table.
 */

void times_table(void)
{
	int n = 0, mult, prod;

	while (n <= 9)
	{
		_putchar('0');
		n++;
		mult = 1;
		while (mult <= 9)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchcar((prod % 10) + '0');
		}

		_putchar('\n');
	}
}
