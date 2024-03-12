#include "search_algos.h"

/**
  * pretty_print - navigates the array values
  * @array: the array
  * @size: the size of the array
  * Return: nothing
*/

void pretty_print(int *array, size_t size)
{
	size_t i;
	
	for (i = 0; i < size; i++)
	{
		if (i == size - 1)
			printf(" %d\n", array[i]);
		else
			printf(" %d,", array[i]);
	}
}


/**
  * binary_search - Binary Search Algorithm
  * Description: Using bsa to search for value
  * @array: the array to use
  * @size: the size of the array to use
  * @value: The value to search for
  * Return: returns the index for success
  * or -1 for failure
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid;

	for (i = 0; i < size;)
	{
		printf("Searching in array:");
		pretty_print(array, size);
        mid = i + (size - i) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			size = mid - 1;
		else if (value > array[mid])
			i = mid + 1;
	}
	return (-1);
}

