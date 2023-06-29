#include "main.h"

void reverse_array(int *a, int n)
{
	int b[n];
	int i;
	int j;

	j = n - 1;
	for (i = 0; i < n; i++)
	{
		b[i] = a[j];
		if ( i == (n - 1))
		{
			_putchar(b[i]);
		}
		else
		{
			_putchar(b[i]);
			_putchar(',');
			_putchar(' ');
		}
		j--;
	}
}
