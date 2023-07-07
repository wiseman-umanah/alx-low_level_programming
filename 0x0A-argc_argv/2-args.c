#include <stdio.h>

/**
* main - Entry point
*
* @argc: argument count
* @argv: arguments
*
* Return: always (0);
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc < 1)
		printf("%s\n", argv[argc]);
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
