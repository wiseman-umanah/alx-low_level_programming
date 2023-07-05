#include <stdio.h>
#include <string.h>

/**
* _puts_recursion - prints string with new line
*
* @s: string to print
*/

void _puts_recursion(char *s)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
