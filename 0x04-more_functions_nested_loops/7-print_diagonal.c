#include "main.h"

/**
*print_diagonal - draws / character in the terminal
*@n: number of times the character / should be printed
*/

void print_diagonal(int n)
{
	int count, tab;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (tab = 0; tab < count; tab++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (count == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
