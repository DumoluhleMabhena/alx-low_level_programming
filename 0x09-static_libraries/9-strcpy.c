#include "main.h"
#include <unistd.h>
/**
 * _strcpy - function
 * @dest: pointer variable
 * @src: pointer variable
 * Return: 0 for success
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;
	int m = 0;


	while (*(src + d) != '\0')
	{
		d++;
	}
	for ( ; m < d ; m++)
	{
		dest[m] = src[m];
	}
	dest[d] = '\0';
	return (dest);

}
