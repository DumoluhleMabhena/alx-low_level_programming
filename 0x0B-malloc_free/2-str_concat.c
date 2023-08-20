#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of inp add together for size
 * @s1: input one to co
 * @s2: input ncat
 * Return: concat of and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conctac;
	int mi, xi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	mi = xi = 0;
	while (s1[mi] != '\0')
		mi++;
	while (s2[xi] != '\0')
		xi++;
	conctac = malloc(sizeof(char) * (mi + xi + 1));

	if (conctac == NULL)
		return (NULL);
	mi = xi = 0;
	while (s1[mi] != '\0')
	{
		conctac[mi] = s1[mi];
		mi++;
	}

	while (s2[xi] != '\0')
	{
		conctac[mi] = s2[xi];
		mi++, xi++;
	}
	conctac[mi] = '\0';
	return (conctac);
}
