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
	return (strncat(dest, src, n));
}
