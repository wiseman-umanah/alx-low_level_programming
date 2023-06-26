#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
* _atoi - extracts integers from string
*
* @s: parameter
*
* Return: number from string
*/

int _atoi(char *s)
{
	char *endptr;
	int num;

	while (*s && !isdigit(*s))
	{
		s++;
	}
	num = strtol(s, &endptr, 10);
	return (num);
}
