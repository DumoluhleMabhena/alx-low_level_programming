#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sall its paramters.
 * @n: The number of ppassed to the function.
 * @...: A variablmber of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Os.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list apen;
	unsigned int ix, sumzz = 0;

	va_start(apen, n);

	for (ix = 0; ix < n; ix++)
		sumzz += va_arg(apen, int);

	va_end(apen);

	return (sumzz);
}
