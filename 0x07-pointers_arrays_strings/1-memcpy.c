#include "main.h"

/**
* _memcpy - adds char b to memory area
*
* @dest: pointer to destination array
* @src: character to put in dest
* @n: number of area to change
*
* Return: always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
