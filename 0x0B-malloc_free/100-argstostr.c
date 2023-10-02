#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main ent
 * @ac: int in
 * @av: double point
 * Return: 0 on success
 */
char *argstostr(int ac, char **av)
{
	int xi, mn, tr = 0, zl = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (xi = 0; xi < ac; xi++)
	{
		for (mn = 0; av[xi][mn]; mn++)
			zl++;
	}
	zl += ac;

	str = malloc(sizeof(char) * zl + 1);
	if (str == NULL)
		return (NULL);
	for (xi = 0; xi < ac; xi++)
	{
	for (mn = 0; av[xi][mn]; mn++)
	{
		str[tr] = av[xi][mn];
		tr++;
	}
	if (str[tr] == '\0')
	{
		str[tr++] = '\n';
	}
	}
	return (str);
}
