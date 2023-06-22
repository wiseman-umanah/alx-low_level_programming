#include "main.h"

/**
* print_line - print '_'  n times
*
* @n: parameter
*
* Return: will always be 0 in the main function
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_')
		}
	_putchar('\n');
	}
}
