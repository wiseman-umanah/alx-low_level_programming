#include "main.h"

/**
* _strpbrk - seraches a string for any of a set of bytes.
*
* @s: pointer to string.
* @accept: pointer to string to be matched.
*
* Return: pointer to byte in s that matches one of the bytes
*/

char *_strpbrk(char *s, char *accept)
{
	char *p;
	int counter, counter2;

	p = 0;
	for (counter = 0; s[counter] != '\0'; counter++)
	{
		for (counter2 = 0; accept[counter2]; counter2++)
		{
			if (accept[counter2] == s[counter])
			{
				p = &s[counter];
				return (p)
			}
		}
	}
	return (p);
}
