#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line.
*
* @s: pointer to character string.
* Return: void.
*/

void _puts_recursion(char *s)
{
	/*Recursion needs to be a tail recursion*/

	if (*s)
	{
		_putchar(*s);

		/*access memeory address of subsequent character*/

		_puts_recursion(&(s[1]));
	}
	else
		_putchar('\n');
}
