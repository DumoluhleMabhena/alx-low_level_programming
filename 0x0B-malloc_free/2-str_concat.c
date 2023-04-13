#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *duct;
	int d, di;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

		d = di = 0;

	while (s1[d] != '\0')
		d++;

	while (s2[di] != '\0')
		di++;

	duct = malloc(sizeof(char) * (d + di + 1));

	if (duct == NULL)
		return (NULL);

	d = di = 0;

	while (s1[d] != '\0')
	{
		duct[d] = s1[d];
		d++;
	}

	while (s2[di] != '\0')
	{
		duct[d] = s2[di];
		d++, di++;
	}

	duct[d] = '\0';

	return (duct);
}
