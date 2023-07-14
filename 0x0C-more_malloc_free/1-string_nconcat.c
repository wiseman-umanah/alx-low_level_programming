#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates strings with n bytes
*
* @s1: string 1 usually the destination string
* @s2: string to join to s1
* @n: number of bytes to concatenate
*
* Return: pointer to string on success, NULL if failed
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int tlen;
	int tlen2;
	char *ptr;

	i = tlen = 0;
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		tlen++;
		i++;
	}
	tlen2 = tlen + n + 1;
	ptr = malloc(tlen2 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		while (i < n)
		{
			ptr[i + tlen] = s2[i];
			i++;
		}
		i++;
	}
	ptr[tlen2 - 1] = '\0';
	return (ptr);
}
