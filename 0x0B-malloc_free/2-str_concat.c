#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - string concatenation with malloc
*
* @s1: first string
* @s2: second string
*
* Return: returns pointer to string or NULL if false
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1;
	int len2;
	int tlen;

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";
	len2 = strlen(s2);
	len1 = strlen(s1);
	tlen = len1 + len2 + 1;
	ptr = (char *)malloc(tlen);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	ptr[tlen] = '\0';
	return (ptr);
}
