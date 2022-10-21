#include "main.h"

/**
*print_triangle - draws a triangle
*@size: size of triangle
*/

void print_triangle(int size)
{
	int count, tab;

	if (size > 0)
	{
		for (count = 1; count <= size; count++)
		{
			for (tab = size - count; tab > 0; tab--)
			{
				_putchar(' ');
			}

			for (tab = 0; tab < count; tab++)
			{
				_putchar('#');
			}

			if (count == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
