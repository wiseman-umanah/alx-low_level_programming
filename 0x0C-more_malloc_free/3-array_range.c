#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* array_range - prints the range of numbers
*
* @min: Start
* @max: End
*
* Return: returns pointer to array if successful, return NULL otherwise
*/

int *array_range(int min, int max)
{
	int *arr, size, i, j;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	i = 0;
	j = min;
	while (i < size)
	{
		arr[i] = j;
		j++;
		i++;
	}
	return (arr);
}
