#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - sum of two numbers
* @a: number1
* @b: number2
* Return: return sum of the number
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - sub of two numbers
* @a: number1
* @b: number2
* Return: return sub of the number
*/

int op_sub(int a, int b)
{
	return (a - b);
}


/**
* op_mul - multiple of two numbers
* @a: number1
* @b: number2
* Return: return mul of the number
*/


int op_mul(int a, int b)
{
	return (a * b);
}


/**
* op_div - division of two numbers
* @a: number1
* @b: number2
* Return: return div of the number
*/


int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}


/**
* op_mod - mod of two numbers
* @a: number1
* @b: number2
* Return: return mod of the number
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
