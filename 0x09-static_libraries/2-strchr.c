#include "main.h"
#include <unistd.h>
/**
 * _strchr - function
 * @s: pointer variable
 * @c: char variable
 * Return: 0 for success
 */
char *_strchr(char *s, char c)
{
	int x = 0;


	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);

}
