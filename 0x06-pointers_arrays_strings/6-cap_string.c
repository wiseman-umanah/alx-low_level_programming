#include "main.h"
#include <ctype.h>

/**
* *cap_string - changes all initials to caps
*
* @str: parameter
*
* Return: return the string with initialized caps
*/

char *cap_string(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || !isalpha(str[i - 1]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
