#include "main.h"
/**
 * _memcpy - this function copies memory area
 * @dest: destination to where memory is stored
 * @src: location of where memory is copied from
 * @n: number of bytes
 *
 * Return: copied meory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int m = n;

	for (; d <  m; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
