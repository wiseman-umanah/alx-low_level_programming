#include "main.h"

/**
* _memset - adds char b to memory area
*
* @s: pointer to array
* @b: character to put in array
* @n: number of area to change
*
* Return: always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n + 1; i++)
	{
		s[i] = b;
	}
	return (0);
}
