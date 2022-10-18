#include "main.h"

/**
 * _islower - entry point
 * @c: charcater to check
 *
 * Desc: Checks if a character is lowercase
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
