#include "main.h"
#include <c.type.h>

/**
* _islower - checks for lowercase
*
* @c: character to compare
*
* Return: 1 if true, else 0
*/
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
