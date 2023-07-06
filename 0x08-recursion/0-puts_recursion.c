#include <stdio.h>

/**
* _puts_recursion - prints string with new line
*
* @s: string to print
* Return: returns the string with a new line
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
