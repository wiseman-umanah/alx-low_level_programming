#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array - creates an array and returns a pointer
*
* @size: size of the array
* @c: the character to for initialization of array
*
* Return: returns pointer if success, else NULL
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
