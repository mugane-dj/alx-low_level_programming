#include "dog.h"
#include <stdlib.h>

/**
* _strlen - prints the length of a string
*
* @s: pointer to the string
* Return: length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
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

	int index = 0;

	while (index <= _strlen(src))
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

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
	char *name_copy;
	char *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = malloc(_strlen(name) + 1);
		if (name_copy == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->name = _strcpy(name_copy, name);
	}

	if (owner != NULL)
	{
		owner_copy = malloc(_strlen(owner) + 1);
		if (owner_copy == NULL)
		{
			free(d->owner);
			free(d);
			return (NULL);
		}
		d->owner = _strcpy(owner_copy, owner);
	}

	d->age = age;
	return (d);
}
