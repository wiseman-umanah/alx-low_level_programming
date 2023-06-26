#include "main.h"
#include <string.h>
/**
* puts_half - prints half of a string
*
* @str: parameter
*/

void puts_half(char *str)
{
	size_t i;

	if (strlen(str) % 2 == 0)
	{
		for (i = strlen(str) / 2; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (strlen(str) - 1) / 2; i < strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
