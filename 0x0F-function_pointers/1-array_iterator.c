#include "function_pointers.h"

/**
* array_iterator - prints the items of an array
*
* @array: the array
* @size: the size of the array
* @action: the function pointer
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
