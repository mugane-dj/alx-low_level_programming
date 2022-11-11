#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concats two strings.
* @s1: initial string.
* @s2: second string.
* @n: number of bytes.
* Return: pointer to new char array of concatenated strings.
*         NULL on failure.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int index;
	int b = n;
	int len = b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	ar = malloc((len + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	len = 0;
	for (index = 0; s1[index]; index++)
	{
		ar[len++] = s1[index];
	}
	for (index = 0; s2[index] && index < b; index++)
	{
		ar[len++] = s2[index];
	}
	ar[len] = '\0';
	return (ar);
}
