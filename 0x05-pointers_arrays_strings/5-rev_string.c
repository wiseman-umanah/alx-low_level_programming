#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - prints string in reversed order
*
* @s: parameters
*/

void rev_string(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
