#include <string.h>

/**
* checker - checks if reverse string is same as string
*
* @s: string
* @start: iterate
* @end: iterate
*
* Return: 1 if true, 0 if not true
*/

int checker(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (checker(s, start + 1, end - 1));
}

/**
* is_palindrome - checks if reverse string is same as string
*
* @s: string
* Return: returns 1 if true and 0 if false
*/

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (checker(s, 0, len - 1));
}
