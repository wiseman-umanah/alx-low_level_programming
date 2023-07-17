#include "dog.h"
#include <stdio.h>

/**
* init_dog - initilaize the members of struct dog
*
* @d: pointer to struct
* @name: name of dog
* @age: age of dog
* @owner: dog owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
