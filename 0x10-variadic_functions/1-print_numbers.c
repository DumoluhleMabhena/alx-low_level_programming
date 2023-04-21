#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers that are prnted
 * @n: The number of integers passed to the function as arguments
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ints;
	unsigned int x;

	va_start(ints, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ints, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ints);
}
