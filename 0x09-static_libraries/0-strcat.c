#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int ix;
	int j;

	ix = 0;
	while (dest[ix] != '\0')
	{
		ix++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[ix] = src[j];
		ix++;
		j++;
	}

	dest[ix] = '\0';
	return (dest);
}
