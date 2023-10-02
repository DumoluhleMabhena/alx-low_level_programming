#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes thcter c to stdout
 * @c: The char to print
 *
 * Return: On su 1.
 * On error, -1 is returnno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
