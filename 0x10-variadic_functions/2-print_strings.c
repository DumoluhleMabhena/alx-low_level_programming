#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints striollowed by a new line.
 * @separator: The string toed between strings.
 * @n: The number of stringsto the function.
 * @...: A variable numbngs to be printed.
 *
 * Description: If separator is it is not printed.
 *              If.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strsz;
	char *st;
	unsigned int ix;

	va_start(strsz, n);

	for (ix = 0; ix < n; ix++)
	{
		st = va_arg(strsz, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (ix != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strsz);
}
