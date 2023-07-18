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
		printf("\n");
	else
	{
		if (d->name == NULL)
			puts("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
