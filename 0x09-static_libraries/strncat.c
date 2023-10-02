#include "main.h"
#include <string.h>

/**
* *_strncat - combines two strings with given number of byte of the src string
*
* @dest: 1st parameter
* @src: 2nd parameter
* @n: number of bytes
*
* Return: returns the combined string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1;

	len1 = strlen(dest);
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i + len1] = src[i];
		else
			break;
	}
	return (dest);
}
