#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - sums all its parameters.
*
* @n: number of parameters.
* Return: sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i, sum;

	va_start(params, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum = sum + va_arg(params, int);

	va_end(params);

	return (sum);
}
