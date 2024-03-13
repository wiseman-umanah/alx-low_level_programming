#include "search_algos.h"

/**
 * pretty_print - prints array in specific order
 * @array: the array size
 * @start: The start of the array
 * @end: The end of the array
 * Return: none
*/

void pretty_print(int *array, size_t start, size_t end)
{	
	printf("Searching in array:");
	for (; start <= end; start++)
	{
		if (start == end)
			printf(" %d\n", array[start]);
		else
			printf(" %d,", array[start]);
	}
}


/**
 * binarySearch - Binary Search Algorithm
 * @array: the array to use
 * @start: the start of the array
 * @end: the end of the array
 * @value: The value to find
 * Return: -1 not found, index for found
*/

int binarySearch(int *array, int start, int end, int value)
{
	size_t mid;

	if (end >= start)
	{
		pretty_print(array, start, end);
		mid = (start + end) / 2;
		if(array[mid] == value)        
			return mid;
		else if(array[mid] < value)
			return binarySearch(array, mid+1, end, value);
		else
			return binarySearch(array, start, mid-1, value);
	}
	return -1;
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
	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	return (binarySearch(array, 0, size - 1, value));
}