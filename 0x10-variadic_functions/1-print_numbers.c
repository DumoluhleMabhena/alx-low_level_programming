#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbnew line.
 * @separator: The se printed between numbers.
 * @n: The n integers passed to the function.
 * @...: A variablof numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numszs;
	unsigned int ix;

	va_start(numszs, n);

	for (ix = 0; ix < n; ix++)
	{
		printf("%d", va_arg(numszs, int));

		if (ix != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numszs);
}
