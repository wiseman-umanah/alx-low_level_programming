#include "main.h"

/**
* more_numbers - prints 0 to 14 ten times
*
* Return: will be 0
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
