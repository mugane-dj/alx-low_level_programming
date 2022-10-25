#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers.
*
* @a: array to be looped over.
* @n: number of elements to be printed.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n)
			break;

		printf(",");
		printf(" ");
	}

	printf("\n");
}
