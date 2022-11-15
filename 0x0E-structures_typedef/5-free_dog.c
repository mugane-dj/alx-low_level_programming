#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees memory block on malloc failure.
*
* @d: pointer to struct dog.
* Return: void.
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
	free(d->name);
	free(d->owner);
}
