#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha[26];
	int i;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
		if (alpha[i] == "q" || alpha[i] == "e")
			continue;
		putchar(alpha[i]);
	return (0);
}
