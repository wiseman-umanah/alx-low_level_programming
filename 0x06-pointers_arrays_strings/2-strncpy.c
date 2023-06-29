#include "main.h"
#include <string.h>

/**
* *_strncpy - Copies the string using n bytes
*
* @dest: first parameter
* @src: second parameter
* @n: number of bytes
* Return: retrun combines string
*/

char *_strncpy(char *dest, char *src, int n)
{
	return ((strncpy(dest, src, n)));
}
