#include "main.h"

/**
* _strcmp - compares two strings
*
* @s1: first string.
* @s2: second string.
* Return: 0 if *s1 == *s2
*         negative difference if *s1 < *s2
*         positive difference if *s1 > *s2
*/

int _strcmp(char *s1, char *s2)
{

	for (; *s1 == *s2 ;)
	{
		return (0);
	}
	/**
	* Difference of ASCII values of the 1st character
	* in both strings
	*/

	return (*s1 - *s2);
}
