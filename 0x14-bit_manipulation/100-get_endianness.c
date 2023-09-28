#include "main.h"

/**
* get_endianness - checks the endianness of a system
* Return: 0 for big, 1 for little
*/

int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	return (0);
}
