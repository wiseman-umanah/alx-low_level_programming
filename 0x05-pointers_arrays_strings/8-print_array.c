#include <stdio.h>
#include "main.h"

/**
* print_array - prints the array separated with comma
*
* @a: array parameter
* @n: no. of array
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", a[i]);
			}
			else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
