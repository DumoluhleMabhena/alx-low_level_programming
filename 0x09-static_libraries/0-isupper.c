#include "main.h"
#include <unistd.h>
/**
 * _isupper - function
 * @c: integer
 * Return: 0 on Success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
