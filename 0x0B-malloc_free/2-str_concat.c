#include "main.h"
#include <stdlib.h>

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
* str_concat - concats two strings and allocates the result
*              to a new array in memory.
*
* @s1: initial string.
* @s2: second string.
* Return: pointer to new char array of concated strings.
*         NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int index_1;
	int index_2 = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1) + _strlen(s2);

	ar = malloc(len * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (index_1 = 0; s1[index_1]; index_1++)
	{
		ar[index_2] = s1[index_1];
		index_2++;
	}

	for (index_1 = 0; s2[index_1]; index_1++)
	{
		ar[index_2] = s2[index_1];
		index_2++;
	}

	return (ar);
}
