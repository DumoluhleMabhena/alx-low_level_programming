#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function
 * @str: char var
 * Return: 0 on success
 */
char *_strdup(char *str)
{
	char *bb;
	int d, m = 0;

	if (str == NULL)

		return (NULL);

	d = 0;

	while (str[d] != '\0')

		i++;


	bb = malloc(sizeof(char) * (d + 1));



	if (bb == NULL)

		return (NULL);


	for (m = 0; str[m]; m++)

		bb[m] = str[m];


	return (bb);
}

