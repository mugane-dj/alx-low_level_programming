#include "main.h"

/**
* *_strcat - concatenates the string pointed by @src
* to the string pointed to by @dest.
*
* @dest: pointer to first string.
* @src: pointer to second string.
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int index_1, index_2;

	/**
	* loop over the dest string to determine
	* the length of the string
	*/

	for (index_1 = 0; dest[index_1] != '\0'; index_1++)
		;
	/**
	* copy characters from src string to the position in
	* the dest string using the length of dest + 1 as the
	* reference index
	*/

	for (index_2 = 0; src[index_2] != '\0'; index_2++)
	{
		dest[index_1] = src[index_2];
		index_1++;
	}

	return (dest);
}
