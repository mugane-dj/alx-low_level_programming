#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: pointer to the first int parameter
* @b: poiter to the second int parameter
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
