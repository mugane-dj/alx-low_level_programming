#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Desc: Prints the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
