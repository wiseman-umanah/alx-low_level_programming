#include "main.h"

/**
* is_prime_number - checks for prime number recursively
*
* @n: number to check
* Return: 0 if less or equal to 1, move to second func
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	checker(n, 2);
}

/**
* checker - checks for highest prime factor
*
* @n: number from is_prime func
* @prime: divisor
* Return: 1 if prime, 0 if not prime
*/

int checker(int n, int prime)
{
	if (prime < n)
	{
		if (n % prime == 0)
			return (0);
			checker(n, prime + 1);
	}
	else
		return (1);
}
