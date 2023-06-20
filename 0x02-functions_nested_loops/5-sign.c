#include "main.h"

/**
* print_sign - check for +ve and -ve numbers
*
* @n: character to compare
*
* Return: +1 for '+ve' numbers, -1 for '-ve' and 0 for 0
*/
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
		return (1);
	if (n == 0)
		_putchar(0);
		return (0);
	if (n < 0)
		_putchar('-');
		return (-1);
}
