#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicat new memory space location
 * @str: cha
 * Return: 0 on success.
 */
char *_strdup(char *str)
{
	char *ana;
	int yi, xr = 0;

	if (str == NULL)
		return (NULL);
	yi = 0;
	while (str[yi] != '\0')
		yi++;

	ana = malloc(sizeof(char) * (yi + 1));

	if (ana == NULL)
		return (NULL);

	for (xr = 0; str[xr]; xr++)
		aaa[xr] = str[xr];

	return (ana);
}
