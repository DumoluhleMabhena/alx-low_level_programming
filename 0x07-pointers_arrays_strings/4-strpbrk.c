#include "main.h"
/**
 * _strpbrk - starting point
 * @s: inpit
 * @accept: another in put
 * Return: 0 for success
 */
char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
				return (s);
		}
	s++;
	}
	return ('\0');
}
