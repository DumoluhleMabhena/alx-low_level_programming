#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills function
 * @s: variable
 * @b: variable
 * @n: int variable
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - function
 * @nmemb: int var
 * @size: int var
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *hldr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	hldr = malloc(size * nmemb);

	if (hldr == NULL)
		return (NULL);

	_memset(hldr, 0, nmemb * size);

	return (hldr);
}
