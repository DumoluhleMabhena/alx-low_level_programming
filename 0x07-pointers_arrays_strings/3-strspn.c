#include "main.h"
/**
 * _strspn - starting point
 * @s: input
 * @accept: pointer
 * Return: 0 for success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				d++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (d);
		}
		s++;
	}
	return (d);
}
