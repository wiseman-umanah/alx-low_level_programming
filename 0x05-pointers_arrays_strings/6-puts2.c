#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts2 - outputs every second string
*
* @str: parameter
*/

void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
}
