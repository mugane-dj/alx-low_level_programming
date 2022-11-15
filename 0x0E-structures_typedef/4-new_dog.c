#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog from struct dog.
*
* @name: char pointer to name element.
* @age: age element.
* @owner: char pointer to owner element.
* Return: dog_t - a typedef of struct dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name= name;
	d->age = age;
	d->owner = owner;
	return (d);
}
