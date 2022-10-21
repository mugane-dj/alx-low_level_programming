#include "main.h"

/**
*print_square - prints a square
*@size: SIZE OF SQUARE
*/

void print_square(int size)
{
	int count, dup;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (dup = 0; dup < size; dup++)
			{
				_putchar('#');
			}
			if (count == size -1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
