#include "main.h"

/**
* swap_int - swaps the value of a and b
*
* @a: first parameter
* @b: second parameter
*/

void swap_int(int *a, int *b)
{
	int atr = *a;
	int btr = *b;

	*a = btr;
	*b = atr;
}
