#include <math.h>
#include "search_algos.h"

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
