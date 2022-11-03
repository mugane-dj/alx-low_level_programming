#include "main.h"

/**
* _sqrt_recursion - returns the square root of natural number.
*
* @n: number.
* Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_sqrt_recursion(n));
}
