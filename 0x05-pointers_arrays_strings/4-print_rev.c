#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - prints string in reversed order
*
* @s: paramater
*/

void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
