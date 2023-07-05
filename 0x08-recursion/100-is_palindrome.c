#include <string.h>

/**
* is_palindrome - checks if reverse string is same as string
*
* @s: string
* Return: returns 1 if true and 0 if false
*/

int is_palindrome(char *s)
{
	char ptr[300];

	strcpy(ptr, s);
	strrev(ptr);

	if (strcmp(ptr, s) == 0)
		return (1);
	else
		return (0);
}
