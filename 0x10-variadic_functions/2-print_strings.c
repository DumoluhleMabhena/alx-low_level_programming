#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, then a new line...
 * @separator: The string to be printed between strings that are printed...
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed...
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings is NULL, then (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strngs;
	char *strr;
	unsigned int x;

	va_start(strngs, n);

	for (x = 0; x < n;  x++)
	{
		strr = va_arg(strngs, char *);

		if (strr == NULL)
			printf("(nil)");
		else
			printf("%s", strr);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strngs);
}
