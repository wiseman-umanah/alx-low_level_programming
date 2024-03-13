#include <math.h>
#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
    int step;
    size_t start, i, j;

    start = i = 0;
    step = sqrt(size);
    for (; i < size;)
    {
        printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
        if (array[i] == value)
            return (i);
        if (array[i] > value)
        {
            printf("Value found between indexes [%d] and [%d]\n", (int)start, (int)i);
            for (j = start; j < i; j++)
            {
                printf("Value checked array[%d] = [%d]\n", (int)j, array[j]);
                if (array[j] == value)
                    return (j);
            }
        }
        else if (array[i] < value)
        {
            start = i;
            i += step;
        }
        else
            return (-1);
    }
    return (-1);
}
