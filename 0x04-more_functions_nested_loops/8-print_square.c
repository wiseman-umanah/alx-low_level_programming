#include "main.h"

/**
* print_square - prints a square using #, with size n
*
* @size: size of square
*
* Return: is 0 in main function
*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return (0);
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
