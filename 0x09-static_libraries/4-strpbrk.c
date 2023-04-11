#include "main.h"
#include <unistd.h>
/**
 * _strpbrk - function
 * @s: pointer variable
 * @accept: pointer variable
 * Return: 0 for success
 */
char *_strpbrk(char *s, char *accept)
{
	int m;


	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		return (s);
		}
	s++;
	}


return ('\0');

}
