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
	char cp[1000];

	cp = strcat(dest, src);
	return (cp);
}
