#include "main.h"

/**
* factorial - factorial of n number
*
* @n: number
* Return: returns the result
*/

int factorial(int n)
{
	int s;

	s = 0;
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	s = n * factorial(n - 1);
	return (s);
}
