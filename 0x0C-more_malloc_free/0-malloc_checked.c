#include "main.h"

/**
* malloc_checked - returns pointer to allocated memory
*
* @b: size of malloc
*
* Return: 98 if failed, address to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
