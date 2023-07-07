#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
*
* @argc: argument count
* @argv: arguments
*
* Return: 0 if no error, 1 if found
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc == 0)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i][0]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				puts("Error");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
