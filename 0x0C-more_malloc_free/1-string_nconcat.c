#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - a function
 * @s1: string to be added
 * @s2: string to concatenate from and add
 * @n: number of bytes from s2 to concatenate to s1 as pointers
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int x = 0, y = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;

	if (n < str2)
		m = malloc(sizeof(char) * (str1 + n + 1));
	else
		m = malloc(sizeof(char) * (str1 + str2 + 1));

	if (!m)
		return (NULL);

	while (x < str1)
	{
		m[x] = s1[x];
		x++;
	}

	while (n < str2 && x < (str1 + n))
		m[x++] = s2[y++];

	while (n >= str2 && x < (str1 + str2))
		m[x++] = s2[y++];

	m[x] = '\0';

	return (m);
}
