#include "main.h"
#include <unistd.h>
/**
 * _strspn - function
 * @s: pointer variable
 * @accept: pointer variable
 * Return: 0 for success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int m;


	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);

}
