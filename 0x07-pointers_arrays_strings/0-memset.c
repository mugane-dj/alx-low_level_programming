#include "main.h"

/**
* _memset - fills memory with constant byte.
*
* @s: pointer to memory area.
* @b: constant byte.
* @n: byte size.
* Return: pointer to s.
*/

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
