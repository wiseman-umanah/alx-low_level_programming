#include "main.h"

/**
*/

char *_strstr(char *haystack, char *needle)
{
	int len;
	char substr[100];
	int i;
	int j;

	len = strlen(needle);
	for (i = 0; i < strlen(haystack); i++)
	{
		for (j = i; j < (i +len); j++)
		{
			substr[j - i] = haystack[i];

