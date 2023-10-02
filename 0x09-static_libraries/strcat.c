#include "main.h"
#include <string.h>

/**
* *_strcat - joins two strings together
*
* @dest: 1st parameter
* @src: 2nd parameter
*
* Return: combined string
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int len1;
	int len2;

	len1 = strlen(dest);
	len2 = strlen(src);
	i = 0;
	for (; i <= len2; i++)
	{
		dest[i + len1] = src[i];
	}
	return (dest);
}
