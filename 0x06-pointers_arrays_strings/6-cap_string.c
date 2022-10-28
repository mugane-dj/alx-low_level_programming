#include "main.h"

/**
* cap_string - capitalizes all words of a string.
*
* @s: string with words to capitalize.
* Return: string.
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		for (; !(s[i] >= 'a' && s[i] <= 'z'); i++)
			;
		if (s[i - 1] == ',' ||
				s[i - 1] == ';' ||
				s[i - 1] == '.' ||
				s[i - 1] == '!' ||
				s[i - 1] == '?' ||
				s[i - 1] == '"' ||
				s[i - 1] == '(' ||
				s[i - 1] == ')' ||
				s[i - 1] == '{' ||
				s[i - 1] == '}' ||
				s[i - 1] == ' ' ||
				s[i - 1] == '\t' ||
				s[i - 1] == '\n' ||
				i == 0)
			s[i] = s[i] - 32;
		i++;
	}

	return (s);
}
