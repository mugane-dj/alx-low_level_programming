#include "main.h"

/**
* _strlen - prints the length of a string
*
* @s: pointer to the string
* Return: length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);

}

/**
* puts_half - prints the second half of a string followed by a new line.
*
* @str: pointer to the string to be printed.
* Return: void.
*/

void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);

	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = len / 2;

	for (; i < len ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
