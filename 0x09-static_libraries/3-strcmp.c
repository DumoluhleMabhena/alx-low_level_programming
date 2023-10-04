#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int ix;

	ix = 0;
	while (s1[ix] != '\0' && s2[ix] != '\0')
	{
		if (s1[ix] != s2[ix])
		{
			return (s1[ix] - s2[ix]);
		}
	ix++;
	}
	return (0);
}
