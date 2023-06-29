#include "main.h"

/**
* reverse_array - reverses an array
*
* @a: The array
* @n: paramter
*/

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int b[900];

	j = 0;
	for (i = (n - 1); i >= 0; i--)
	{
		b[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
		if (i == (n - 1))
		{
			_putchar(a[i]);
		}
		else
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
	}
}
