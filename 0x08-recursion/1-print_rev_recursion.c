#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse.
*
* @s: pointer to character string.
* Return: void.
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		/*access memeory address of subsequent character*/
		_print_rev_recursion(&(s[1]));

		_putchar(*s);
	}
}
