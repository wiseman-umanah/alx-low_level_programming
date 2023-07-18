#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees the memory allocated to the dog structure
*
* @d: pointer to structure
*/

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
