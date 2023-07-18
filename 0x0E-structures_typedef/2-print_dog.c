#include <stdio.h>
#include "dog.h"
#include <stddef.h>

/**
* print_dog - prints the details of the dog
*
* @d: pointer to dog
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		puts("nothing");
	else
	{
		if (d->name == NULL)
			puts("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			puts("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}