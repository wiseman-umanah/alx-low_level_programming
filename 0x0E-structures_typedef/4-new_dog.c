#include <stddef.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
* new_dog - creates a new instance of dog
*
* @name: name of the dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to dog struct, NULL if failed
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	size_t namelen, ownerlen;

	namelen = strlen(name) + 1;
	ownerlen = strlen(owner) + 1;
	doggy = NULL;
	doggy = malloc(sizeof(struct dog));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	else
	{
		doggy->name = malloc(namelen);
		doggy->owner = malloc(ownerlen);
		if (doggy->name == NULL || doggy->owner == NULL)
		{
			free(doggy->name);
			free(doggy->owner);
			free(doggy);
			return (NULL);
		}
		strcpy(doggy->name, name);
		strcpy(doggy->owner, owner);
		doggy->age = age;
		return (doggy);
	}
}
