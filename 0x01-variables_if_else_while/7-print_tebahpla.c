#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;
	int i;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	for (i = -1; i > -27; i--)
		putchar(alpha[i]);
	putchar("\n");
	return (0);
}
