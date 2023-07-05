#include "main.h"

/**
* _pow_recursion - finds x to pow of y
* @x: base number
* @y: power
* Return: x to pow of y
*/

int _pow_recursion(int x, int y)
{
	int pow;

	pow = 0;
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
