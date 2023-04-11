#include "main.h"
#include <unistd.h>
/**
 * _strncpy- pointer function
 * @dest: pointer variable
 * @src: pointer variable
 * @n: int variable
 * Return: 0 for success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;


	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}


	return (dest);

}
