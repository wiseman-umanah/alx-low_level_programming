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
	for (; i < size && array[i] < value; i += step)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		start = i;
	}
	i = (i >= size) ? (size + (step - 1)) : i;
	printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)i);
	for (; start < size; start++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)start, array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}
