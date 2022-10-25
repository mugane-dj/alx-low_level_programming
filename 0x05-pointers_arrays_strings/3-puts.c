#include "main.h"

/**
* _puts - prints a string, followed by a new line to stdout
*
* @str: string to be printed
* Return: void
*/

void _puts(char *str)
{
	int len;
	int i;

	len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
