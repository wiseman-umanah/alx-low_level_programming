#include <stddef.h>
#include <stdarg.h>

/**
* print_numbers - prints the n numbers passed as argument
*
* @separator: separator for each number
* @n: n number of argument to work on
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
