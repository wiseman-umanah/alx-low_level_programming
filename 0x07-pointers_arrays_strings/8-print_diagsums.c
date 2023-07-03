#include "main.h"

/**
* print_diagsums - prints the sum of the diagonals
*
* @a: pointer to the array
* @size: length/breadth of square-sized array
*
*/

void print_diagsums(int *a, int size)
{
	int i;
	long int sum;

	sum = 0;
	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum += a[i];
	}
	_putchar(sum);
	_putchar(',');
	sum = 0;
	for (i = (size - 1); i < ((size * size) - (size - 1)); i += (size - 1))
	{
		sum += a[i];
	}
	_putchar(sum);
}
