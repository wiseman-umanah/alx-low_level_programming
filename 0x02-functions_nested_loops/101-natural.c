#include "main.h"

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int num;
	int i;

	num = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			num += i;
		}
	}
	printf("%d\n", num);
	return (0);
}
