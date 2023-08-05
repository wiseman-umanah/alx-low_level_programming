#include "main.h"

/**
* flip_bits - this finds out how many bits will be flipped to another number
* @n: The number
* @m: number to flip to
* Return: returns the number of digits flipped
*/

int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp, temp2;
	int count, shifts;

	count = 0;
	temp = (n ^ m);
	for (temp2 = temp, shifts = 0; (temp2 = temp2 >> 1) > 0; shifts++)
		;
	for (; shifts >= 0; shifts--)
	{
		if (((temp >> shifts) & 1) == 1)
			count++;
	}
	return (count);
}
