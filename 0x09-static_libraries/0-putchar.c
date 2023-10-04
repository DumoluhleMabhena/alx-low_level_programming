#include <unistd.h>

/**
 * _putchar - writes thecter c to stdout
 * @c: The characteprint
 *
 * Return: On suss 1.
 * On error, -1 is returned, and errn set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
