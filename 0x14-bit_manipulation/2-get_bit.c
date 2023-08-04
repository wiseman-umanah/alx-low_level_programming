#include "main.h"

/**
* get_bit - gets number at index
* @n: the number
* @index: the index
* Return: returns the binary number of that index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;
	unsigned int shifts;

	for (temp = n, shifts = 0; (temp = temp >> 1) > 0; shifts++)
		;
	if (index > shifts)
		return (-1);
	return ((n >> index) & 1);
}
