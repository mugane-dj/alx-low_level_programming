#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory.
*
* Return: pointer to memory allocated.
* @b: unsigned int param.
*/

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
		exit(98);

	return (ar);
}
