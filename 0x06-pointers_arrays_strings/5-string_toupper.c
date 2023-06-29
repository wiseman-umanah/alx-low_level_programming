#include "main.h"
#include <string.h>

/**
* *string_toupper - changes all lowercase string to uppercase
*
* @a: parameter
*
* Return: returns uppercase
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
