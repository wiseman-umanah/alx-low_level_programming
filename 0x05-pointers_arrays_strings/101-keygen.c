#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always (0)
*/
int main(void)
{
	int i;

	srand(time(NULL));

	for (i = 0; i <= 10; i++)
	{
		printf("%d\n", rand() % 28379 + 1);
	}
	return (0);
}
