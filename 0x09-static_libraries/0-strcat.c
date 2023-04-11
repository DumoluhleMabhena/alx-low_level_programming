#include "main.h"
#include <unistd.h>
/**
 * _strcat- pointer function
 * @dest: char pointer
 * @src: char variable
 * Return: 0 for success
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[y] = '\0';
	return (dest);
}
