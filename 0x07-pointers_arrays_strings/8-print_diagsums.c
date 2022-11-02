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
	int i = 0;
	int main = 0;
	int leading = 0;

	if (size > 0)
	{
		/*sum for main diagonal*/
		while (i < size)
		{
			main = main + a[i];
			a = a + size;
			i++;
		}

		/*sum for leading diagonal*/
		a = a - size
		i = 0;
		while (i < size)
		{
			leading = leading + a[i];
			a = a - size;
			i++;
		}
	}

	printf("%d, %d\n", main, leading);
}
