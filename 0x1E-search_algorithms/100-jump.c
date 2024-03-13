#include <math.h>
#include "search_algos.h"

/**
 * pretty_print - Prints each checked value
 * @array: the array
 * @start: the start value
 * @value: the value to search
 * @end: the end of array
 * Return: -1 for not seen, index of value
*/

int pretty_print(int *array, int start, int end, int value)
{
	int j;

	for (j = start; j < end; j++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}


/**
 * jump_search - The jump algorithm
 * @array: the array
 * @size: the size of the array
 * @value: The value to find
 * Return: -1 for not seen, index of value
*/

int jump_search(int *array, size_t size, int value)
{
	int step;
	size_t start, i;

	start = i = 0;
	step = sqrt(size);
	for (; i < size;)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)i);
			return (pretty_print(array, start, ++i, value));
		}
		if (array[i] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)i);
			return (pretty_print(array, start, i, value));
		}
		start = i;
		i += step;
	}
	return (-1);
}
