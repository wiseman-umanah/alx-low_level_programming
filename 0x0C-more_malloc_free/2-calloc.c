#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* _calloc - same function as calloc()
*
* @nmemb: no of memory block
* @size: size of each individual block
*
* Return: return pointer if successful, NULL if failed
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}
	return (ptr);
}
