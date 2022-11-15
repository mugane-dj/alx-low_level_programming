#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize struct dog.
*
* @d: pointer to struct dog.
* @name: char pointer to name element.
* @age: age element within struct dog.
* @owner: char pointer to owner element.
* Return: void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
