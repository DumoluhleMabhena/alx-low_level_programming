#include "main.h"
#include <unistd.h>
/**
 * _putchar - function
 * @c: char variable
 * Return: 0 for success
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
