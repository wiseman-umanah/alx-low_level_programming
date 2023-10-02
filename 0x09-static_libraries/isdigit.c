#include "main.h"
#include <ctype.h>

/**
* _isdigit - Checks if c is a digit
*
* Description:  Takes a parameter and output the result
* @c: parameter
*
* Return: 1 if true, 0 if false
*/
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
