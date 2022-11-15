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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
