#include "main.h"
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, index;
	unsigned uint = 0;

	/*check if char string in NULL*/
	if (b == NULL)
		return (0);

	/*Find the len of char string*/
	for (len = 0; b[len]; len++)
		;

	/*Iterate over char string*/
	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		else
			uint += b[index] << (len - 1);
	}

	return (uint);
}
