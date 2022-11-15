#ifndef _DOG_H
#define _DOG_H

/**
* struct dog - type describing dog.
*
* @name: name of the dog.
* @owner: owner of the dog.
* @age: age of the dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
