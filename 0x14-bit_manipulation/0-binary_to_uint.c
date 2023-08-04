#include "main.h"

/**
* binary_to_uint - changes a binary to an unsigned int
* @b: pointer to the binary
* Return: returns thhe unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int power, total;
	int i;

	total = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (power = 1; i >= 0; i--)
	{
		if (b[i] == '1')
			total += power;
		power *= 2;
	}
	return (total / 2);
}
