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

	for (i = 0; s[i]; i++)
		;
	return (i);

}

/**
* *_strcpy - copies the string pointed by @src, including terminating null
* byte '\0' to the buffer pointed by @dest.
*
* @dest: buffer to copy string to.
* @src: pointer to string being copied.
* Return: buffer pointed by @dest
*/

char *_strcpy(char *dest, char *src)
{
	/**
	* Assuming an array of characters char src[6] = "Betty";
	* and an empty array of characters char dest[6];
	* we can copy each element in the src array to dest array
	* by referencing each element in the src array by its index.
	*/

	int index = 0;

	while (index <= _strlen(src))
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
