#include "main.h"

/**
* _stpbrk - searches a string for any of a set of bytes.
*
* @s: pointer to string.
* @accept: character bytes to be matched.
* Return: a pointer to the byte in s that matches 
* one of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{

	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i + 1])
			return (s + i);
	}

	return ('\0');
}