#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int jx;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	jx = 0;
	while (jx < n && src[jx] != '\0')
	{
	dest[i] = src[jx];
	i++;
	jx++;
	}
	dest[i] = '\0';
	return (dest);
}
