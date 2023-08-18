#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print
 * @format: list of function
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *st, *seps = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", seps, va_arg(li, int));
					break;
				case 'i':
					printf("%s%d", seps, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", seps, va_arg(li, double));
					break;
				case 's':
					st = va_arg(li, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", seps, st);
					break;
				default:
					m++;
					continue;
			}
			seps = ", ";
			m++;
		}
	}

	printf("\n");
	va_end(li);
}
