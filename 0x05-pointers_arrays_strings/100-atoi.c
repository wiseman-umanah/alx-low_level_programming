#include "main.h"
#include <ctype.h>

/**
* _atoi - extracts integers from string
*
* @s: parameter
*
* Return: number from string
*/

int _atoi(char *s)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	while (*s && !isdigit(*s))
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s && isdigit(*s))
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (sign * num);
}
