#include "main.h"

/**
* *_strncpy - copies the string pointed by @src, including terminating null
* byte '\0' to the string pointed by @dest.
*
* @dest: pointer to initial string.
* @src: pointer to string being copied.
* @n: number of bytes.
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int index, len;

	for (index = 0; src[index]; index++)
	{
		len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = len; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
