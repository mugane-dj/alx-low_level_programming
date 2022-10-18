#include "main.h"
#include <stdlib.h>

/**
 * _abs - entry point
 * @n: integer to be computed
 *
 * Desc: Ouput's the absolute value of an integer
 * Return: Always 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
