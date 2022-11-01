#include "main.h"

/**
* _memset - fills memory with constant byte.
* 
* @s: pointer to memory area.
* @b: constant byte.
* @n: byte size.
*/

char *_memset(char *s, char b, unsigned int n)
{

	/* set condition for n != 0 bytes*/

	for (; n != 0; n--)
	{
		/**increment the pointer to s to point to 
		 * the next block in memory.
		 */

		*s++ = b;
	}

	return (s);
}
