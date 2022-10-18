#include "main.h"

/**
 * _isalpha - entry point
 * @c: character to be checked
 *
 * Desc: Checks if character is an alphabetic character
 * Return: 1 if c is a letter,lowercase or uppercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
