#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int jx;

	jx = 0;
	while (jx < n && src[jx] != '\0')
	{
		dest[jx] = src[jx];
		jx++;
	}
	while (jx < n)
	{
		dest[jx] = '\0';
		jx++;
	}

	return (dest);
}
