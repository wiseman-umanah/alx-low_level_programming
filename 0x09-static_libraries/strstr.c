#include "main.h"
/**
* _strstr - locates a substring.
* @haystack: pointer to string.
* @needle: pointer to substring.
*
* Return: pointer to beginning of located string
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hayptr = haystack;
		char *neptr = needle;

		while (*neptr && *haystack && *haystack == *neptr)
		{
			haystack++;
			neptr++;
		}

		if (!*neptr)
		{
			return (hayptr);
		}

		haystack = hayptr + 1;
	}
	return (0);
}
