#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
* main - Entry point
*
* @argc: argument count
* @argv: arguments
*
* Return: returns 0 for success, 1 for failure
*/

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}
	else
	{
		int a;
		int b;
		char s;
		int result;

		result = 0;
		s = argv[2][0];
		if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
		{
			printf("Error\n");
			exit(99);
		}
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		result = (get_op_func(argv[2]))(a, b);
		printf("%d\n", result);
	}
	return (0);
}
