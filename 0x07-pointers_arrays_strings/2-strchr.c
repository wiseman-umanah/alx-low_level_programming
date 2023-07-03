#include "main.h"
#include <stddef.h>

/**
* _strchr - search for string occurence
*
* @s: the pointer to the string
* @c: the character to search for
*
* Return: returns the character occurence
*/

char *_strchr(char *s, char c)
{
	char *str = NULL;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			str = &s[i];
			break;
		}
		i++;
	}
	return (str);
}
