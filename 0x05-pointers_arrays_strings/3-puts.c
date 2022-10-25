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
