#include "main.h"

/**
* rev_string - reverses a string
* @s: string to be reversed
* Return: void
*/

void rev_string(char *s)
{
	int i;
	int len;
	int temp;

	i = 0;
	for (len = 0; s[i++]; len++)
		;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
