#include "main.h"

/**
*print_diagonal - draws / character in the terminal
*@n: number of times the character / should be printed
*/

void print_diagonal(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
