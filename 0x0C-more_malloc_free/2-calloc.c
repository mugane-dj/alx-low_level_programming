#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocated memory of an array.
*
* @nmemb: number of elements in the array.
* @size: size of each element.
* Return: pointer to array allocated in mem.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	void *ar;
	unsigned int index;
	unsigned int len = size * nmemb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * sizeof(size));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	c = ar;

	for (index = 0; index < len; index++)
		c[index] = '\0';

	return (ar);
}
