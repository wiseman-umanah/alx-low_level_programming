#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* alloc_grid - declares and initializes array with pointers
*
* @width: width of array
* @height: height of the array
*
* Return: pointer to the array, NULL if false
*/

int **alloc_grid(int width, int height)
{
	int **num;
	int i;
	int j;

	num = NULL;
	if (width <= 0 || height <= 0)
	{
		return (num);
	}
	else
	{
		num = (int **)malloc(height * sizeof(int *));
		if (num == NULL)
		{
			return (num);
		}
		for (i = 0; i < height; i++)
		{
			num[i] = (int *)malloc(width * sizeof(int));
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				num[i][j] = 0;
			}
		}
		return (num);
	}
}
