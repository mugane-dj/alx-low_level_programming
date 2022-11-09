#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of chars.
*
* @size: size of array of chars.
* @c: char to initialize array.
* Return: pointer to char array if size > 0.
*         NULL if size = 0.
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i = 0;

	/*typecast unsigned int size to int*/
	int j = size;

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
	}
	while (i < j)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}
