#include "main.h"
#include <stdlib.h>


/**
* _strlen - prints the length of a string
*
* @s: pointer to the string
* Return: length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);

}

/**
* _strdup - creates an array of chars and duplicates the value
* of a different array in memory.
*
* @str: array of chars with value to duplicate.
* Return: pointer to new char array if len > 0.
*         NULL if str is NULL.
*/

char *_strdup(char *str)
{
	char *ar;
	int i, len;

	len = _strlen(str);

	if (str == NULL)
		return (NULL);

	/*len + 1 since we use indexing for duplication*/
	ar = malloc((len + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		ar[i] = str[i];
	}

	/*Insert terminating null byte*/

	ar[len] = '\0';

	return (ar);
}
