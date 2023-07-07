#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* @argc: argument count
* @argv: arguments
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	long int a;
	long int b;
	long int mul;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%ld\n", mul);
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
