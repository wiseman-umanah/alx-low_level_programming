#include "search_algos.h"

/**
  * linear_search - Searches for a value linearly
  *
  * @array: The array to find the data
  * @size: The size of the array
  * @value: the value to find
  * Return: returns the index of the value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n",
				(int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

