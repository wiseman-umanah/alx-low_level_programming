#include <stdio.h>

/**
 * add - adds two integers
 * @a: first number
 * @b: second number
 * Return: returns the result
*/

int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * sub - subtracts two integers
 * @a: first number
 * @b: second number
 * Return: returns the result
*/

int sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * mul - multiplies two integers
 * @a: first number
 * @b: second number
 * Return: returns the result
*/

int mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}


/**
 * div - divides two integers
 * @a: first number
 * @b: second number
 * Return: returns the result
*/
int div(int a, int b)
{
	int result;

	if (b == 0)
		return (0);
	result = a / b;
	return (result);
}

/**
 * mod - b mod of a number a
 * @a: first number
 * @b: second number
 * Return: returns the result
*/
int mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
