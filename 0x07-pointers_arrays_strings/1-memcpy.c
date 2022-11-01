#include "main.h"

/**
* _memcpy - copies memory area.
*
* @src: pointer to memory area.
* @dest: pointer to buffer where memory area is copied to.
* @n: byte size.
* Return: pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
