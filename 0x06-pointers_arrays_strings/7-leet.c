#include "main.h"

/**
* leet - converts string to leet-speak.
*
* @s: string to be converted.
* Return: string.
*/

char *leet(char *s)
{
	int i = 0;
	int x = 0;

	int arr_1[11] = {'o', 'O', 'l', 'L', 'e', 'E', 'a', 'A', 't', 'T'};
	int arr_2[11] = {'0', '0', '1', '1', '3', '3', '4', '4', '7', '7'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; arr_1[x] != '\0'; x++)
		{
			if (s[i] == arr_1[x])
			{
				s[i] = arr_2[x];
			}
		}
	}

	return (s);
}
