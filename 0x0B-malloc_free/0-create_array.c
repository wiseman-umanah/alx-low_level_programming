#include "main.h"

char *create_array(unsigned int size, char c)
{
	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		int i;
		char *arr;

		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
