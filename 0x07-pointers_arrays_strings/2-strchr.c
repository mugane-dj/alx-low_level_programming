#include "main.h"

/**
* _strchr - locates a character in a string.
*
* @s: pointer to string.
* @c: character being located.
* Return: pointer to first occurrence of char c
*         if c exists in string and NULL if it
*         doesn't.
*/

char *_strchr(char *s, char c)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}