#include "main.h"

/**
* reverse_array - reverse an array of integers
*
* @a: array to be reversed.
* @n: number of elements in @a.
* Return: void.
*/

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}

}
