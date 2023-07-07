#include "main.h"
#include <ctype.h>

/**
* _isupper - Function to check if a parameter is in capital
*
* @c: parameter to check
*
* Return: 1 if true, 0 if false
*/
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
