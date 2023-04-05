#include "main.h"
#include <unistd>
/**
 * _putchar - function
 * @c: pointer
 *
 * Return: 1 for success
 * For erroe, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
