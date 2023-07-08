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
	int j;
	int sum;

	sum = 0;
	j = 0;
	if (argc == 0)
	{
		printf("%d\n", sum);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]))
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
	}
	return (0);
}
