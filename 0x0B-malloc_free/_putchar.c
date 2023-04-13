#include "main.h"
#include <unistd.h>
/**
 * _putchar - function
 * @c: char var
 *
 * Return: 1 when successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
