#include "main.h"
#include <stdio.h>

/**
* print_diagsums- prints the sum of two diagonals
* of a square matrix.
*
* @a: pointer to square matrix.
* @size: size of square matrix.
* Return: void.
*/

void print_diagsums(int *a, int size)
{
	int x, y, z;
	int median, sum;

	if (size != 0)
	{
		x = a[size - 1];
		z = a[0];
		median = (size + 1) / 2;

		if (size % 2 == 0)
		{
			y = a[median];
		}
		else
		{
			y = a[(size / 2) + (size / 2 + 1)];
		}
	}

	sum = x + y + z;

	printf("%d\n", sum);
}
