#ifndef DOG_H
#define DOG_H

/**
* struct dog - Contains dog's information
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Description: This wiil contain and print anything related to the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* struct dog_t - second dog detail
*/

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
