#include "main.h"

/**
* set_string - sets pointer to another pointer
*
* @s: pointer of pointer
* @to: pointer to variable
*
*/

void set_string(char **s, char *to)
{
	*s = to;
}
