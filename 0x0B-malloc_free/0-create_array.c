#include "main.h"
#include <unistd.h>
/**
 * _putchar - writee character c to stdout
 * @c: The character tot
 *
 * Return: On success 1.
 * On error, -1 is returned,is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
