#include "main.h"
#include <string.h>

/**
* _strcmp - compares two strings
*
* @s1: first parameter
* @s2: second paramteter
*
* Return: returns the compared string
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int p;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			p = 0;
		else
		{
			p = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (p);
}
