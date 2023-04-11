#include "main.h"
#include <unistd.h>
/**
 * _memset - pointer function
 * @s: char pointer
 * @b: char variable
 * @n: unsigned int variable
 * Return: 0 for success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;


	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);

}
