#include "main.h"

/**
* _strstr -locates a substring.
*
* @haystack: pointer to string.
* @needle: substring to be located.
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{

	int i;

	for (; *haystack; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			if (*needle == 0)
				return (haystack);
			
			if (needle[i + 1] == '\0')
				return (haystack);
		}
	}

	return ('\0');
}
