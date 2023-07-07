#include <stdio.h>

/**
* main - Entry point
*
* @argc: variable count
* @argv: other arguments of function main
*
* Return: always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 0)
		printf("%s\n", argv[argc]);
	printf("%s\n", argv[0]);
	return (0);
}
