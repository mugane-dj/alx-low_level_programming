#include "main.h"

/**
 * times_table - entry point
 *
 * Desc: Prints the 9 times table.
 */

void times_table(void)
{
	int n = 0;
	int multiple;
	int product;

	while (n <= 9)
	{
		multiple = 0;
		while (multiple <= 9)
		{
			product = (n * multiple);

			_putchar(product + '0');
			multiple++;

			if (product <= 9)
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
		n++;
		_putchar('\n');
	}

}
