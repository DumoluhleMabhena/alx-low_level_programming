#include "main.h"
/**
 * _strchr: starting point
 * @s: the input
 * @c: another input
 * Return: 0 for success
 */
char *_strchr(char *s, char c)
{
	int d = 0;

	for (; s[d] >= '\0'; d++)
	{
		if (s[d] == c)
			return (&s[d]);
	}
	return (0);
}
