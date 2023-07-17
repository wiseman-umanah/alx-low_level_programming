#ifndef MAIN_H
#define MAIN_H

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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
