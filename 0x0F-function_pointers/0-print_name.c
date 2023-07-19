#include "function_pointers.h"

/**
* print_name - prints the string
*
* @name: first parameter
* @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
