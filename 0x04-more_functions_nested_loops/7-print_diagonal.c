#include "main.h"

/**
* print_diagonal - prints '\' nth number of times
*
* @n: parameter
*
* Return: 0
*/
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
		return (0);
	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
}
