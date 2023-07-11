#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
* _strdup - duplicates a string and returns a pointer to the new string
*
* @str: the string to be duplicated
*
* Return: new string if suucess, NULL if failed
*/

char *_strdup(char *str)
{
	char *spt;

	if (str == NULL)
	{
		return (NULL);
	}
	spt = malloc(strlen(str) * sizeof(char) + 1);
	if (spt == NULL)
		return (NULL);
	strcpy(spt, str);
	return (spt);
}
