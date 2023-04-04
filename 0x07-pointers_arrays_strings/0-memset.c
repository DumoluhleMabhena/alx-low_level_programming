#include "main.h"
/**
 * _memset - fills a block of memory with particular value
 * @s: first address to be filled
 * @b: the desired value
 * @n: number of bytes that will be changed
 *
 * Return: a new and changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
