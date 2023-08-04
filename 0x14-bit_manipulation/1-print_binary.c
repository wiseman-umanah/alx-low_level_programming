#include "main.h"

/**
* print_binary - print out the binary of a number
* @n: the number
*/

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	for (temp = n, shifts = 0; (temp = temp >> 1) > 0; shifts++)
		;
	for (; shifts >= 0; shifts--)
		printf("%ld", (n >> shifts) & 1);
}
