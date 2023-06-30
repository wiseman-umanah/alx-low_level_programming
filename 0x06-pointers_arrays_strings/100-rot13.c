#include "main.h"

/**
*rot13 - encodes strings using rot13.
*@s: pointer to string.
*
*Return: pointer to encoded string.
*/

char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			*p += 13;
		}
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
		{
			*p -= 13;
		}
		p++;
	}
	return (s);
}
