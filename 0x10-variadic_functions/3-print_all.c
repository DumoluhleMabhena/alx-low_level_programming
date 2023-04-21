#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints evrti
 * @format: variable
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *srtr, *ssep = "";

	va_list lists;

	va_start(lists, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", ssep, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", ssep, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", ssep, va_arg(lists, double));
					break;
				case 's':
					srtr = va_arg(lists, char *);
					if (!srtr)
						srtr = "(nil)";
					printf("%s%s", ssep, srtr);
					break;
				default:
					x++;
					continue;
			}
			ssep = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(lists);
}
