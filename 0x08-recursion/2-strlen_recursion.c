#include <stdio.h>
/**
* _strlen_recursion - print length of string recursively
*
* @s: parameter
* Return: string len
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}
